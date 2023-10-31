// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//            Verilog HDL Design & Verification
//            EDA Pioneer
// - - - - - - - - - - - - - - - - - - - - - - - - - - - -
`timescale 1ns/100ps
module NorTestBench ;

//Clock Stimulus generation
parameter FAST_PERIOD = 10 ;
reg Clock ;
initial
begin
Clock = 0;
 forever begin
         # (FAST_PERIOD/2) Clock = ~ Clock ;
     end
end

//Reset Stimulus generation
reg Rst_n ;
initial
begin
Rst_n = 1;
# FAST_PERIOD Rst_n = 0;
# (5*FAST_PERIOD) Rst_n = 1;
end

//Access Timing Stimulus
parameter SLOW_PERIOD = 24 ;
reg [5:0] Mpi_addr ;
reg Mpi_cs_n;
reg Mpi_rw;
reg Mpi_oe;
reg [7:0] Data_out;
reg [7:0] Data_in;
tri [7:0] Mpi_data;

reg [7:0] DataSource [0:47]; //定义一个数组
integer Write_Out_File;      //定义文件指针


assign Mpi_data = ( Mpi_oe )? Data_out : 8'bz ;


//testcases
initial 
begin : ACCESS
integer i;
Mpi_addr = 0 ;
Mpi_cs_n = 1 ;
Mpi_rw = 1 ;
Mpi_oe = 0 ;
Data_out = 0 ;
$readmemh ( "Read_In_File.txt", DataSource ); //将 Read_In_File.txt 文件中的数据读出，并写入到 DataSource 数组中
Write_Out_File = $fopen("Write_Out_File.txt");//将 Write_Out_File.txt 文件打开，并将文件指针交付给 Write_Out_file
# 222 ;

for ( i=6'b101111; i>= 0; i=i-1 )//遍历 47-0 地址
    begin
        //write
        # SLOW_PERIOD;
        //Data_out = {$random} % 256; //data between 0~255
        Data_out = DataSource[i] ;//从 DataSource 数组中读取数据源
        Mpi_addr = i ;
        Mpi_rw = 0 ;
        # SLOW_PERIOD;
        Mpi_oe = 1 ;
        # (SLOW_PERIOD/4);
        Mpi_cs_n = 0 ;
        # ((2*SLOW_PERIOD) + (SLOW_PERIOD/2)) ;
        Mpi_cs_n = 1 ;
        
        $display ("Addr: %h -> DataWrite: %h", Mpi_addr, Data_out);
        
        # (SLOW_PERIOD/4);
        Mpi_addr = 0 ;
        Mpi_rw = 1 ;
        Mpi_oe = 0 ;
        
        //bus turnaround from write to read
        # SLOW_PERIOD;
        Mpi_rw = 0 ;

        //read
        # SLOW_PERIOD;
        Mpi_addr = i ;
        Mpi_rw = 1 ;
        # SLOW_PERIOD;
        # (SLOW_PERIOD/4);
        Mpi_cs_n = 0 ;
        # ((2*SLOW_PERIOD) + (SLOW_PERIOD/2)) ;
        Mpi_cs_n = 1 ;
        
        Data_in = Mpi_data; //get datafrom tri-bus
        
        $fdisplay (Write_Out_File, "@%h\n%h", Mpi_addr, Data_in);//将读出的地址和数据信息写入到 Write_Out_File 指定的文件中
        
        $display ("Addr: %h -> DataRead: %h", Mpi_addr, Data_in);
        $display ("------------------------");
        
        # (SLOW_PERIOD/4);
        Mpi_addr = 0 ;
        Mpi_rw = 0 ;
        
        //bus turnaround from read to write
        # SLOW_PERIOD;
        Mpi_rw = 1 ;  
    end
$display ("Simulation Finished!"); 
$fclose (Write_Out_File );  //关闭 Write_0ut_File 文件，释放指针
$stop;
end

// Design Module
MPI u_MPI ( 
    .Clock      (Clock), 
    .Rst_n      (Rst_n),
    .Mpi_data   (Mpi_data),
    .Mpi_addr   (Mpi_addr),         
    .Mpi_cs_n   (Mpi_cs_n), 
    .Mpi_rw     (Mpi_rw)
    ) ;

endmodule