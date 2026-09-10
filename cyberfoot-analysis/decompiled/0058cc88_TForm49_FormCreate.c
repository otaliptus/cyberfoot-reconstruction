// Address: 0058cc88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm49_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 0xe;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_0058ceee;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x58ccb7;
  FUN_00642c50(0x20f,&local_8);
  local_28 = 0x58ccc5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
  local_28 = 0x58ccd2;
  FUN_00642c50(0x211,&local_c);
  local_28 = 0x58cce0;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_c);
  local_28 = 0x58cced;
  FUN_00642c50(0x1c2,&local_10);
  local_28 = 0x58ccfb;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x314),local_10);
  local_28 = 0x58cd08;
  FUN_00642c50(0x1c1,&stack0xffffffec);
  local_28 = 0x58cd16;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x318),unaff_EBX);
  local_28 = 0x58cd25;
  FUN_00645508(*(undefined4 *)PTR_DAT_0066b2b4,&stack0xffffffe8);
  if (unaff_ESI != 0) {
    local_28 = 0x58cd3a;
    FUN_00645508(*(undefined4 *)PTR_DAT_0066b2b4,&local_1c);
    local_28 = 0x58cd4e;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x168),local_1c);
  }
  local_28 = 0x58cd79;
  FUN_00405194(&local_20,
               *(int *)PTR_DAT_0066b718 +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)PTR_DAT_0066b2b4 * 0x2f8) * 0x80);
  local_28 = 0x58cd87;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_20);
  local_28 = 0x58cda3;
  FUN_004030d4(local_44,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  local_28 = 0x58cdb2;
  FUN_004030a4(local_44,&DAT_0058cefc,0x1a);
  local_28 = 0x58cdbd;
  FUN_00405194(&local_28,local_44);
  uStack_2c = 0x58cdcd;
  FUN_00642c50(0x210,&local_48);
  uStack_2c = local_48;
  puStack_30 = &DAT_0058cf04;
  puStack_34 = &local_54;
  piVar1 = *(int **)(*(int *)PTR_DAT_0066ad70 + 0x318);
  puStack_38 = (undefined1 *)0x58cdf0;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  puStack_38 = (undefined1 *)0x58cdfc;
  FUN_00416244(local_64,uVar4,0xfc);
  puStack_38 = local_64;
  uStack_3c = 0x58ce0d;
  FUN_00416478(local_74,&LAB_0058cf10);
  puVar2 = puStack_38;
  puStack_38 = (undefined1 *)0x58ce1d;
  FUN_0050e448(piVar1,local_74,puVar2);
  puStack_38 = (undefined1 *)0x58ce28;
  FUN_00404b6c(&local_50,local_54);
  puStack_38 = (undefined1 *)0x58ce30;
  iVar5 = FUN_00409ff8(local_50);
  puStack_38 = (undefined1 *)0x58ce46;
  FUN_00405194(&local_4c,*(int *)PTR_DAT_0066b5b8 + iVar5 * 0x130);
  puStack_38 = (undefined1 *)local_4c;
  uStack_3c = 0x58ce56;
  FUN_00405330(&local_24,4);
  uStack_3c = 0x58ce64;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_24);
  uStack_3c = 0x58ce73;
  FUN_006468f4(*(undefined4 *)PTR_DAT_0066acb8,&local_78);
  uStack_3c = 0x58ce81;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),local_78);
  puVar3 = puStack_30;
  *in_FS_OFFSET = puStack_38;
  puStack_30 = &LAB_0058cef5;
  puStack_34 = (undefined4 *)0x58ce96;
  FUN_00404ff0(&local_78,puStack_38,puVar3);
  puStack_34 = (undefined4 *)0x58cea9;
  FUN_00405744(local_74,PTR_DAT_004010f8,2);
  puStack_34 = (undefined4 *)0x58ceb1;
  FUN_00404ff0(&local_54);
  puStack_34 = (undefined4 *)0x58ceb9;
  FUN_004048d4(&local_50);
  puStack_34 = (undefined4 *)0x58cec6;
  FUN_00405008(&local_4c,2);
  puStack_34 = (undefined4 *)0x58ced3;
  FUN_00405008(&local_28,3);
  puStack_34 = (undefined4 *)0x58cee0;
  FUN_004048f8(&local_1c,2);
  puStack_34 = (undefined4 *)0x58ceed;
  FUN_00405008(&stack0xffffffec,4);
  return;
}

