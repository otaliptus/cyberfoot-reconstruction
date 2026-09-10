// Address: 004f00e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f00e4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x4f00f6;
  local_8 = param_3;
  FUN_00404d94(param_3);
  puStack_14 = &LAB_004f0149;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x140))(param_1,local_8);
  (**(code **)(*(int *)param_1[0x9c] + 0xf0))();
  iVar1 = param_1[0x9b];
  *(undefined1 *)(iVar1 + 0x219) = 0;
  FUN_004ef67c(iVar1,0);
  puVar2 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f0150;
  puStack_14 = (undefined1 *)0x4f0148;
  FUN_004048d4(&local_8,uStack_18,puVar2);
  return;
}

