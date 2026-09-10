// Address: 0042128c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042128c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_004212ef;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  local_c = *(undefined4 *)(param_4 + -4);
  local_8 = 6;
  uVar2 = 0;
  FUN_00406d44(PTR_PTR_0066b19c,&local_10,param_3,0,&local_c);
  FUN_0040e3ac(PTR_DAT_0041b4b8,1,local_10);
  FUN_00404250();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_004212f6;
  FUN_004048d4(&local_10,uVar2,puVar1);
  return;
}

