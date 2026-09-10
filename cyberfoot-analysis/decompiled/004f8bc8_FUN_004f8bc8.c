// Address: 004f8bc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f8bc8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined1 local_40 [12];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = &stack0xfffffffc;
  iVar3 = 7;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_004f8c3c;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puStack_2c = local_40;
  puStack_30 = (undefined1 *)0x4f8c06;
  (**(code **)(*param_1 + 0xfc))(param_1,param_2,0);
  puStack_30 = local_40;
  uStack_34 = 0x4f8c17;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
  puVar1 = puStack_30;
  puStack_30 = (undefined1 *)0x4f8c20;
  (**(code **)(*piVar2 + 0x50))(piVar2,puVar1,param_4);
  puVar1 = puStack_24;
  *in_FS_OFFSET = (int)puStack_2c;
  puStack_24 = &LAB_004f8c43;
  iStack_28 = 0x4f8c3b;
  FUN_004056f8(local_40,PTR_DAT_00508a00,puVar1);
  return;
}

