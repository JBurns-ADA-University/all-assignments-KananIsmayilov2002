## Assignment 2
## Machine Language Instructions and Conversion
# 1. First Instruction: 0xE3A02000
Binary Representation:

1110 00 1 1101 0 0000 0010 0000 0000 0000 0000

Bits 0-3 (Condition Code): 1110 - It means "always execute".

Bits 4-5 (Op Type): 00 - Data processing operation.

Bit 6 (I): 1 - Immediate value follows.

Bits 7-10 (Opcode): 1101 - MOV operation.

Bit 11 (S): 0 - Do not update condition flags.

Bits 12-15 (Rn): 0000 - No first operand register (not used).

Bits 16-19 (Rd): 0010 - Destination register is R2.

Bits 20-31 (Immediate Value): 000000000000 - The immediate value is 0.

Assembly Instruction:

MOV R2, #0   ; Move immediate value 0 into R2

# 2. Second Instruction: 0xE1A03001
Binary Representation:

1110 00 0 1101 0 0000 0011 0000 0000 0000 0001

Bits 0-3 (Condition Code): 1110 - Always execute.

Bits 4-5 (Op Type): 00 - Data processing operation.

Bit 6 (I): 0 - Register value follows.

Bits 7-10 (Opcode): 1101 - MOV operation.

Bit 11 (S): 0 - Do not update condition flags.

Bits 12-15 (Rn): 0000 - No first operand register.

Bits 16-19 (Rd): 0011 - Destination register is R3.

Bits 20-31 (Rs): 0000 0001 - Source register is R1.

Assembly Instruction:

MOV R3, R1   ; Move the value from R1 into R3

# 3. Third Instruction: 0xE1510000
Binary Representation:

1110 00 0 1010 1 0001 0000 0000 0000 0000 0000

Bits 0-3 (Condition Code): 1110 - Always execute.

Bits 4-5 (Op Type): 00 - Data processing operation.

Bit 6 (I): 0 - Register value follows.

Bits 7-10 (Opcode): 1010 - CMP operation.

Bit 11 (S): 1 - Update condition flags.

Bits 12-15 (Rn): 0001 - First operand is R1.

Bits 16-19 (Rd): 0000 - No destination register.

Assembly Instruction:

CMP R1, R0   ; Compare R1 and R0

# 4. Fourth Instruction: 0x8A000002
Binary Representation:

1000 1010 0000 0000 0000 0000 0000 0010
This is a conditional branch instruction that checks if the previous comparison was "higher".
Assembly Instruction:

BHI loop     ; Branch to loop if R1 > R0

# 5. Fifth Instruction: 0xE2822001
Binary Representation:

1110 00 1 0100 0 0010 0010 0000 0000 0000 0001

Bits 0-3 (Condition Code): 1110 - Always execute.

Bits 4-5 (Op Type): 00 - Data processing operation.

Bit 6 (I): 1 - Immediate value follows.

Bits 7-10 (Opcode): 0100 - ADD operation.

Bit 11 (S): 0 - Do not update condition flags.

Bits 12-15 (Rn): 0010 - First operand is R2.

Bits 16-19 (Rd): 0010 - Destination register is R2.

Bits 20-31 (Immediate Value): 000000000001 - Immediate value is 1.

Assembly Instruction:

ADD R2, R2, #1  ; Increment R2 by 1

# 6. Sixth Instruction: 0xE0811003
Binary Representation:

1110 00 0 0100 0 0001 0001 0000 0000 0000 0011

Bits 0-3 (Condition Code): 1110 - Always execute.

Bits 4-5 (Op Type): 00 - Data processing operation.

Bit 6 (I): 0 - Register value follows.

Bits 7-10 (Opcode): 0100 - ADD operation.

Bit 11 (S): 0 - Do not update condition flags.

Bits 12-15 (Rn): 0001 - First operand is R1.

Bits 16-19 (Rd): 0001 - Destination register is R1.

Bits 20-31 (Rs): 0000 0011 - Second operand is R3.

Assembly Instruction:

ADD R1, R1, R3  ; Add R3 to R1

# 7. Seventh Instruction: 0xEAFFFFFA
Binary Representation:

1110 1010 1111 1111 1111 1111 1111 1010

This instruction represents unconditional branch back to the address of the CMP instruction.

Assembly Instruction:

B loop    ; Branch unconditionally to the beginning of the loop

# 8. Eighth Instruction: 0xE1A00002
Binary Representation:

1110 00 0 1101 0 0000 0000 0000 0000 0000 0010

Bits 0-3 (Condition Code): 1110 - Always execute.

Bits 4-5 (Op Type): 00 - Data processing operation.

Bit 6 (I): 0 - Register value follows.

Bits 7-10 (Opcode): 1101 - MOV operation.

Bit 11 (S): 0 - Do not update condition flags.

Bits 12-15 (Rn): 0000 - No first operand register.

Bits 16-19 (Rd): 0000 - Destination register is R0.

Bits 20-31 (Rs): 0000 0010 - Source register is R2.

Assembly Instruction:

MOV R0, R2     ; Move the final count from R2 to R0
