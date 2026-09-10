// Address: 004ff7b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff7b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_004ff770(param_1);
  iVar1 = *(int *)(param_1 + 0x24);
  iVar3 = FUN_00403c34(*(undefined4 *)(param_1 + 0x34),PTR_PTR_004f9d4c);
  iVar3 = *(int *)(iVar3 + 0xd4);
  if ((iVar3 != 0) && (-1 < *(int *)(param_1 + 0x4c))) {
    uVar4 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    iVar6 = (int)*(uint *)(iVar3 + 0x30) >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((*(uint *)(iVar3 + 0x30) & 1) != 0);
    }
    FUN_00474474(iVar3,*(undefined4 *)(param_1 + 0x20),iVar2 + iVar1 + 0x10,1,
                 *(undefined4 *)(param_1 + 0x4c),(iVar5 + *(int *)(param_1 + 0x28)) - iVar6);
  }
  return;
}

