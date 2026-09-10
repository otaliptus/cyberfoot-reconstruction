// Address: 005f5ec4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm67_bt2Click(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)0x5f5ed7;
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfff5);
  *(undefined4 *)PTR_DAT_0066ad88 = DAT_006d3ff4;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) {
    puStack_c = &LAB_005f5f43;
    uStack_10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_10;
    puStack_8 = &stack0xfffffffc;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005add64,PTR_DAT_0066adf0);
    puVar1 = puStack_8;
    *in_FS_OFFSET = uStack_10;
    puStack_8 = (undefined1 *)0x5f5f4a;
    puStack_c = (undefined1 *)0x5f5f33;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
    puStack_c = (undefined1 *)0x5f5f42;
    (**(code **)(**(int **)PTR_DAT_0066adf0 + 0xec))();
    return;
  }
  if (6 < *(int *)(PTR_DAT_0066ac78 + 0x88)) {
    puStack_c = &LAB_005f5fa9;
    uStack_10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_10;
    puStack_8 = &stack0xfffffffc;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00573de0,PTR_DAT_0066afd8);
    puVar1 = puStack_8;
    *in_FS_OFFSET = uStack_10;
    puStack_8 = (undefined1 *)0x5f5fb0;
    puStack_c = (undefined1 *)0x5f5f99;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0,puVar1);
    puStack_c = (undefined1 *)0x5f5fa8;
    (**(code **)(**(int **)PTR_DAT_0066afd8 + 0xec))();
    return;
  }
  return;
}

