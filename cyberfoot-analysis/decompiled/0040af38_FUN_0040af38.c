// Address: 0040af38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040af38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0040afa8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004055c4(&local_8,param_3);
  FUN_004050e4(&local_8,param_2,param_3);
  FUN_00404b6c(&local_c,local_8);
  uVar2 = FUN_00404da4(local_c);
  FUN_0040a9e4(param_1,uVar2,param_3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0040afaf;
  puStack_20 = (undefined1 *)0x40af9f;
  FUN_004048d4(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x40afa7;
  FUN_00404ff0(&local_8);
  return;
}

