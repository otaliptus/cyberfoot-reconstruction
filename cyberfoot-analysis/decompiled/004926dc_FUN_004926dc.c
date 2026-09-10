// Address: 004926dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004926dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_28;
  int *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x13c);
  local_2c = 0;
  local_28 = *(int *)(param_1 + 0xd8);
  local_20 = (int *)(iVar1 + 8);
  for (; local_2c < *(int *)(param_1 + 0x24); local_2c = local_2c + 1) {
    iVar7 = (*(int *)(local_28 + 0xc) * *(int *)(local_28 + 0x24)) / *(int *)(param_1 + 0x13c);
    puVar3 = *(undefined4 **)(*(int *)(iVar1 + 0x38) + local_2c * 4);
    puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + local_2c * 4);
    puVar5 = (undefined4 *)*local_20;
    local_1c = puVar5;
    local_18 = puVar4;
    local_14 = puVar3;
    for (iVar8 = 0; iVar8 < (iVar2 + 2) * iVar7; iVar8 = iVar8 + 1) {
      uVar6 = *local_1c;
      *local_18 = uVar6;
      *local_14 = uVar6;
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
    }
    for (iVar8 = 0; iVar8 < iVar7 * 2; iVar8 = iVar8 + 1) {
      puVar4[(iVar2 + -2) * iVar7 + iVar8] = puVar5[iVar7 * iVar2 + iVar8];
      puVar4[iVar7 * iVar2 + iVar8] = puVar5[(iVar2 + -2) * iVar7 + iVar8];
    }
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        puVar3[iVar8 - iVar7] = *puVar3;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    local_20 = local_20 + 1;
    local_28 = local_28 + 0x54;
  }
  return;
}

