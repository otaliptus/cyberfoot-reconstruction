// Address: 005e3efc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm90_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined1 *local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x14;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005e4255;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined1 *)0x5e3f2c;
  FUN_00642c50(999,&local_c);
  local_2c = (undefined1 *)0x5e3f3a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_c);
  local_2c = (undefined1 *)0x5e3f47;
  FUN_00642c50(1000,&local_10);
  local_2c = (undefined1 *)0x5e3f55;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_10);
  local_2c = (undefined1 *)0x5e3f62;
  FUN_00642c50(0x3e9,&stack0xffffffe8);
  local_2c = (undefined1 *)0x5e3f6d;
  FUN_00404b6c(&stack0xffffffec,unaff_ESI);
  local_2c = (undefined1 *)0x5e3f7b;
  FUN_00466238(*(undefined4 *)(param_1 + 800),unaff_EBX);
  local_2c = (undefined1 *)0x5e3f88;
  FUN_00642c50(0x3ea,&stack0xffffffe4);
  local_2c = (undefined1 *)0x5e3f96;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),unaff_EDI);
  local_2c = (undefined1 *)0x5e3fa3;
  FUN_00642c50(0x3eb,&local_28);
  local_2c = (undefined1 *)0x5e3fb3;
  FUN_004052cc(&local_24,&DAT_005e426c,local_28);
  local_2c = (undefined1 *)0x5e3fbe;
  FUN_00404b6c(&local_20,local_24);
  local_2c = (undefined1 *)0x5e3fcc;
  FUN_00466238(*(undefined4 *)(param_1 + 0x324),local_20);
  local_2c = (undefined1 *)0x5e3fd9;
  FUN_00642c50(0x3ec,&local_30);
  local_2c = (undefined1 *)0x5e3fe4;
  FUN_00404b6c(&local_2c,local_30);
  puVar1 = local_2c;
  local_2c = (undefined1 *)0x5e3ff2;
  FUN_00466238(*(undefined4 *)(param_1 + 0x310),puVar1);
  local_2c = (undefined1 *)0x5e3fff;
  FUN_00642c50(0x3ed,&local_38);
  local_2c = (undefined1 *)0x5e400a;
  FUN_00404b6c(&local_34,local_38);
  local_2c = (undefined1 *)0x5e4018;
  FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_34);
  local_2c = (undefined1 *)0x5e4024;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b540);
  if (-1 < iVar2) {
    local_8 = iVar2 + 1;
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b540 + 4 + iVar2 * 0x9c) ==
           *(int *)(PTR_DAT_0066ac78 + 0x10)) &&
         (*(int *)(*(int *)PTR_DAT_0066b540 + iVar2 * 0x9c) == *(int *)(PTR_DAT_0066ac78 + 8))) {
        local_2c = (undefined1 *)0x5e407b;
        (**(code **)(**(int **)(param_1 + 0x2f8) + 0x1d0))(*(int **)(param_1 + 0x2f8),1);
        local_2c = (undefined1 *)0x5e4085;
        FUN_00409dd8(iVar2,&local_40);
        local_2c = (undefined1 *)0x5e4090;
        FUN_004051d4(&local_3c,local_40);
        local_2c = local_3c;
        local_30 = (undefined1 *)0x5e40a2;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        local_30 = (undefined1 *)0x5e40af;
        FUN_00416244(local_50,iVar3 + -1,0xfc);
        local_30 = local_50;
        local_34 = (undefined1 *)0x5e40c0;
        FUN_00416478(local_60,&DAT_005e427c);
        puVar1 = local_30;
        local_30 = (undefined1 *)0x5e40cf;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_60,puVar1);
        local_30 = (undefined1 *)0x5e40e3;
        FUN_00405194(&local_64,*(int *)PTR_DAT_0066b540 + 0x7c + iVar2 * 0x9c);
        local_30 = local_64;
        local_34 = (undefined1 *)0x5e40f5;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        local_34 = (undefined1 *)0x5e4102;
        FUN_00416244(local_74,iVar3 + -1,0xfc);
        local_34 = local_74;
        local_38 = 0x5e4113;
        FUN_00416478(local_84,"tnome");
        puVar1 = local_34;
        local_34 = (undefined1 *)0x5e4122;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_84,puVar1);
        local_34 = (undefined1 *)0x5e413c;
        FUN_00405194(&local_88,*(int *)PTR_DAT_0066b540 + 0x91 + iVar2 * 0x9c);
        local_34 = local_88;
        local_38 = 0x5e4151;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
        local_2c = (undefined1 *)0x5e4161;
        FUN_00416244(local_98,iVar3 + -1,0xfc);
        local_2c = local_98;
        local_30 = (undefined1 *)0x5e4178;
        FUN_00416478(local_a8,"tformacao");
        puVar1 = local_2c;
        local_2c = (undefined1 *)0x5e418a;
        FUN_0050e9b8(*(undefined4 *)(param_1 + 0x2f8),local_a8,puVar1);
      }
      iVar2 = iVar2 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005e425f;
  local_24 = (undefined1 *)0x5e41b7;
  FUN_00405744(local_a8,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5e41c2;
  FUN_00404ff0(&local_88);
  local_24 = (undefined1 *)0x5e41d5;
  FUN_00405744(local_84,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5e41dd;
  FUN_00404ff0(&local_64);
  local_24 = (undefined1 *)0x5e41f0;
  FUN_00405744(local_60,PTR_DAT_004010f8,2);
  local_24 = (undefined1 *)0x5e41f8;
  FUN_004048d4(&local_40);
  local_24 = (undefined1 *)0x5e4205;
  FUN_00405008(&local_3c,2);
  local_24 = (undefined1 *)0x5e420d;
  FUN_004048d4(&local_34);
  local_24 = (undefined1 *)0x5e4215;
  FUN_00404ff0(&local_30);
  local_24 = (undefined1 *)0x5e421d;
  FUN_004048d4(&local_2c);
  local_24 = (undefined1 *)0x5e422a;
  FUN_00405008(&local_28,2);
  local_24 = (undefined1 *)0x5e4232;
  FUN_004048d4(&local_20);
  local_24 = (undefined1 *)0x5e423f;
  FUN_00405008(&stack0xffffffe4,2);
  local_24 = (undefined1 *)0x5e4247;
  FUN_004048d4(&stack0xffffffec);
  local_24 = (undefined1 *)0x5e4254;
  FUN_00405008(&local_10,2);
  return;
}

