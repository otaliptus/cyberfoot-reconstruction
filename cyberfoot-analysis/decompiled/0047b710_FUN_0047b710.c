// Address: 0047b710
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047b710(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0047b769;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0047b618(param_2,&local_8);
  uVar2 = local_8;
  FUN_0047b618(param_1,&local_c);
  FUN_004097c8(local_c,uVar2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0047b770;
  puStack_1c = (undefined1 *)0x47b768;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

