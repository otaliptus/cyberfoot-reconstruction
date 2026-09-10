// Address: 0050f85c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f85c(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_190;
  undefined1 *puStack_18c;
  undefined1 *puStack_188;
  undefined4 local_184;
  undefined1 *puStack_180;
  undefined1 *puStack_17c;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158 [65];
  undefined4 local_54 [7];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int *local_8;
  
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158[0] = 0;
  local_54[0] = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = *param_3;
  uStack_28 = param_3[1];
  uStack_24 = param_3[2];
  uStack_20 = param_3[3];
  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  puStack_17c = (undefined1 *)0x50f8ba;
  local_8 = param_1;
  FUN_004170d0(&local_1c);
  puStack_17c = (undefined1 *)0x50f8c2;
  FUN_004170d0(&local_2c);
  puStack_180 = &LAB_0050fb99;
  local_184 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_184;
  puStack_188 = (undefined1 *)0x50f8db;
  puStack_17c = &stack0xfffffffc;
  FUN_004153cc(&local_30,&local_2c);
  puStack_188 = (undefined1 *)0x50f8e8;
  iVar2 = FUN_00409678(local_30,"First");
  if (iVar2 == 0) {
    param_4[1] = 0;
  }
  else {
    puStack_188 = (undefined1 *)0x50f901;
    FUN_004153cc(&local_34,&local_2c);
    puStack_188 = (undefined1 *)0x50f90e;
    iVar2 = FUN_00409678(local_34,&DAT_0050fbc4);
    if (iVar2 == 0) {
      puStack_188 = (undefined1 *)0x50f91d;
      iVar2 = (**(code **)(*local_8 + 0x11c))();
      param_4[1] = iVar2 + -1;
    }
    else {
      puStack_188 = (undefined1 *)0x50f931;
      FUN_004153cc(&local_38,&local_2c);
      puStack_188 = (undefined1 *)0x50f93e;
      iVar2 = FUN_00409678(local_38,"Selected");
      if (iVar2 == 0) {
        puStack_188 = (undefined1 *)0x50f94d;
        iVar2 = (**(code **)(*local_8 + 0x138))();
        param_4[1] = iVar2;
      }
      else {
        puStack_18c = &LAB_0050f978;
        uStack_190 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_190;
        puStack_188 = &stack0xfffffffc;
        iVar2 = FUN_00412a6c(&local_2c);
        param_4[1] = iVar2;
        *in_FS_OFFSET = uStack_190;
      }
    }
  }
  puStack_188 = (undefined1 *)0x50f9eb;
  FUN_004153cc(local_158,&local_1c);
  puStack_188 = (undefined1 *)0x50f9fb;
  iVar2 = FUN_00409678(local_158[0],"First");
  if (iVar2 == 0) {
    *param_4 = 0;
  }
  else {
    puStack_188 = (undefined1 *)0x50fa16;
    FUN_004153cc(&local_15c,&local_1c);
    puStack_188 = (undefined1 *)0x50fa26;
    iVar2 = FUN_00409678(local_15c,&DAT_0050fbc4);
    if (iVar2 == 0) {
      puStack_188 = (undefined1 *)0x50fa38;
      iVar2 = FUN_0050ae9c(local_8[0x135]);
      *param_4 = iVar2 + -1;
    }
    else {
      puStack_188 = (undefined1 *)0x50fa4e;
      FUN_004153cc(&local_160,&local_1c);
      puStack_188 = (undefined1 *)0x50fa5e;
      iVar2 = FUN_00409678(local_160,"Selected");
      if (iVar2 == 0) {
        *param_4 = local_8[0x128];
      }
      else {
        puStack_188 = (undefined1 *)0x50fa80;
        FUN_004153cc(&local_164,&local_1c);
        puStack_188 = (undefined1 *)0x50fa94;
        iVar2 = FUN_0050b6a4(local_8[0x135],local_164);
        if (iVar2 == 0) {
          puStack_18c = &LAB_0050fae8;
          uStack_190 = *in_FS_OFFSET;
          *in_FS_OFFSET = &uStack_190;
          puStack_188 = &stack0xfffffffc;
          iVar2 = FUN_00412a6c(&local_1c);
          *param_4 = iVar2;
          *in_FS_OFFSET = uStack_190;
        }
        else {
          puStack_188 = (undefined1 *)0x50faa6;
          FUN_004153cc(&local_168,&local_1c);
          puStack_188 = (undefined1 *)0x50faba;
          FUN_0050b6a4(local_8[0x135],local_168);
          puStack_188 = (undefined1 *)0x50fabf;
          iVar2 = FUN_0050a2cc();
          *param_4 = iVar2;
        }
      }
    }
  }
  puVar1 = puStack_17c;
  *in_FS_OFFSET = local_184;
  puStack_17c = &LAB_0050fba0;
  puStack_180 = (undefined1 *)0x50fb70;
  FUN_004048f8(&local_16c,6,puVar1);
  puStack_180 = (undefined1 *)0x50fb78;
  FUN_004048d4(local_54);
  puStack_180 = (undefined1 *)0x50fb85;
  FUN_004048f8(&local_38,3);
  puStack_180 = (undefined1 *)0x50fb98;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  return;
}

