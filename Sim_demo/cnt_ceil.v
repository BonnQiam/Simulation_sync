//这是一个根据ceil信号改变进制的计数器
//这句在用Verilator静态检查时每个模块都要加的，如果有些模块有而有些模块没有则会报错
`timescale 1ns/1ns
//模块
module cnt_ceil(
  input        clk,
  input        en,
  input        rst_n,
  input  [3:0] ceil,
  output [3:0] cnt,
  output       co
);
  reg [3:0] cnt_reg;
  always@(posedge clk,negedge rst_n)
    begin
      if(!rst_n)
        cnt_reg <= 'b0;
      else
        if(en)
          if(cnt_reg >= ceil)
            cnt_reg <= 'b0;
          else
            cnt_reg <= cnt_reg + 1'b1;
    end
  assign cnt = cnt_reg;
  assign co  = en && (cnt_reg==ceil);
endmodule
