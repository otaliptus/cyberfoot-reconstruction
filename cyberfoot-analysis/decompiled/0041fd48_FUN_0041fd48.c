// Address: 0041fd48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041fd48(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0xffff;
  puStack_14 = (undefined1 *)0x41fd62;
  uVar2 = FUN_00420dec(PTR_PTR_0041bfa0,1,param_2);
  puStack_14 = &LAB_0041fd93;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x78))(param_1,uVar2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041fd9a;
  puStack_14 = (undefined1 *)0x41fd92;
  FUN_00403a84(uVar2,uStack_18,puVar1);
  return;
}

