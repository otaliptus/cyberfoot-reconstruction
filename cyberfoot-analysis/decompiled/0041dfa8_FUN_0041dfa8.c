// Address: 0041dfa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041dfa8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0041dff0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00406d44(param_2,&local_8);
  FUN_0041df70(PTR_PTR_0041b73c,local_8,param_3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041dff7;
  puStack_18 = (undefined1 *)0x41dfef;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

