// Address: 004d78e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d78e4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x20;
  puStack_14 = (undefined1 *)0x4d78fb;
  uVar3 = FUN_004d72e4(PTR_PTR_004d642c,1,param_2);
  puStack_18 = &LAB_004d7943;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_004d7fac(uVar3);
  *(undefined1 *)(param_1 + 5) = uVar2;
  FUN_004208f4(uVar3);
  (**(code **)(*param_1 + 0x70))(param_1,uVar3);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004d794a;
  puStack_18 = (undefined1 *)0x4d7942;
  FUN_00403a84(uVar3,uStack_1c,puVar1);
  return;
}

