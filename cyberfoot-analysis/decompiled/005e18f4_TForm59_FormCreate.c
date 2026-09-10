// Address: 005e18f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm59_FormCreate(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [8];
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 8;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_005e1a9e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x5e1923;
  FUN_00642c50(0x2c0,&local_8);
  puStack_28 = (undefined1 *)0x5e1931;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
  puStack_28 = (undefined1 *)0x5e193e;
  FUN_00642c50(0x2c1,&local_c);
  puStack_28 = (undefined1 *)0x5e194c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_c);
  puStack_28 = (undefined1 *)0x5e1959;
  FUN_00642c50(0x1eb,&local_10);
  puStack_28 = (undefined1 *)0x5e1967;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x308),local_10);
  puStack_28 = (undefined1 *)0x5e1974;
  FUN_00642c50(0x1ec,&stack0xffffffec);
  puStack_28 = (undefined1 *)0x5e1982;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x30c),unaff_EBX);
  puStack_28 = (undefined1 *)0x5e199e;
  FUN_00404b48(&stack0xffffffe8,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066acf4 * 0x130);
  puStack_28 = (undefined1 *)0x5e19ac;
  FUN_00466238(*(undefined4 *)(param_1 + 0x304),unaff_ESI);
  iVar1 = *(int *)PTR_DAT_0066b5ac;
  puStack_28 = (undefined1 *)0x5e19c6;
  FUN_004030d4(local_3c,*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8);
  puStack_28 = (undefined1 *)0x5e19d5;
  FUN_004030a4(local_3c,&DAT_005e1aac,0x1b);
  puStack_28 = (undefined1 *)0x5e19e0;
  FUN_00405194(&local_20,local_3c);
  puStack_28 = local_20;
  uStack_2c = 0x5e19fe;
  FUN_00642c50(*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar1 * 0x2f8) + 0x22,&local_40);
  uStack_2c = local_40;
  puStack_30 = &DAT_005e1ab4;
  uStack_34 = 0x5e1a13;
  FUN_00405330(&local_1c,3);
  uStack_34 = 0x5e1a21;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_1c);
  uStack_34 = 0x5e1a30;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066b5ac,&local_44);
  if (local_44 != 0) {
    uStack_34 = 0x5e1a45;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066b5ac,&local_48);
    uStack_34 = 0x5e1a59;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x168),local_48);
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = puStack_30;
  puStack_28 = &LAB_005e1aa5;
  uStack_2c = 0x5e1a73;
  FUN_004048f8(&local_48,2,puVar2);
  uStack_2c = 0x5e1a7b;
  FUN_00404ff0(&local_40);
  uStack_2c = 0x5e1a88;
  FUN_00405008(&local_20,2);
  uStack_2c = 0x5e1a90;
  FUN_004048d4(&stack0xffffffe8);
  uStack_2c = 0x5e1a9d;
  FUN_00405008(&stack0xffffffec,4);
  return;
}

