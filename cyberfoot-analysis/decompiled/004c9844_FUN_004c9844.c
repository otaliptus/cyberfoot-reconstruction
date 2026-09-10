// Address: 004c9844
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c9844(int param_1,undefined4 *param_2,int param_3,byte param_4,int param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  int local_8;
  
  puStack_68 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = *param_2;
  uStack_c = param_2[1];
  puStack_6c = &LAB_004c9b0d;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  local_8 = param_1;
  if (((param_3 != 0) && (-1 < param_5)) && (param_1 != 0)) {
    puStack_74 = (undefined1 *)0x4c9895;
    piVar2 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    puStack_78 = &LAB_004c9906;
    uStack_7c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_7c;
    puStack_74 = &stack0xfffffffc;
    (**(code **)(*piVar2 + 0x40))(piVar2,*(undefined4 *)(param_3 + 0x34));
    (**(code **)(*piVar2 + 0x34))(piVar2,*(undefined4 *)(param_3 + 0x30));
    uVar5 = 0;
    uVar3 = (uint)param_4;
    uVar4 = FUN_00430280(piVar2);
    FUN_00474474(param_3,uVar4,0,uVar3,param_5,uVar5);
    uVar4 = FUN_00403a54(PTR_PTR_0041c090,1);
    (**(code **)(*piVar2 + 0x58))(piVar2,uVar4);
    puVar1 = puStack_74;
    *in_FS_OFFSET = uStack_7c;
    puStack_74 = &DAT_004c990d;
    puStack_78 = (undefined1 *)0x4c9905;
    FUN_00403a84(piVar2,uStack_7c,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_004c9b14;
  puStack_6c = (undefined1 *)0x4c9b0c;
  FUN_00406880(&local_14,uStack_70,&stack0xfffffffc);
  return;
}

