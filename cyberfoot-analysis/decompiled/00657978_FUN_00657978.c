// Address: 00657978
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00657978(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int local_28 [4];
  int local_18;
  int local_14;
  
  puVar3 = PTR_DAT_0066ac7c;
  bVar7 = 0;
  bVar2 = false;
  iVar4 = 6;
  piVar6 = local_28;
  do {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_14 = -1;
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ac7c);
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    iVar5 = 0;
    do {
      if ((param_1 == *(int *)(*(int *)puVar3 + 8 + iVar5 * 0x18)) ||
         (param_1 == *(int *)(*(int *)puVar3 + 0xc + iVar5 * 0x18))) {
        iVar1 = *(int *)(*(int *)puVar3 + iVar5 * 0x18);
        if ((iVar1 == 4) || ((iVar1 == 0xe || (iVar1 == 0xf)))) {
          local_28[0] = local_28[0] + 1;
        }
        else if (iVar1 == 8) {
          local_28[1] = local_28[1] + 1;
        }
        else if (iVar1 == 0x10) {
          local_28[2] = local_28[2] + 1;
        }
        if (iVar1 == 0xd) {
          if (*(int *)(*(int *)puVar3 + 0xc + iVar5 * 0x18) == 1) {
            local_28[3] = local_28[3] + 1;
          }
          else {
            local_18 = local_18 + 1;
          }
        }
        if (*(int *)(*(int *)puVar3 + iVar5 * 0x18) == 0x13) {
          if (local_14 == -1) {
            if (param_1 == *(int *)(*(int *)puVar3 + 8 + iVar5 * 0x18)) {
              local_14 = *(int *)(*(int *)puVar3 + 0x10 + iVar5 * 0x18);
            }
            else if (param_1 == *(int *)(*(int *)puVar3 + 0xc + iVar5 * 0x18)) {
              local_14 = 0xb6 - *(int *)(*(int *)puVar3 + 0x10 + iVar5 * 0x18);
              bVar2 = true;
            }
          }
          else if (((-1 < local_14) && (bVar2)) &&
                  (param_1 == *(int *)(*(int *)puVar3 + 8 + iVar5 * 0x18))) {
            local_14 = *(int *)(*(int *)puVar3 + 0x10 + iVar5 * 0x18) - local_14;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_14 == -1) {
    local_14 = 0xb6;
  }
  piVar6 = local_28;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *piVar6;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    param_2 = param_2 + (uint)bVar7 * -2 + 1;
  }
  return;
}

