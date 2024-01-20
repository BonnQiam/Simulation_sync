class PacketToBitTranslator;

// Packet-level fields
bit [0:1] Port;         // 2 bits, indicating which port the packet is destined for
logic [0:3] Cmd;          // 2 bits, indicating the command type: 0 = No operation, 1 = add, 2 = subtract, 5 = shift left, 6 = shift right
logic [0:31] Operand1;  // 32 bits, the first operand
logic [0:31] Operand2;  // 32 bits, the second operand

// Bit-level fields
logic [0:3] req1_cmd_in;    // 4 bits, indicating the command type: 0000 = add, 0001 = subtract, 0010 = shift left, 0011 = shift right
logic [0:3] req2_cmd_in;
logic [0:3] req3_cmd_in;
logic [0:3] req4_cmd_in;

logic [0:31] req1_data_in;  // 32 bits, the first operand
logic [0:31] req2_data_in;
logic [0:31] req3_data_in;
logic [0:31] req4_data_in;

  // Constructor
  function new(Test_Port, Test_cmd, Test_Operand1, Test_Operand);
    Port = Test_Port;
    Cmd = Test_cmd;
    Operand1 = Test_Operand1;
    Operand2 = Test_Operand2;
  endfunction

  // Method to translate packet-level data to bit-level data
  function void translatePacketToBit();
  endfunction

endclass