// Address: 00472750
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472750(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_00472a4c(iVar1,param_1);
    }
    if (param_2 != 0) {
      FUN_00472a2c(param_2,param_1);
    }
  }
  return;
}

