// Address: 0051a0cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0051a0cc(void)

{
  uint in_stack_00000004;
  
  return (in_stack_00000004 >> 0x10 & 0xff) << 0x10 | (in_stack_00000004 >> 8 & 0xff) << 8 |
         in_stack_00000004 & 0xff;
}

