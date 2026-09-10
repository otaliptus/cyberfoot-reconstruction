// Address: 00492920
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492920(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  local_18 = 0;
  local_14 = *(int *)(param_1 + 0xd8);
  for (; local_18 < *(int *)(param_1 + 0x24); local_18 = local_18 + 1) {
    uVar6 = *(int *)(local_14 + 0xc) * *(int *)(local_14 + 0x24);
    iVar3 = (int)uVar6 / *(int *)(param_1 + 0x13c);
    uVar5 = *(uint *)(local_14 + 0x2c) % uVar6;
    if (uVar5 == 0) {
      uVar5 = uVar6;
    }
    if (local_18 == 0) {
      *(int *)(iVar1 + 0x48) = (int)(uVar5 - 1) / iVar3 + 1;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0x38 + *(int *)(iVar1 + 0x40) * 4) + local_18 * 4);
    for (iVar4 = 0; iVar4 < iVar3 * 2; iVar4 = iVar4 + 1) {
      *(undefined4 *)(iVar2 + (iVar4 + uVar5) * 4) = *(undefined4 *)(iVar2 + -4 + uVar5 * 4);
    }
    local_14 = local_14 + 0x54;
  }
  return;
}

