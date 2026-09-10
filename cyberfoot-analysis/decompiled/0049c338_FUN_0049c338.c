// Address: 0049c338
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049c338(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  undefined4 *local_14;
  int *local_10;
  
  iVar1 = param_1[0x5a];
  iVar2 = param_1[0x51];
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x31] != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_0049c2b8(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  local_10 = param_1 + 0x44;
  local_14 = param_2;
  for (local_20 = 0; local_20 < param_1[0x43]; local_20 = local_20 + 1) {
    iVar6 = *local_10;
    iVar3 = param_1[iVar6 + 0x3d];
    iVar5 = (int)*(short *)*local_14 >> ((byte)iVar2 & 0x1f);
    local_24 = iVar5 - *(int *)(iVar1 + 0x24 + iVar6 * 4);
    *(int *)(iVar1 + 0x24 + iVar6 * 4) = iVar5;
    iVar6 = local_24;
    if (local_24 < 0) {
      iVar6 = -local_24;
      local_24 = local_24 + -1;
    }
    iVar5 = 0;
    for (; iVar6 != 0; iVar6 = iVar6 >> 1) {
      iVar5 = iVar5 + 1;
    }
    if (0xb < iVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 6;
      (**(code **)*param_1)();
    }
    FUN_0049c1fc(iVar1,*(undefined4 *)(iVar3 + 0x14),iVar5);
    if (iVar5 != 0) {
      FUN_0049c140(iVar1,local_24,iVar5);
    }
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
  }
  puVar4 = (undefined4 *)param_1[6];
  *puVar4 = *(undefined4 *)(iVar1 + 0x10);
  puVar4[1] = *(undefined4 *)(iVar1 + 0x14);
  if (param_1[0x31] != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = param_1[0x31];
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}

