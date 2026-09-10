// Address: 0050b1b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b1b0(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20 [4];
  
  uVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 4),PTR_PTR_005025e4);
  FUN_0050b274(param_1);
  FUN_0050f004(uVar1,local_20);
  local_24 = local_20[0];
  iVar5 = 0;
  iVar2 = FUN_0050ae9c(param_1);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      iVar3 = FUN_0050b02c(param_1,iVar4);
      if (*(char *)(iVar3 + 0xa9) == '\0') {
        iVar3 = FUN_0050b02c(param_1,iVar4);
        *(undefined4 *)(iVar3 + 0xac) = 0xffffffff;
      }
      else {
        iVar3 = FUN_0050b02c(param_1,iVar4);
        *(int *)(iVar3 + 0x74) = local_24;
        iVar3 = FUN_0050b02c(param_1,iVar4);
        *(int *)(iVar3 + 0xac) = iVar5;
        iVar3 = FUN_0050b02c(param_1,iVar4);
        local_24 = local_24 + *(int *)(iVar3 + 0xb0);
        iVar5 = iVar5 + 1;
      }
      if (param_2 != '\0') {
        iVar3 = FUN_0050b02c(param_1,iVar4);
        *(int *)(iVar3 + 0x88) = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

