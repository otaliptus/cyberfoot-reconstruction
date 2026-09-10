// Address: 00599650
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_joglistCellColoring(void)

{
  byte in_stack_00000004;
  undefined4 *in_stack_0000000c;
  uint in_stack_00000010;
  
  if (((int)in_stack_00000010 <
       *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) &&
     ((in_stack_00000004 & 8) == 0)) {
    if ((in_stack_00000010 & 1) == 0) {
      *in_stack_0000000c = 0xffffff;
    }
    else {
      *in_stack_0000000c = 0xecffff;
    }
  }
  return;
}

