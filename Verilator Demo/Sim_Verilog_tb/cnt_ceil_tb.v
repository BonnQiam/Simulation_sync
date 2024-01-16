`timescale 1ns/1ns
module cnt_ceil_tb();
//输入信号
  reg        clk;
  reg        en;
  reg        rst_n;
  reg  [3:0] ceil;
//输出信号
  wire [3:0] cnt;
  wire       co;
//例化计数器
  cnt_ceil cnt_ceil_0(
    .clk   (clk),
    .en    (en),
    .rst_n (rst_n),
    .ceil  (ceil),
    .cnt   (cnt),
    .co    (co)
);
//初始化输入信号
  initial begin
    clk   = 1'b0;
    en    = 1'b0;
    rst_n = 1'b1;
    ceil  = 4'b1100;//12
  end
  initial begin//clk
    forever #1 clk = ~clk;
  end
  initial begin//en
    #1  en = 1'b1;
    #99 en = 1'b0;
  end
  initial begin//rst_n
    #10 rst_n = 1'b0;
    #1  rst_n = 1'b1;
  end
  initial begin//ceil
    #40 ceil = 4'b0110;//6
  end
  initial begin//finish
//重要的一句，在wrapper file的main函数里要能够识别到该完成语句作为结束运行的标志
    #110 $finish;
  end
endmodule
