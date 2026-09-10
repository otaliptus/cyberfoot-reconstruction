// Address: 0042653c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042653c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00426581;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00406cf4(param_2,&local_8);
  FUN_004264a4(param_1,param_2,local_8);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00426588;
  puStack_18 = (undefined1 *)0x426580;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

