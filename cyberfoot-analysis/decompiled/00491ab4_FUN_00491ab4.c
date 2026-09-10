// Address: 00491ab4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00491ab4(int param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_440 [256];
  int *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_3;
  local_8 = param_2;
  local_10 = *(int *)(param_1 + 0x84);
  local_14 = param_2 + 0x18;
  local_20 = param_2 + param_2 + 0x18 >> 1;
  local_18 = param_3 + 0x1c;
  local_24 = param_3 + param_3 + 0x1c >> 1;
  local_1c = param_5 + 0x18;
  local_28 = param_5 + param_5 + 0x18 >> 1;
  local_30 = 0x7fffffff;
  local_2c = 0;
  local_40 = local_440;
  local_3c = *(byte **)(*(int *)(param_1 + 0x88) + 8);
  local_38 = *(byte **)(*(int *)(param_1 + 0x88) + 4);
  local_34 = (byte *)**(int **)(param_1 + 0x88);
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      uVar6 = (uint)*local_34;
      if ((int)uVar6 < local_8) {
        iVar5 = (uVar6 - local_8) * (uVar6 - local_8);
        iVar4 = (uVar6 - local_14) * (uVar6 - local_14);
      }
      else if (local_14 < (int)uVar6) {
        iVar5 = (uVar6 - local_14) * (uVar6 - local_14);
        iVar4 = (uVar6 - local_8) * (uVar6 - local_8);
      }
      else {
        iVar5 = 0;
        if (local_20 < (int)uVar6) {
          iVar4 = (uVar6 - local_8) * (uVar6 - local_8);
        }
        else {
          iVar4 = (uVar6 - local_14) * (uVar6 - local_14);
        }
      }
      uVar6 = (uint)*local_38;
      if ((int)uVar6 < local_c) {
        iVar1 = (uVar6 - local_c) * 3;
        iVar2 = (uVar6 - local_18) * 3;
        iVar5 = iVar5 + iVar1 * iVar1;
        iVar4 = iVar4 + iVar2 * iVar2;
      }
      else if (local_18 < (int)uVar6) {
        iVar1 = (uVar6 - local_18) * 3;
        iVar2 = (uVar6 - local_c) * 3;
        iVar5 = iVar5 + iVar1 * iVar1;
        iVar4 = iVar4 + iVar2 * iVar2;
      }
      else if (local_24 < (int)uVar6) {
        iVar1 = (uVar6 - local_c) * 3;
        iVar4 = iVar4 + iVar1 * iVar1;
      }
      else {
        iVar1 = (uVar6 - local_18) * 3;
        iVar4 = iVar4 + iVar1 * iVar1;
      }
      uVar6 = (uint)*local_3c;
      if ((int)uVar6 < param_5) {
        iVar1 = (uVar6 - param_5) * 2;
        iVar5 = iVar5 + iVar1 * iVar1;
        iVar1 = (uVar6 - local_1c) * 2;
        iVar4 = iVar4 + iVar1 * iVar1;
      }
      else if (local_1c < (int)uVar6) {
        iVar1 = (uVar6 - local_1c) * 2;
        iVar5 = iVar5 + iVar1 * iVar1;
        iVar1 = (uVar6 - param_5) * 2;
        iVar4 = iVar4 + iVar1 * iVar1;
      }
      else if (local_28 < (int)uVar6) {
        iVar1 = (uVar6 - param_5) * 2;
        iVar4 = iVar4 + iVar1 * iVar1;
      }
      else {
        iVar1 = (uVar6 - local_1c) * 2;
        iVar4 = iVar4 + iVar1 * iVar1;
      }
      *local_40 = iVar5;
      if (iVar4 < local_30) {
        local_30 = iVar4;
      }
      local_2c = local_2c + 1;
      local_40 = local_40 + 1;
      local_3c = local_3c + 1;
      local_38 = local_38 + 1;
      local_34 = local_34 + 1;
    } while (local_2c < local_10);
  }
  iVar5 = 0;
  local_2c = 0;
  piVar3 = local_440;
  if (0 < local_10) {
    do {
      if (*piVar3 <= local_30) {
        iVar5 = iVar5 + 1;
        *param_4 = (undefined1)local_2c;
        param_4 = param_4 + 1;
      }
      local_2c = local_2c + 1;
      piVar3 = piVar3 + 1;
    } while (local_2c < local_10);
  }
  return iVar5;
}

