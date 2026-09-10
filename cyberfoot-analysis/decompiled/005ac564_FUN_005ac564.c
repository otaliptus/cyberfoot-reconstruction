// Address: 005ac564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005ac564(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = (undefined1 *)0x5ac582;
  local_8 = param_3;
  FUN_00405608(&local_8);
  puStack_2c = &LAB_005ac626;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (param_2 < 0x11) {
    puStack_28 = &stack0xfffffffc;
    FUN_00409dd8(param_2,&local_10);
    FUN_00404bf0(&local_c,&DAT_005ac63c,local_10);
    unaff_ESI = FUN_00427360(DAT_006d25b8,local_c);
  }
  else {
    puStack_28 = &stack0xfffffffc;
    if (0x10 < param_2) {
      puStack_28 = &stack0xfffffffc;
      FUN_00409dd8(param_2,&local_18);
      FUN_00404bf0(&local_14,"ch2_pj",local_18);
      unaff_ESI = FUN_00427360(DAT_006d25b8,local_14);
    }
  }
  FUN_00404b6c(&local_1c,local_8);
  FUN_00466238(unaff_ESI,local_1c);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005ac62d;
  puStack_2c = (undefined1 *)0x5ac61d;
  FUN_004048f8(&local_1c,5,puVar1);
  puStack_2c = (undefined1 *)0x5ac625;
  FUN_00404ff0(&local_8);
  return;
}

