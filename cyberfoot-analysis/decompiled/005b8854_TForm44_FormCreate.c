// Address: 005b8854
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm44_FormCreate(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  double local_c;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x10;
  do {
    local_c = (double)((ulonglong)local_c & 0xffffffff);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005b8e11;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined4 *)0x5b8884;
  FUN_00642c50(0x1ed,&stack0xffffffec);
  local_2c = (undefined4 *)0x5b8892;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),unaff_EBX);
  local_2c = (undefined4 *)0x5b889f;
  FUN_00642c50(0x1ed,&stack0xffffffe8);
  local_2c = (undefined4 *)0x5b88ad;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),unaff_ESI);
  local_2c = (undefined4 *)0x5b88ba;
  FUN_00642c50(0x1ee,&stack0xffffffe4);
  local_2c = (undefined4 *)0x5b88c8;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),unaff_EDI);
  local_2c = (undefined4 *)0x5b88d5;
  FUN_00642c50(0x1ef,&local_20);
  local_2c = (undefined4 *)0x5b88e3;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_20);
  local_2c = (undefined4 *)0x5b88f0;
  FUN_00642c50(0x1f0,&local_24);
  local_2c = (undefined4 *)0x5b88fe;
  FUN_004e1414(*(undefined4 *)(param_1 + 800),local_24);
  local_2c = (undefined4 *)0x5b890b;
  FUN_00642c50(0x1f0,&local_28);
  local_2c = (undefined4 *)0x5b8919;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_28);
  local_2c = (undefined4 *)0x5b8926;
  FUN_00642c50(0x1f1,&local_2c);
  puVar4 = local_2c;
  local_2c = (undefined4 *)0x5b8934;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x328),puVar4);
  local_2c = (undefined4 *)0x5b8941;
  FUN_00642c50(0x1f7,&local_30);
  local_2c = (undefined4 *)0x5b894f;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x32c),local_30);
  local_2c = (undefined4 *)0x5b895c;
  FUN_00642c50(0x1f2,&local_34);
  local_2c = (undefined4 *)0x5b896a;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x344),local_34);
  local_2c = (undefined4 *)0x5b8977;
  FUN_00642c50(499,&local_38);
  local_2c = (undefined4 *)0x5b8985;
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x340),local_38);
  local_2c = (undefined4 *)0x5b8992;
  FUN_00642c50(0x1f5,&local_3c);
  local_2c = (undefined4 *)0x5b89a0;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_3c);
  local_2c = (undefined4 *)0x5b89ad;
  FUN_00642c50(0x1f6,&local_40);
  local_2c = (undefined4 *)0x5b89bb;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_40);
  local_2c = &local_48;
  piVar1 = *(int **)(*(int *)PTR_DAT_0066b054 + 0x334);
  local_30 = (undefined1 *)0x5b89d6;
  uVar5 = (**(code **)(*piVar1 + 0x138))();
  local_30 = (undefined1 *)0x5b89e2;
  FUN_00416244(local_58,uVar5,0xfc);
  local_30 = local_58;
  local_34 = 0x5b89f3;
  FUN_00416478(local_68,&DAT_005b8e28);
  puVar3 = local_30;
  local_30 = (undefined1 *)0x5b8a03;
  FUN_0050e448(piVar1,local_68,puVar3);
  local_30 = (undefined1 *)0x5b8a0e;
  FUN_00404b6c(&local_44,local_48);
  local_30 = (undefined1 *)0x5b8a16;
  DAT_006d2b10 = FUN_00409ff8(local_44);
  local_30 = (undefined1 *)0x5b8a35;
  FUN_00404b48(&local_6c,*(int *)PTR_DAT_0066b5b8 + DAT_006d2b10 * 0x130);
  local_30 = (undefined1 *)0x5b8a43;
  FUN_00466238(*(undefined4 *)(param_1 + 0x2fc),local_6c);
  local_30 = (undefined1 *)0x0;
  local_34 = 1000;
  local_38 = 0x5b8a68;
  FUN_00402c38();
  local_38 = 0x5b8a6d;
  local_34 = FUN_00405c40();
  local_38 = 0x5b8a77;
  FUN_00409fa8(&local_70);
  local_30 = (undefined1 *)0x5b8a85;
  FUN_00466238(*(undefined4 *)(param_1 + 0x300),local_70);
  local_30 = (undefined1 *)0x0;
  local_34 = 1000;
  local_38 = 0x5b8aaa;
  FUN_00402c38();
  local_38 = 0x5b8aaf;
  local_34 = FUN_00405c40();
  local_38 = 0x5b8ab9;
  FUN_00409fa8(&local_74);
  local_30 = (undefined1 *)0x5b8ac7;
  FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_74);
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + DAT_006d2b10 * 0x130) != '\0') {
    local_30 = (undefined1 *)0x5b8af1;
    (**(code **)(**(int **)(param_1 + 0x308) + 0xcc))
              (*(int **)(param_1 + 0x308),CONCAT31((int3)((uint)*(int *)PTR_DAT_0066b5b8 >> 8),1));
    local_30 = (undefined1 *)0x5b8afe;
    (**(code **)(**(int **)(param_1 + 0x30c) + 100))(*(int **)(param_1 + 0x30c),1);
    local_30 = (undefined1 *)0x5b8b0b;
    (**(code **)(**(int **)(param_1 + 0x300) + 100))(*(int **)(param_1 + 0x300),0);
    local_30 = (undefined1 *)0x5b8b18;
    FUN_00642c50(500,&local_78);
    local_30 = (undefined1 *)0x5b8b26;
    FUN_0054dcb8(*(undefined4 *)(param_1 + 0x344),local_78);
    local_30 = (undefined1 *)0x0;
    local_34 = 1000;
    local_38 = 0x5b8b4b;
    FUN_00402c38();
    local_38 = 0x5b8b50;
    local_34 = FUN_00405c40();
    local_38 = 0x5b8b5a;
    FUN_00409fa8(&local_7c);
    local_30 = (undefined1 *)0x5b8b68;
    FUN_00466238(*(undefined4 *)(param_1 + 0x30c),local_7c);
  }
  iVar2 = DAT_006d2b10;
  local_30 = (undefined1 *)0x5b8b85;
  uVar5 = FUN_00402c38();
  if (*(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + iVar2 * 0x130) <=
      *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) {
    local_30 = (undefined1 *)0x5b8d6a;
    FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
    local_30 = (undefined1 *)0x5b8d77;
    FUN_00466128(*(undefined4 *)(param_1 + 0x33c),0);
    local_30 = (undefined1 *)0x5b8d84;
    FUN_00466128(*(undefined4 *)(param_1 + 0x310),0);
    local_30 = (undefined1 *)0x5b8d94;
    FUN_004659c4(*(undefined4 *)(param_1 + 0x2f8),0x144);
    local_30 = (undefined1 *)0x5b8da3;
    FUN_004659e8(DAT_006d2b0c,0x180);
  }
  else {
    local_c = *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x70 + DAT_006d2b10 * 0x130) -
              *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
    local_30 = (undefined1 *)0x5b8bea;
    uVar6 = FUN_00402c38();
    if ((int)uVar6 < 0x5b) {
      if (uVar6 < 0x1f) {
        local_30 = (undefined1 *)0x5b8c4c;
        local_80 = uVar5;
        FUN_00402c38();
        local_30 = (undefined1 *)0x5b8c59;
        thunk_FUN_0040502c(&local_10,&DAT_005b8e40);
      }
      else if (uVar6 - 0x1f < 0x1e) {
        local_30 = (undefined1 *)0x5b8c71;
        local_80 = uVar5;
        FUN_00402c38();
        local_30 = (undefined1 *)0x5b8c7e;
        thunk_FUN_0040502c(&local_10,&DAT_005b8e58);
      }
      else if (uVar6 - 0x3d < 0x1e) {
        local_30 = (undefined1 *)0x5b8c96;
        local_80 = uVar5;
        FUN_00402c38(uVar6 - 0x5b);
        local_30 = (undefined1 *)0x5b8ca3;
        thunk_FUN_0040502c(&local_10,&DAT_005b8e70);
      }
    }
    else if (uVar6 - 0x5b < 0x5a) {
      local_30 = (undefined1 *)0x5b8cbb;
      local_80 = uVar5;
      FUN_00402c38();
      local_30 = (undefined1 *)0x5b8cc8;
      thunk_FUN_0040502c(&local_10,&DAT_005b8e88);
    }
    else if (uVar6 - 0xb5 < 0xb4) {
      local_30 = (undefined1 *)0x5b8cdb;
      local_80 = uVar5;
      FUN_00402c38();
      local_30 = (undefined1 *)0x5b8ce8;
      thunk_FUN_0040502c(&local_10,&DAT_005b8e98);
    }
    else if (uVar6 - 0x169 < 0x16a) {
      local_30 = (undefined1 *)0x5b8cfd;
      local_80 = uVar5;
      FUN_00402c38();
      local_30 = (undefined1 *)0x5b8d0a;
      thunk_FUN_0040502c(&local_10,&DAT_005b8eb0);
    }
    else if (uVar6 - 0x2d3 < 0x243e) {
      local_30 = (undefined1 *)0x5b8d1f;
      local_80 = uVar5;
      FUN_00402c38(uVar6 - 0x2711);
      local_30 = (undefined1 *)0x5b8d2c;
      thunk_FUN_0040502c(&local_10,&DAT_005b8ec8);
    }
    local_30 = (undefined1 *)0x5b8d3f;
    FUN_004052cc(&local_88,local_10,&DAT_005b8ed4);
    local_30 = (undefined1 *)0x5b8d4d;
    FUN_00404b6c(&local_84,local_88);
    local_30 = (undefined1 *)0x5b8d5b;
    FUN_00466238(*(undefined4 *)(param_1 + 0x310),local_84);
  }
  puVar3 = local_24;
  *in_FS_OFFSET = (int)local_2c;
  local_24 = &LAB_005b8e18;
  local_28 = 0x5b8dbb;
  FUN_00404ff0(&local_88,local_2c,puVar3);
  local_28 = 0x5b8dc3;
  FUN_004048d4(&local_84);
  local_28 = 0x5b8dcb;
  FUN_004048d4(&local_7c);
  local_28 = 0x5b8dd3;
  FUN_00404ff0(&local_78);
  local_28 = 0x5b8de0;
  FUN_004048f8(&local_74,3);
  local_28 = 0x5b8df3;
  FUN_00405744(local_68,PTR_DAT_004010f8,2);
  local_28 = 0x5b8dfb;
  FUN_00404ff0(&local_48);
  local_28 = 0x5b8e03;
  FUN_004048d4(&local_44);
  local_28 = 0x5b8e10;
  FUN_00405008(&local_40,0xd);
  return;
}

