// Address: 005d1fd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm84_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = &stack0xfffffffc;
  iVar2 = 8;
  do {
    local_8 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_1c = &LAB_005d213b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x5d1ffe;
  FUN_00642c50(0x2b9,&local_8);
  puStack_24 = (undefined1 *)0x5d200c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_8);
  puStack_24 = (undefined1 *)0x5d2019;
  FUN_00642c50(699,&local_c);
  puStack_24 = (undefined1 *)0x5d2027;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_c);
  puStack_24 = (undefined1 *)0x5d2034;
  FUN_00642c50(0x1eb,&stack0xfffffff0);
  puStack_24 = (undefined1 *)0x5d2042;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x300),unaff_EBX);
  puStack_24 = (undefined1 *)0x5d204f;
  FUN_00642c50(0x1ec,&stack0xffffffec);
  puStack_24 = (undefined1 *)0x5d205d;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x2fc),unaff_ESI);
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066aea8 * 0x2f8) == '\0') {
    puStack_24 = (undefined1 *)0x5d208a;
    FUN_004030d4(local_38,*(int *)PTR_DAT_0066af70 + *(int *)PTR_DAT_0066aea8 * 0x2f8);
    puStack_24 = (undefined1 *)0x5d2099;
    FUN_004030a4(local_38,&DAT_005d2148,0x1a);
    puStack_24 = (undefined1 *)0x5d20a4;
    FUN_00405194(&local_1c,local_38);
    puStack_24 = local_1c;
    uStack_28 = 0x5d20b4;
    FUN_00642c50(0x2ba,&local_3c);
    uStack_28 = local_3c;
    puStack_2c = &LAB_005d2150;
    uStack_30 = 0x5d20cb;
    FUN_006468f4(*(undefined4 *)PTR_DAT_0066ae44,&local_40);
    uStack_30 = local_40;
    uStack_34 = 0x5d20db;
    FUN_00405330(&local_18,4);
    puStack_24 = (undefined1 *)0x5d20e9;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_18);
  }
  else {
    puStack_24 = (undefined1 *)0x5d20f8;
    FUN_00642c50(700,&local_44);
    puStack_24 = (undefined1 *)0x5d2106;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_44);
    puStack_24 = (undefined1 *)0x5d2113;
    FUN_00466128(*(undefined4 *)(param_1 + 0x308),0);
  }
  puVar1 = local_18;
  *in_FS_OFFSET = uStack_20;
  local_18 = &LAB_005d2142;
  local_1c = (undefined1 *)0x5d212d;
  FUN_00405008(&local_44,3,puVar1);
  local_1c = (undefined1 *)0x5d213a;
  FUN_00405008(&local_1c,6);
  return;
}

