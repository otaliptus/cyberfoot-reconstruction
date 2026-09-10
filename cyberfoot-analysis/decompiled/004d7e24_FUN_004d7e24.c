// Address: 004d7e24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d7e24(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0xffff;
  puStack_14 = (undefined1 *)0x4d7e3e;
  uVar2 = FUN_004d72e4(PTR_PTR_004d642c,1,param_2);
  puStack_18 = &LAB_004d7e6f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x7c))(param_1,uVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004d7e76;
  puStack_18 = (undefined1 *)0x4d7e6e;
  FUN_00403a84(uVar2,uStack_1c,puVar1);
  return;
}

