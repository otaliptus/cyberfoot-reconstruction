// Address: 0051a9e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a9e0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0xffff;
  puStack_14 = (undefined1 *)0x51a9fa;
  uVar2 = FUN_00420dec(PTR_PTR_0041bfa0,1,param_2);
  puStack_14 = &LAB_0051aa2b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x18))(param_1,uVar2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0051aa32;
  puStack_14 = (undefined1 *)0x51aa2a;
  FUN_00403a84(uVar2,uStack_18,puVar1);
  return;
}

