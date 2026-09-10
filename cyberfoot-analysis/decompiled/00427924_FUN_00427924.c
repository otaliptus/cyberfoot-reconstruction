// Address: 00427924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00427924(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (param_2 != iVar1) {
    if (iVar1 != 0) {
      FUN_00427158(iVar1,param_1);
    }
    *(int *)(param_1 + 0x30) = param_2;
    if (param_2 != 0) {
      FUN_00426f28(param_2,param_1);
    }
  }
  return;
}

