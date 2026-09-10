// Address: 0046d198
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046d198(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  RECT local_61;
  char local_51;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_3;
  local_8 = param_2;
  cVar1 = FUN_0046cde4(param_1);
  if ((cVar1 != '\0') && (iVar3 = FUN_00469730(param_1), iVar3 != 0)) {
    (**(code **)(*param_1 + 0x44))(param_1,&local_61);
    (**(code **)(*param_1 + 0x8c))(param_1,&local_61);
    puStack_78 = (undefined1 *)0x46d1e7;
    BVar4 = IsRectEmpty(&local_61);
    if (BVar4 == 0) {
      local_18 = param_1[0x12] - (local_61.right - local_61.left);
      local_1c = param_1[0x13] - (local_61.bottom - local_61.top);
      if (0 < *local_8) {
        *local_8 = *local_8 - local_18;
      }
      if (0 < *local_c) {
        *local_c = *local_c - local_1c;
      }
      if (0 < *param_5) {
        *param_5 = *param_5 - local_18;
      }
      if (0 < *param_4) {
        *param_4 = *param_4 - local_1c;
      }
      puStack_78 = &LAB_0046d55a;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      local_24 = 0;
      local_34 = 0;
      local_28 = 0;
      local_38 = 0;
      local_2c = 0;
      local_3c = 0;
      local_30 = 0;
      local_40 = 0;
      local_14 = local_1c;
      local_10 = local_18;
      iVar3 = FUN_00469730(param_1);
      if (-1 < iVar3 + -1) {
        local_20 = 0;
        do {
          iVar5 = FUN_004696f4(param_1,local_20);
          if ((*(char *)(iVar5 + 0x57) != '\0') ||
             (((*(byte *)(iVar5 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar5 + 0x51) & 4) == 0)))) {
            FUN_0046d114(iVar5,&local_44,&local_4c,&local_50,&local_48);
            cVar1 = *(char *)(iVar5 + 0x5b);
            if (cVar1 == '\0') {
              if (DAT_0046d56c == (*(byte *)(iVar5 + 0x61) & DAT_0046d56c)) {
                local_51 = '\x01';
                if (0 < local_44) {
                  local_44 = ((local_61.right - local_61.left) - *(int *)(iVar5 + 0x48)) - local_44;
                }
                if (0 < local_48) {
                  local_48 = ((local_61.right - local_61.left) + local_48) - *(int *)(iVar5 + 0x48);
                }
              }
              else {
                local_51 = '\0';
              }
            }
            else if ((byte)(cVar1 - 1U) < 2) {
              local_51 = '\x01';
            }
            else if (cVar1 == '\x05') {
              local_51 = '\x02';
            }
            else {
              local_51 = '\x03';
            }
            if (*(char *)(iVar5 + 0x5b) == '\0') {
              if (DAT_0046d570 == (*(byte *)(iVar5 + 0x61) & DAT_0046d570)) {
                cVar1 = '\x01';
                if (0 < local_4c) {
                  local_4c = ((local_61.bottom - local_61.top) - *(int *)(iVar5 + 0x4c)) - local_4c;
                }
                if (0 < local_50) {
                  local_50 = ((local_61.bottom - local_61.top) + local_50) - *(int *)(iVar5 + 0x4c);
                }
              }
              else {
                cVar1 = '\0';
              }
            }
            else {
              bVar2 = *(char *)(iVar5 + 0x5b) - 3;
              if (bVar2 < 2) {
                cVar1 = '\x01';
              }
              else if (bVar2 == 2) {
                cVar1 = '\x02';
              }
              else {
                cVar1 = '\x03';
              }
            }
            if ((byte)(local_51 - 1U) < 2) {
              if (((0 < local_44) && (*local_8 < local_44)) &&
                 (*local_8 = local_44, local_24 < *local_8)) {
                local_24 = *local_8;
              }
              if (((0 < local_48) && (local_48 < *param_5)) &&
                 (*param_5 = local_48, local_28 < *param_5)) {
                local_28 = *param_5;
              }
            }
            else if (local_51 == '\x03') {
              local_34 = local_34 + *(int *)(iVar5 + 0x48);
              local_38 = local_38 + *(int *)(iVar5 + 0x48);
            }
            if ((byte)(cVar1 - 1U) < 2) {
              if (((0 < local_4c) && (*local_c < local_4c)) &&
                 (*local_c = local_4c, local_2c < *local_c)) {
                local_2c = *local_c;
              }
              if (((0 < local_50) && (local_50 < *param_4)) &&
                 (*param_4 = local_50, local_30 < *param_4)) {
                local_30 = *param_4;
              }
            }
            else if ((byte)(cVar1 - 1U) == 2) {
              local_3c = local_3c + *(int *)(iVar5 + 0x4c);
              local_40 = local_40 + *(int *)(iVar5 + 0x4c);
            }
          }
          local_20 = local_20 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((0 < local_24) && (*local_8 < local_24 + local_34)) {
        *local_8 = local_24 + local_34;
      }
      if ((0 < local_28) && ((*param_5 == 0 || (*param_5 < local_28 + local_38)))) {
        *param_5 = local_28 + local_38;
      }
      if ((0 < local_2c) && (*local_c < local_2c + local_3c)) {
        *local_c = local_2c + local_3c;
      }
      if ((0 < local_30) && ((*param_4 == 0 || (*param_4 < local_30 + local_40)))) {
        *param_4 = local_30 + local_40;
      }
      *in_FS_OFFSET = uStack_7c;
      if (0 < *local_8) {
        *local_8 = *local_8 + local_10;
      }
      if (0 < *local_c) {
        *local_c = *local_c + local_14;
      }
      if (0 < *param_5) {
        *param_5 = *param_5 + local_18;
      }
      if (0 < *param_4) {
        *param_4 = *param_4 + local_1c;
      }
      return;
    }
  }
  return;
}

