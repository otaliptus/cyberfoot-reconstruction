// Address: 004ab078
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab078(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  int *local_c;
  undefined4 local_8;
  
  puStack_2c = (undefined1 *)0x4ab094;
  local_8 = param_3;
  local_c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_30 = &LAB_004ab124;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  (**(code **)(*local_c + 0x40))(local_c,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  (**(code **)(*local_c + 0x34))(local_c,uVar1);
  uVar1 = (**(code **)(*local_c + 0x20))();
  puVar3 = local_1c;
  uVar2 = (**(code **)(*local_c + 0x2c))();
  FUN_0041c990(0,0,uVar2,puVar3,uVar1);
  puVar3 = local_1c;
  uVar1 = FUN_00430280(local_c);
  (**(code **)(*param_1 + 0x14))(param_1,uVar1,puVar3);
  (**(code **)(*local_c + 0x60))(local_c,param_2,local_8);
  puVar3 = puStack_30;
  *in_FS_OFFSET = param_4;
  puStack_30 = &LAB_004ab12b;
  uStack_34 = 0x4ab123;
  FUN_00403a84(local_c,param_4,puVar3);
  return;
}

