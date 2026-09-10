// Address: 0048abe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048abe4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0048ac49;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_c = *(undefined4 *)(*param_1 + 0x14);
  local_8 = 0;
  uVar2 = 0;
  FUN_00406d44(PTR_PTR_0066b324,&local_10,param_3,0,&local_c);
  FUN_0040e3ac(PTR_LAB_0048ab78,1,local_10);
  FUN_00404250();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_0048ac50;
  FUN_004048d4(&local_10,uVar2,puVar1);
  return;
}

