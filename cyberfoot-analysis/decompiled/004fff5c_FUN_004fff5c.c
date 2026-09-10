// Address: 004fff5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fff5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 0x34),PTR_PTR_004fa0fc);
  if ((*(int *)(iVar1 + 0xd0) != 0) && (-1 < *(int *)(param_1 + 0x18))) {
    iVar2 = FUN_00473f5c(*(int *)(iVar1 + 0xd0));
    if (*(int *)(param_1 + 0x18) < iVar2) {
      FUN_004ffee4(param_1,*(undefined4 *)(iVar1 + 0xd0),*(undefined4 *)(param_1 + 0x18));
    }
  }
  return;
}

