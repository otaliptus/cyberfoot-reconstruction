// Address: 00492824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492824(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x13c);
  local_20 = 0;
  local_1c = *(int *)(param_1 + 0xd8);
  for (; local_20 < *(int *)(param_1 + 0x24); local_20 = local_20 + 1) {
    iVar5 = (*(int *)(local_1c + 0xc) * *(int *)(local_1c + 0x24)) / *(int *)(param_1 + 0x13c);
    puVar3 = *(undefined4 **)(*(int *)(iVar1 + 0x38) + local_20 * 4);
    puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + local_20 * 4);
    iVar6 = 0;
    local_18 = puVar3;
    local_14 = puVar4;
    if (0 < iVar5) {
      do {
        puVar3[iVar6 - iVar5] = puVar3[(iVar2 + 1) * iVar5 + iVar6];
        puVar4[iVar6 - iVar5] = puVar4[(iVar2 + 1) * iVar5 + iVar6];
        puVar3[(iVar2 + 2) * iVar5 + iVar6] = *local_18;
        puVar4[(iVar2 + 2) * iVar5 + iVar6] = *local_14;
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
      } while (iVar6 < iVar5);
    }
    local_1c = local_1c + 0x54;
  }
  return;
}

