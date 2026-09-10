// Address: 0050b738
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b738(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0050ae9c(param_1,param_2,param_3,param_2,param_3);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
      if ((*(byte *)(iVar2 + 0xc5) & 4) != 0) {
        if ((*(byte *)(iVar2 + 0xc5) & 1) == 0) {
          FUN_00509e9c(*(int *)(iVar2 + 0x90),
                       (param_3 - param_2) + *(int *)(*(int *)(iVar2 + 0x90) + 8));
        }
        else {
          FUN_00509ec4(*(int *)(iVar2 + 0x90),
                       (param_3 - param_2) + *(int *)(*(int *)(iVar2 + 0x90) + 0x14));
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

