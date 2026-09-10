// Address: 004da9b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004da9b4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004daa12;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar3 = FUN_004d4f44();
  FUN_004dbb50(param_2,&local_8);
  uVar2 = local_8;
  FUN_00405118(&local_c,uVar3);
  FUN_004099a8(local_c,uVar2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004daa19;
  puStack_1c = (undefined1 *)0x4daa11;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

