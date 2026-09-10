// Address: 004ab2b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab2b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  puStack_24 = &LAB_004ab376;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_30 = &LAB_004ab2fb;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar2 = FUN_00421234(PTR_PTR_0041c10c,1,param_2,10,param_3);
  *in_FS_OFFSET = uStack_34;
  puStack_30 = &LAB_004ab359;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*param_1 + 0x54))(param_1,uVar2);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004ab360;
  puStack_30 = (undefined1 *)0x4ab358;
  FUN_00403a84(uVar2,uStack_34,puVar1);
  return;
}

