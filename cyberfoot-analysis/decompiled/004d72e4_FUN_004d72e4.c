// Address: 004d72e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d72e4(undefined4 param_1,char param_2,undefined4 param_3,short param_4)

{
  undefined1 *puVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_28 = 0;
  local_2c = 0;
  local_20 = 0;
  local_24 = 0;
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_48 = (undefined1 *)0x4d7309;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_4c = &LAB_004d742b;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  if (param_4 == -1) {
    puStack_48 = &stack0xfffffffc;
    iVar2 = FUN_004d3720(param_3);
    if (iVar2 < 0) {
      DVar3 = GetLastError();
      FUN_004d37b8(DVar3,&local_c);
      FUN_004d36e8(param_3,&local_20);
      local_1c = local_20;
      local_18 = 0xf;
      local_14 = local_c;
      local_10 = 0xf;
      puVar5 = &local_1c;
      uVar4 = 1;
      FUN_00406d44(PTR_PTR_0066b7a0,&local_24);
      FUN_0040e3ac(PTR_DAT_0041b2a0,1,local_24,uVar4,puVar5);
      iVar2 = FUN_00404250();
    }
  }
  else {
    puStack_48 = &stack0xfffffffc;
    iVar2 = FUN_004d3744(param_3,param_4);
    if (iVar2 < 0) {
      DVar3 = GetLastError();
      FUN_004d37b8(DVar3,&local_c);
      FUN_004d36e8(param_3,&local_28);
      local_1c = local_28;
      local_18 = 0xf;
      local_14 = local_c;
      local_10 = 0xf;
      puVar5 = &local_1c;
      uVar4 = 1;
      FUN_00406d44(PTR_PTR_0066ac60,&local_2c);
      FUN_0040e3ac(PTR_DAT_0041b2fc,1,local_2c,uVar4,puVar5);
      iVar2 = FUN_00404250();
    }
  }
  FUN_00420d28(param_1,0,iVar2);
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_004d7432;
  puStack_4c = (undefined1 *)0x4d740a;
  FUN_004048d4(&local_2c,uStack_50,puVar1);
  puStack_4c = (undefined1 *)0x4d7412;
  FUN_00404ff0(&local_28);
  puStack_4c = (undefined1 *)0x4d741a;
  FUN_004048d4(&local_24);
  puStack_4c = (undefined1 *)0x4d7422;
  FUN_00404ff0(&local_20);
  puStack_4c = (undefined1 *)0x4d742a;
  FUN_00404ff0(&local_c);
  return;
}

