// Address: 0042771c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042771c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_004278e4(iVar1,param_1);
    }
    *(int *)(param_1 + 0x10) = param_2;
    if (param_2 != 0) {
      FUN_004278d8(param_2,param_1);
    }
  }
  return;
}

