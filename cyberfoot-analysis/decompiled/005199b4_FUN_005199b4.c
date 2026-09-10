// Address: 005199b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005199b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint *in_FS_OFFSET;
  uint uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x6;
  puStack_1c = (undefined1 *)0x5199d0;
  uVar2 = FUN_00516d7c(PTR_PTR_00516c7c,1,param_1);
  puStack_1c = &LAB_00519a0a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00519874(uVar2,param_2,param_3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = (uint)param_4;
  puStack_1c = &LAB_00519a11;
  uStack_20 = 0x519a09;
  FUN_00403a84(uVar2,(uint)param_4,puVar1);
  return;
}

