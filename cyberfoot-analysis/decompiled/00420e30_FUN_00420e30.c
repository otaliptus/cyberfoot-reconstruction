// Address: 00420e30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420e30(int param_1,char param_2,undefined4 param_3,undefined4 param_4,short param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_5;
  
  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_48 = (undefined1 *)0x420e53;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_4c = &LAB_00420f59;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (param_5 == -1) {
    puStack_48 = &stack0xfffffffc;
    uVar2 = FUN_0040a334(param_3,param_4);
    FUN_00420d28(param_1,0,uVar2);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_0040a6b0(param_3,&local_1c);
      local_18 = local_1c;
      local_14 = 0xb;
      DVar3 = GetLastError();
      FUN_0040db5c(DVar3,&local_20);
      local_10 = local_20;
      local_c = 0xb;
      FUN_0040e468(PTR_DAT_0041b2a0,1,PTR_PTR_0066b7a0,1,&local_18);
      FUN_00404250();
    }
  }
  else {
    puStack_48 = &stack0xfffffffc;
    uVar2 = FUN_0040a2b8(param_3,param_5);
    FUN_00420d28(param_1,0,uVar2);
    if (*(int *)(param_1 + 4) < 0) {
      FUN_0040a6b0(param_3,&local_24);
      local_18 = local_24;
      local_14 = 0xb;
      DVar3 = GetLastError();
      FUN_0040db5c(DVar3,&local_28);
      local_10 = local_28;
      local_c = 0xb;
      FUN_0040e468(PTR_DAT_0041b2fc,1,PTR_PTR_0066ac60,1,&local_18);
      FUN_00404250();
    }
  }
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00420f60;
  puStack_4c = (undefined1 *)0x420f58;
  FUN_004048f8(&local_28,4,puVar1);
  return;
}

