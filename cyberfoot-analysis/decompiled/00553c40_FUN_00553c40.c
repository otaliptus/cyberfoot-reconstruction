// Address: 00553c40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00553c40(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = (undefined1 *)0x553c56;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_24 = &LAB_00553ce7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00404e04(local_8,2,2,&local_c);
  FUN_00553ba4(local_c);
  FUN_00404e04(local_8,4,2,&local_10);
  FUN_00553ba4(local_10);
  FUN_00404e04(local_8,6,2,&local_14);
  FUN_00553ba4(local_14);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00553cee;
  puStack_24 = (undefined1 *)0x553ce6;
  FUN_004048f8(&local_14,4,puVar1);
  return;
}

