// Address: 0040e644
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e644(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_8 = 0;
  puStack_38 = &LAB_0040e6e0;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  if (param_1 == 0) {
    FUN_00406d44(PTR_PTR_0066b450,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_0040496c(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_14 = 0xb;
  local_c = 0;
  puVar3 = &local_20;
  uVar2 = 2;
  local_18 = param_2;
  local_10 = param_3;
  FUN_00406d44(PTR_PTR_0066b59c,&local_24);
  FUN_0040e3ac(PTR_DAT_00408fb4,1,local_24,uVar2,puVar3);
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uVar2;
  puStack_3c = &LAB_0040e6e7;
  FUN_004048d4(&local_24,uVar2,puVar1);
  FUN_004048d4(&local_8);
  return;
}

