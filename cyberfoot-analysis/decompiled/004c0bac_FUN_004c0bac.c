// Address: 004c0bac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c0bac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 **ppuVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint extraout_EDX;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 **local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_14;
  int local_10;
  
  local_20 = (undefined4 *)&stack0xfffffffc;
  iVar6 = 6;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  local_24 = (undefined4 *)&LAB_004c0db6;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined1 **)0x4c0be4;
  FUN_00404928(param_4,param_2);
  local_2c = (undefined1 **)0x4c0bf1;
  bVar3 = FUN_004c0b10(param_1,1);
  if ((bVar3 & 1) == 0) {
    local_14 = 1;
    local_2c = (undefined1 **)0x4c0c0d;
    iVar6 = FUN_00404ba4(param_1);
    if (0 < iVar6) {
      iVar7 = 1;
      do {
        local_2c = (undefined1 **)0x4c0c27;
        iVar4 = FUN_004c09bc(param_1,iVar7);
        bVar3 = (byte)(iVar4 + -1);
        if (bVar3 < 2) {
          local_2c = (undefined1 **)&local_20;
          local_30 = (undefined4 *)0x4c0c43;
          FUN_00404e04(*param_4,1,local_14 + -1);
          local_2c = (undefined1 **)local_20;
          local_30 = (undefined4 *)0x4c0c52;
          uVar5 = FUN_004c0b8c(*(undefined1 *)(param_1 + -1 + iVar7));
          local_30 = (undefined4 *)0x4c0c5c;
          FUN_00404abc(&local_24,uVar5);
          local_30 = local_24;
          local_34 = &local_28;
          local_38 = (undefined4 *)0x4c0c6a;
          iVar4 = FUN_00404ba4(*param_4);
          local_38 = (undefined4 *)0x4c0c7a;
          FUN_00404e04(*param_4,local_14,(iVar4 - local_14) + 1);
          local_34 = local_28;
          local_38 = (undefined4 *)0x4c0c89;
          FUN_00404c64(param_4,3);
          local_14 = local_14 + 1;
        }
        else if ((byte)((char)iVar4 - 4U) < 2) {
          local_2c = (undefined1 **)0x4c0c9b;
          iVar4 = FUN_00404ba4(*param_4,CONCAT31((int3)((uint)(iVar4 + -1) >> 8),bVar3 - 2));
          if (iVar4 < local_14) {
            local_2c = (undefined1 **)0x4c0cab;
            FUN_00404abc(&local_2c,extraout_EDX & 0xffffff00);
            ppuVar1 = local_2c;
            local_2c = (undefined1 **)0x4c0cb5;
            FUN_00404bac(param_4,ppuVar1);
          }
          local_14 = local_14 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    local_2c = (undefined1 **)0x4c0cce;
    local_14 = FUN_00404ba4(*param_4);
    local_2c = (undefined1 **)0x4c0cd9;
    iVar6 = FUN_00404ba4(param_1);
    if (-1 < iVar6 + -1) {
      local_10 = 0;
      do {
        local_2c = (undefined1 **)0x4c0cf5;
        iVar7 = FUN_00404ba4(param_1);
        local_2c = (undefined1 **)0x4c0d04;
        iVar4 = FUN_004c09bc(param_1,iVar7 - local_10);
        if ((byte)(iVar4 - 1U) < 2) {
          local_2c = (undefined1 **)&local_30;
          local_30 = (undefined1 **)0x4c0d1f;
          FUN_00404e04(*param_4,1,local_14);
          local_2c = (undefined1 **)local_30;
          local_30 = (undefined4 *)0x4c0d2e;
          uVar5 = FUN_004c0b8c(*(undefined1 *)(param_1 + -1 + (iVar7 - local_10)));
          local_30 = (undefined4 *)0x4c0d38;
          FUN_00404abc(&local_34,uVar5);
          local_30 = local_34;
          local_34 = &local_38;
          local_38 = (undefined4 *)0x4c0d46;
          iVar7 = FUN_00404ba4(*param_4);
          local_38 = (undefined4 *)0x4c0d56;
          FUN_00404e04(*param_4,local_14 + 1,iVar7 - local_14);
          local_34 = local_38;
          local_38 = (undefined4 *)0x4c0d65;
          FUN_00404c64(param_4,3);
        }
        else if ((byte)((char)iVar4 - 4U) < 2) {
          if (local_14 < 1) {
            local_2c = (undefined1 **)0x4c0d7e;
            FUN_00404abc(&local_3c,iVar4 - 1U & 0xffffff00);
            local_2c = (undefined1 **)0x4c0d8a;
            FUN_00404bf0(param_4,local_3c,*param_4);
          }
          else {
            local_14 = local_14 + -1;
          }
        }
        local_10 = local_10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = (undefined4 *)&LAB_004c0dbd;
  local_24 = (undefined4 *)0x4c0db5;
  FUN_004048f8(&local_3c,8,puVar2);
  return;
}

