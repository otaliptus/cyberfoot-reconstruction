// Address: 0052323c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052323c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined1 local_1c [16];
  int *local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  puStack_34 = &LAB_00523385;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_3c = 0;
  uStack_40 = 0;
  puStack_44 = (undefined1 *)0x0;
  puStack_48 = local_1c;
  puStack_4c = (undefined1 *)0x523274;
  local_8 = param_1;
  FUN_0041c990(0,0,0);
  puStack_44 = local_1c;
  puStack_48 = (undefined1 *)0x523285;
  FUN_00406d44(&PTR_DAT_00516764,&local_20);
  puStack_48 = (undefined1 *)local_20;
  puStack_4c = (undefined1 *)0x52329a;
  FUN_00403c80(local_8,local_8,0);
  puStack_50 = &LAB_00523363;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_58 = (undefined1 *)0x5232b5;
  puStack_4c = &stack0xfffffffc;
  (**(code **)(**(int **)(local_8 + 0x30) + 0x18))(*(int **)(local_8 + 0x30),param_2);
  puStack_58 = (undefined1 *)0x5232c2;
  (**(code **)(**(int **)(local_8 + 0x2c) + 0x10))(*(int **)(local_8 + 0x2c),param_2);
  puStack_58 = (undefined1 *)0x5232d1;
  local_c = (int *)FUN_0051a8f0(PTR_PTR_00515e78,1,local_8);
  puStack_5c = &LAB_00523302;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puStack_58 = &stack0xfffffffc;
  (**(code **)(*local_c + 0x18))(local_c,param_2);
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_00523309;
  puStack_5c = (undefined1 *)0x523301;
  FUN_00403a84(local_c,uStack_60,puVar1);
  return;
}

