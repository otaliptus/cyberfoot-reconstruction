// Address: 00553cf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00553cf8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_1c = (undefined1 *)0x553d15;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_1c = (undefined1 *)0x553d1d;
  FUN_00404d94(local_c);
  puStack_20 = &LAB_00553d6b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004095b0(local_c,&local_10);
  uVar2 = local_10;
  FUN_004095b0(local_8,&local_14);
  FUN_00404ee8(local_14,uVar2);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00553d72;
  puStack_20 = (undefined1 *)0x553d6a;
  FUN_004048f8(&local_14,4,puVar1);
  return;
}

