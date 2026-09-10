// Address: 004c4fd4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_20 = &LAB_004c5030;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004c552c(param_2,&local_8);
  uVar2 = local_8;
  FUN_004c552c(param_1,&local_c);
  FUN_004c4edc(local_c,uVar2,param_3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004c5037;
  puStack_20 = (undefined1 *)0x4c502f;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

