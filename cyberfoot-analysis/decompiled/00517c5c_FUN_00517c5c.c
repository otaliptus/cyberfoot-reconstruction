// Address: 00517c5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00517c5c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = -iVar1;
  if (-iVar1 == 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x10) + -1;
  return;
}

