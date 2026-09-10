// Address: 00517270
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00517270(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined2 local_16;
  int local_14;
  int local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    puStack_24 = (undefined1 *)0x517290;
    local_8 = (int *)FUN_00403a54(PTR_PTR_0041c090,1);
    puStack_28 = &LAB_0051732e;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    iVar2 = *(int *)(param_1 + 0x14) + 0xe + *(int *)(param_1 + 0x18);
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*local_8 + 4))(local_8,iVar2);
    FUN_004032a8(&local_16,0xe,0);
    local_16 = 0x4d42;
    local_c = *(int *)(param_1 + 0x14) + 0xe;
    local_14 = iVar2;
    (**(code **)(*local_8 + 0x10))(local_8,&local_16,0xe);
    (**(code **)(*local_8 + 0x10))
              (local_8,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(*local_8 + 0x10))
              (local_8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    FUN_004208f4(local_8);
    (**(code **)(**(int **)(param_1 + 4) + 0x54))(*(int **)(param_1 + 4),local_8);
    puVar1 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x517335;
    puStack_28 = (undefined1 *)0x51732d;
    FUN_00403a84(local_8,uStack_2c,puVar1);
    return;
  }
  return;
}

