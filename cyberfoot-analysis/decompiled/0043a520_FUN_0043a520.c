// Address: 0043a520
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043a520(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_18;
  int local_14;
  
  iVar3 = *(int *)(param_1 + 0x160);
  FUN_0042b4b4(iVar3,*(undefined4 *)(param_1 + 0x168));
  FUN_0042b4c0(iVar3,*(undefined4 *)(param_1 + 0x16c));
  uVar4 = FUN_0042a990(*(undefined4 *)(iVar3 + 0x10));
  local_14 = (int)uVar4 >> 1;
  if (local_14 < 0) {
    local_14 = local_14 + (uint)((uVar4 & 1) != 0);
  }
  iVar5 = FUN_0042a990(*(undefined4 *)(iVar3 + 0x10));
  iVar5 = *(int *)(param_1 + 0x48) - iVar5;
  iVar6 = FUN_0042a990(*(undefined4 *)(iVar3 + 0x10));
  iVar6 = *(int *)(param_1 + 0x4c) - iVar6;
  iVar7 = FUN_0042a990(*(undefined4 *)(iVar3 + 0x10));
  iVar9 = iVar6 + 1;
  iVar8 = iVar5 + 1;
  if (iVar7 == 0) {
    iVar9 = iVar6;
    iVar8 = iVar5;
  }
  iVar5 = iVar9;
  if (iVar8 < iVar9) {
    iVar5 = iVar8;
  }
  cVar1 = *(char *)(param_1 + 0x170);
  if (((cVar1 == '\x01') || (cVar1 == '\x03')) || (local_18 = local_14, cVar1 == '\x05')) {
    local_18 = iVar8 - iVar5 >> 1;
    if (local_18 < 0) {
      local_18 = local_18 + (uint)((iVar8 - iVar5 & 1U) != 0);
    }
    local_18 = local_14 + local_18;
    iVar8 = iVar9 - iVar5 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (uint)((iVar9 - iVar5 & 1U) != 0);
    }
    local_14 = local_14 + iVar8;
    iVar9 = iVar5;
    iVar8 = iVar5;
  }
  bVar2 = *(byte *)(param_1 + 0x170);
  if (bVar2 < 2) {
    FUN_0042b158(iVar3,local_18,local_14,iVar9 + local_14,iVar8 + local_18);
  }
  else if ((byte)(bVar2 - 2) < 2) {
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    FUN_0042b1bc(iVar3,local_18,local_14,iVar5 >> 2,iVar5 >> 2,iVar9 + local_14,iVar8 + local_18);
  }
  else if ((byte)(bVar2 - 4) < 2) {
    FUN_0042af44(iVar3,local_18,local_14,iVar9 + local_14,iVar8 + local_18);
  }
  return;
}

