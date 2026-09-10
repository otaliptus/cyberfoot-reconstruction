// Address: 0063e8ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_gridview2CellFormating(void)

{
  undefined1 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  
  *in_stack_0000000c =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  if (*(int *)(PTR_DAT_0066ac78 + 0xc0) < 0xb) {
    if (in_stack_00000010 == *(int *)(PTR_DAT_0066ac78 + 0xc0) + 1) {
      *in_stack_00000008 = DAT_0063e910;
    }
  }
  else if (in_stack_00000010 == 0xb) {
    *in_stack_00000008 = DAT_0063e910;
  }
  return;
}

