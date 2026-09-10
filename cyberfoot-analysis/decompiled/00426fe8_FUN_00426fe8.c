// Address: 00426fe8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426fe8(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0041e1b8(*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0) {
    FUN_00403a84();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

