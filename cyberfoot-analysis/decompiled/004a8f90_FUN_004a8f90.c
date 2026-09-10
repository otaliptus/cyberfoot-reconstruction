// Address: 004a8f90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8f90(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    do {
      *param_3 = *param_2;
      param_3[1] = *param_4;
      param_3 = param_3 + 2;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

