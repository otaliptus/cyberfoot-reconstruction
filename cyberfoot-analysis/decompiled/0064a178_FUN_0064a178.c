// Address: 0064a178
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064a178(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_18 = 0;
  puStack_28 = (undefined1 *)0x64a19a;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_28 = (undefined1 *)0x64a1a2;
  FUN_00404d94(local_c);
  puStack_28 = (undefined1 *)0x64a1aa;
  FUN_00404d94(local_10);
  puStack_2c = &LAB_0064a23a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_38 = &LAB_0064a215;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  FUN_00487b04(*(undefined4 *)PTR_DAT_0066b3ac,&local_18);
  FUN_0040a5fc(local_18,&local_14);
  FUN_00404bac(&local_14,"cyberfoot.ini");
  piVar3 = (int *)FUN_00440828(PTR_PTR_00440778,1,local_14);
  uVar2 = local_10;
  (**(code **)(*piVar3 + 4))(piVar3,local_8,local_c);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uVar2;
  *in_FS_OFFSET = puStack_34;
  puStack_2c = &LAB_0064a241;
  uStack_30 = 0x64a239;
  FUN_004048f8(&local_18,5,puVar1);
  return;
}

