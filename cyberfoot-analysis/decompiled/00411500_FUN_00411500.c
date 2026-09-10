// Address: 00411500
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00411500(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_30 = &LAB_0041158f;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  FUN_00417254(param_1,&local_18);
  local_14 = local_18;
  local_10 = 0xb;
  FUN_00417254(param_2,&local_1c);
  local_c = local_1c;
  local_8 = 0xb;
  puVar3 = &local_14;
  uVar2 = 1;
  FUN_00406d44(PTR_PTR_0066ac64,&local_20);
  FUN_0040e3ac(PTR_DAT_00410fec,1,local_20,uVar2,puVar3);
  FUN_00404250();
  puVar1 = puStack_34;
  *in_FS_OFFSET = uVar2;
  puStack_34 = &LAB_00411596;
  FUN_004048f8(&local_20,3,puVar1);
  return;
}

