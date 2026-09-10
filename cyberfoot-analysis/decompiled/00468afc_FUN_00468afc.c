// Address: 00468afc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00468afc(int *param_1,byte param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint *in_FS_OFFSET;
  undefined1 local_44 [8];
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  local_34 = *param_3;
  uStack_30 = param_3[1];
  uStack_2c = param_3[2];
  uStack_28 = param_3[3];
  local_9 = param_2;
  local_8 = param_1;
  if ((param_2 == 0) || ((&DAT_00662fa4)[param_2] != *(char *)((int)param_1 + 0x61))) {
    if ((param_1[0x24] != 0) && (param_1[0x25] != 0)) {
      local_10 = param_1[0x10];
      local_14 = param_1[0x11];
      local_18 = param_1[0x12];
      local_1c = param_1[0x13];
      cVar2 = FUN_0046cde4(param_1[0xc]);
      if (cVar2 == '\0') {
        FUN_0041c968(*(undefined4 *)(local_8[0xc] + 0x48),*(undefined4 *)(local_8[0xc] + 0x4c),
                     &local_24);
      }
      else {
        (**(code **)(*(int *)local_8[0xc] + 0x44))((int *)local_8[0xc],local_44);
        local_24 = local_3c;
        local_20 = local_38;
      }
      if ((*(byte *)((int)local_8 + 0x61) & 4) == 0) {
        if ((*(byte *)((int)local_8 + 0x61) & 1) == 0) {
          local_10 = MulDiv(local_8[0x22],local_24,local_8[0x24]);
          iVar3 = (int)local_18 >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((local_18 & 1) != 0);
          }
          local_10 = local_10 - iVar3;
        }
      }
      else if ((*(byte *)((int)local_8 + 0x61) & 1) == 0) {
        local_10 = local_24 - (local_8[0x24] - local_8[0x22]);
      }
      else {
        local_18 = local_24 - (local_8[0x24] - local_8[0x22]);
      }
      if ((*(byte *)((int)local_8 + 0x61) & 8) == 0) {
        if ((*(byte *)((int)local_8 + 0x61) & 2) == 0) {
          local_14 = MulDiv(local_8[0x23],local_20,local_8[0x25]);
          iVar3 = (int)local_1c >> 1;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uint)((local_1c & 1) != 0);
          }
          local_14 = local_14 - iVar3;
        }
      }
      else if ((*(byte *)((int)local_8 + 0x61) & 2) == 0) {
        local_14 = local_20 - (local_8[0x25] - local_8[0x23]);
      }
      else {
        local_1c = local_20 - (local_8[0x25] - local_8[0x23]);
      }
      *(undefined1 *)((int)local_8 + 0x62) = 1;
      *in_FS_OFFSET = (uint)&stack0xffffffa4;
      (**(code **)(*local_8 + 0x84))(local_8,local_10,local_14,local_1c,local_18);
      *in_FS_OFFSET = local_1c;
      *(undefined1 *)((int)local_8 + 0x62) = 0;
      return;
    }
    if (param_2 == 0) {
      return;
    }
  }
  local_18 = *(int *)(*(int *)(param_4 + -8) + 8) - **(int **)(param_4 + -8);
  if ((((int)local_18 < 0) || ((byte)(param_2 - 3) < 2)) || (param_2 == 6)) {
    local_18 = param_1[0x12];
  }
  local_1c = *(int *)(*(int *)(param_4 + -8) + 0xc) - *(int *)(*(int *)(param_4 + -8) + 4);
  if ((((int)local_1c < 0) || ((byte)(param_2 - 1) < 2)) || (param_2 == 6)) {
    local_1c = param_1[0x13];
  }
  local_10 = **(int **)(param_4 + -8);
  local_14 = *(int *)(*(int *)(param_4 + -8) + 4);
  switch(param_2) {
  case 1:
    piVar1 = (int *)(*(int *)(param_4 + -8) + 4);
    *piVar1 = *piVar1 + local_1c;
    break;
  case 2:
    piVar1 = (int *)(*(int *)(param_4 + -8) + 0xc);
    *piVar1 = *piVar1 - local_1c;
    local_14 = *(int *)(*(int *)(param_4 + -8) + 0xc);
    break;
  case 3:
    **(int **)(param_4 + -8) = **(int **)(param_4 + -8) + local_18;
    break;
  case 4:
    piVar1 = (int *)(*(int *)(param_4 + -8) + 8);
    *piVar1 = *piVar1 - local_18;
    local_10 = *(int *)(*(int *)(param_4 + -8) + 8);
    break;
  case 6:
    local_10 = param_1[0x10];
    local_14 = param_1[0x11];
    (**(code **)(**(int **)(param_4 + -4) + 0xa8))
              (*(int **)(param_4 + -4),param_1,&local_10,&local_34,*(undefined4 *)(param_4 + -8));
  }
  *(undefined1 *)((int)local_8 + 0x62) = 1;
  *in_FS_OFFSET = (uint)&stack0xffffffa4;
  (**(code **)(*local_8 + 0x84))(local_8,local_10,local_14,local_1c,local_18);
  *in_FS_OFFSET = local_1c;
  *(undefined1 *)((int)local_8 + 0x62) = 0;
  return;
}

