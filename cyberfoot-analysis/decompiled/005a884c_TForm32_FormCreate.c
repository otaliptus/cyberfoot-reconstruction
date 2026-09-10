// Address: 005a884c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_FormCreate(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar6;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0x1e;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005a95a7;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x5a887c;
  FUN_00642c50(0x1a8,&local_c);
  local_2c = 0x5a888a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_c);
  local_2c = 0x5a8897;
  FUN_00642c50(0x1aa,&local_10);
  local_2c = 0x5a88a5;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_10);
  local_2c = 0x5a88b2;
  FUN_00642c50(0x1ab,&stack0xffffffec);
  local_2c = 0x5a88c0;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),unaff_EBX);
  local_2c = 0x5a88cd;
  FUN_00642c50(0x1ac,&stack0xffffffe8);
  local_2c = 0x5a88db;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),unaff_ESI);
  local_2c = 0x5a88e8;
  FUN_00642c50(0x1ad,&stack0xffffffe4);
  local_2c = 0x5a88f6;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x30c),unaff_EDI);
  local_2c = 0x5a8903;
  FUN_00642c50(0x1ae,&local_20);
  local_2c = 0x5a8911;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x314),local_20);
  local_2c = 0x5a891e;
  FUN_00642c50(0x1af,&local_24);
  local_2c = 0x5a892c;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_24);
  local_2c = 0x5a8939;
  FUN_00642c50(0x1b0,&local_28);
  local_2c = 0x5a8947;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x330),local_28);
  local_2c = 0x5a8954;
  FUN_00642c50(0x1b1,&local_2c);
  uVar2 = local_2c;
  local_2c = 0x5a8962;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),uVar2);
  local_2c = 0x5a896f;
  FUN_00642c50(0x1b2,&local_30);
  local_2c = 0x5a897d;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x318),local_30);
  local_2c = 0x5a898a;
  FUN_00642c50(0x1b3,&local_34);
  local_2c = 0x5a8998;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),local_34);
  local_2c = 0x5a89a5;
  FUN_00642c50(0x1c5,&local_38);
  local_2c = 0x5a89b3;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x378),local_38);
  local_2c = 0x5a89c0;
  FUN_00642c50(0x1b5,&local_3c);
  local_2c = 0x5a89ce;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_3c);
  local_2c = 0x5a89db;
  FUN_00642c50(0x1a9,&local_40);
  local_2c = 0x5a89e9;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x338),local_40);
  local_2c = 0x5a89f6;
  FUN_00642c50(0x1c6,&local_44);
  local_2c = 0x5a8a04;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x33c),local_44);
  local_2c = 0x5a8a11;
  FUN_00642c50(0x1c7,&local_48);
  local_2c = 0x5a8a1f;
  FUN_004e1414(*(undefined4 *)(param_1 + 900),local_48);
  local_2c = 0x5a8a2c;
  FUN_00642c50(0xde,&local_4c);
  local_2c = 0x5a8a3a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x358),local_4c);
  local_2c = 0x5a8a47;
  FUN_00642c50(0xdc,&local_50);
  local_2c = 0x5a8a55;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x35c),local_50);
  local_2c = 0x5a8a62;
  FUN_00642c50(0x3e2,&local_54);
  local_2c = 0x5a8a70;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x360),local_54);
  local_2c = 0x5a8a7d;
  FUN_00642c50(0x3e3,&local_58);
  local_2c = 0x5a8a8b;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x364),local_58);
  local_2c = 0x5a8a97;
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    local_8 = iVar5;
    do {
      local_2c = 0x5a8ab9;
      (**(code **)(**(int **)(param_1 + 0x340) + 0x1d0))(*(int **)(param_1 + 0x340),1);
      local_2c = 0x5a8ad6;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294),&local_60);
      local_2c = 0x5a8ae1;
      FUN_004051d4(&local_5c,local_60);
      local_2c = local_5c;
      piVar1 = *(int **)(param_1 + 0x340);
      local_30 = (undefined *)0x5a8af5;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_30 = (undefined *)0x5a8b04;
      (**(code **)(*piVar1 + 0x194))(piVar1,0,iVar5 + -1);
      if (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + iVar6 * 0x294) != '\0') {
        local_30 = &DAT_005a95bc;
        piVar1 = *(int **)(param_1 + 0x340);
        local_34 = 0x5a8b31;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_34 = 0x5a8b43;
        (**(code **)(*piVar1 + 0x194))(piVar1,1,iVar5 + -1);
      }
      local_30 = *(undefined **)
                  (PTR_DAT_0066b294 + *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar6 * 0x294) * 4
                  );
      piVar1 = *(int **)(param_1 + 0x340);
      local_34 = 0x5a8b72;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_34 = 0x5a8b84;
      (**(code **)(*piVar1 + 0x194))(piVar1,2,iVar5 + -1);
      local_34 = 0x5a8b8e;
      FUN_00409dd8(iVar6,&local_68);
      local_34 = 0x5a8b99;
      FUN_004051d4(&local_64,local_68);
      local_34 = local_64;
      piVar1 = *(int **)(param_1 + 0x340);
      local_38 = 0x5a8bad;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_38 = 0x5a8bbf;
      (**(code **)(*piVar1 + 0x194))(piVar1,3,iVar5 + -1);
      iVar6 = iVar6 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  local_2c = 0x5a8bd6;
  FUN_00642c50(0x3f8,&local_6c);
  local_2c = 0x5a8be4;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3b0),local_6c);
  local_2c = 0x5a8bf1;
  FUN_00642c50(0x3f9,&local_70);
  local_2c = 0x5a8bff;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3b0),local_70);
  local_2c = 0x5a8c0c;
  FUN_00642c50(0x3f8,&local_74);
  local_2c = 0x5a8c1a;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3b4),local_74);
  local_2c = 0x5a8c27;
  FUN_00642c50(0x3f9,&local_78);
  local_2c = 0x5a8c35;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3b4),local_78);
  local_2c = 0x5a8c42;
  FUN_00642c50(0x3f8,&local_7c);
  local_2c = 0x5a8c50;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3b8),local_7c);
  local_2c = 0x5a8c5d;
  FUN_00642c50(0x3f9,&local_80);
  local_2c = 0x5a8c6b;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3b8),local_80);
  local_2c = 0x5a8c78;
  FUN_00642c50(0x3f8,&local_84);
  local_2c = 0x5a8c86;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3bc),local_84);
  local_2c = 0x5a8c96;
  FUN_00642c50(0x3f9,&local_88);
  local_2c = 0x5a8ca7;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3bc),local_88);
  local_2c = 0x5a8cb7;
  FUN_00642c50(0x1b6,&local_8c);
  local_2c = 0x5a8cc8;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x394),local_8c);
  local_2c = 0x5a8cd8;
  FUN_00642c50(0x1b7,&local_90);
  local_2c = 0x5a8ce9;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x394),local_90);
  local_2c = 0x5a8cf9;
  FUN_00642c50(0x1b8,&local_94);
  local_2c = 0x5a8d0a;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x394),local_94);
  local_2c = 0x5a8d1a;
  FUN_00642c50(0x1b9,&local_98);
  local_2c = 0x5a8d2b;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x394),local_98);
  local_2c = 0x5a8d3b;
  FUN_00642c50(0x1ba,&local_9c);
  local_2c = 0x5a8d4c;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_9c);
  local_2c = 0x5a8d5c;
  FUN_00642c50(0x1bb,&local_a0);
  local_2c = 0x5a8d6d;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_a0);
  local_2c = 0x5a8d7d;
  FUN_00642c50(0x1bc,&local_a4);
  local_2c = 0x5a8d8e;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_a4);
  local_2c = 0x5a8d9e;
  FUN_00642c50(0x1bd,&local_a8);
  local_2c = 0x5a8daf;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_a8);
  local_2c = 0x5a8dbf;
  FUN_00642c50(0x1be,&local_ac);
  local_2c = 0x5a8dd0;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_ac);
  local_2c = 0x5a8de0;
  FUN_00642c50(0x1ba,&local_b0);
  local_2c = 0x5a8df1;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_b0);
  local_2c = 0x5a8e01;
  FUN_00642c50(0x1bb,&local_b4);
  local_2c = 0x5a8e12;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_b4);
  local_2c = 0x5a8e22;
  FUN_00642c50(0x1bc,&local_b8);
  local_2c = 0x5a8e33;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_b8);
  local_2c = 0x5a8e43;
  FUN_00642c50(0x1bd,&local_bc);
  local_2c = 0x5a8e54;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_bc);
  local_2c = 0x5a8e64;
  FUN_00642c50(0x1be,&local_c0);
  local_2c = 0x5a8e75;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_c0);
  local_2c = 0x5a8e85;
  FUN_00642c50(0x1bf,&local_c4);
  local_2c = 0x5a8e96;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_c4);
  local_2c = 0x5a8ea6;
  FUN_00642c50(0x1c1,&local_c8);
  local_2c = 0x5a8eb7;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3ac),local_c8);
  local_2c = 0x5a8ec7;
  FUN_00642c50(0x1c2,&local_cc);
  local_2c = 0x5a8ed8;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3ac),local_cc);
  local_2c = 0x5a8ee8;
  FUN_00642c50(0x1c1,&local_d0);
  local_2c = 0x5a8ef9;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a8),local_d0);
  local_2c = 0x5a8f09;
  FUN_00642c50(0x1c2,&local_d4);
  local_2c = 0x5a8f1a;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a8),local_d4);
  local_2c = 0x5a8f2a;
  FUN_00642c50(0x1c1,&local_d8);
  local_2c = 0x5a8f3b;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a4),local_d8);
  local_2c = 0x5a8f4b;
  FUN_00642c50(0x1c2,&local_dc);
  local_2c = 0x5a8f5c;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a4),local_dc);
  local_2c = 0x5a8f6c;
  FUN_00642c50(0x1c2,&local_e0);
  local_2c = 0x5a8f7d;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a0),local_e0);
  local_2c = 0x5a8f8d;
  FUN_00642c50(0x1c3,&local_e4);
  local_2c = 0x5a8f9e;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a0),local_e4);
  local_2c = 0x5a8fae;
  FUN_00642c50(0x1c4,&local_e8);
  local_2c = 0x5a8fbf;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a0),local_e8);
  local_2c = 0x5a8fcf;
  FUN_00642c50(0x1c1,&local_ec);
  local_2c = 0x5a8fe0;
  FUN_0054cd98(*(undefined4 *)(param_1 + 0x3a0),local_ec);
  local_2c = 0x5a8fe5;
  cVar4 = FUN_00651f8c();
  if (cVar4 != '\0') {
    local_2c = 0x5a8ff9;
    FUN_00642c50(0x1bf,&local_f0);
    local_2c = 0x5a900a;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_f0);
    local_2c = 0x5a901a;
    FUN_00642c50(0x1c0,&local_f4);
    local_2c = 0x5a902b;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x398),local_f4);
  }
  local_2c = 0x5a9030;
  cVar4 = FUN_00651f8c();
  if (cVar4 != '\0') {
    local_2c = 0x5a9044;
    FUN_00642c50(0x1c0,&local_f8);
    local_2c = 0x5a9055;
    FUN_0054cd98(*(undefined4 *)(param_1 + 0x39c),local_f8);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 0) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 600;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 3000) {
    local_2c = 0x5a9090;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 2000) {
    local_2c = 0x5a90b1;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),1);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 0x5dc) {
    local_2c = 0x5a90d2;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),2);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 600) {
    local_2c = 0x5a90f3;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),3);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 300) {
    local_2c = 0x5a9114;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),4);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 100) {
    local_2c = 0x5a9132;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),5);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 0x32) {
    local_2c = 0x5a9150;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x398),6);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 3000) {
    local_2c = 0x5a916e;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 2000) {
    local_2c = 0x5a918f;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),1);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 0x5dc) {
    local_2c = 0x5a91b0;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),2);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 600) {
    local_2c = 0x5a91d1;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),3);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 300) {
    local_2c = 0x5a91f2;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),4);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 0x32) {
    local_2c = 0x5a9210;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),5);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 5) {
    local_2c = 0x5a922e;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x39c),6);
  }
  if (PTR_DAT_0066ac78[0x175] == '\0') {
    local_2c = 0x5a925b;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3b4),1);
  }
  else {
    local_2c = 0x5a9249;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3b4),0);
  }
  if (PTR_DAT_0066ac78[0x176] == '\0') {
    local_2c = 0x5a9288;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3b0),1);
  }
  else {
    local_2c = 0x5a9276;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3b0),0);
  }
  if (PTR_DAT_0066ac78[0x177] == '\0') {
    local_2c = 0x5a92b5;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3b8),1);
  }
  else {
    local_2c = 0x5a92a3;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3b8),0);
  }
  if (PTR_DAT_0066ac78[0x178] == '\0') {
    local_2c = 0x5a92e2;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3bc),1);
  }
  else {
    local_2c = 0x5a92d0;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3bc),0);
  }
  if (PTR_DAT_0066ac78[0xd9] == '\0') {
    local_2c = 0x5a930f;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3a4),0);
  }
  else {
    local_2c = 0x5a9300;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3a4),1);
  }
  if (PTR_DAT_0066ac78[0xda] == '\0') {
    local_2c = 0x5a933c;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3ac),0);
  }
  else {
    local_2c = 0x5a932d;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3ac),1);
  }
  if (PTR_DAT_0066ac78[0xd8] == '\0') {
    local_2c = 0x5a9369;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3ac),0);
  }
  else {
    local_2c = 0x5a935a;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3a8),1);
  }
  local_2c = 0x5a9380;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(PTR_DAT_0066ac78 + 0xd0));
  local_2c = 0x5a939a;
  (**(code **)(**(int **)(param_1 + 0x324) + 0xcc))
            (*(int **)(param_1 + 0x324),PTR_DAT_0066ac78[0xdd]);
  local_2c = 0x5a93b4;
  (**(code **)(**(int **)(param_1 + 0x328) + 0xcc))
            (*(int **)(param_1 + 0x328),PTR_DAT_0066ac78[0xdb]);
  local_2c = 0x5a93ce;
  (**(code **)(**(int **)(param_1 + 800) + 0xcc))(*(int **)(param_1 + 800),PTR_DAT_0066ac78[0xdc]);
  local_2c = 0x5a93e8;
  (**(code **)(**(int **)(param_1 + 0x368) + 0xcc))
            (*(int **)(param_1 + 0x368),PTR_DAT_0066ac78[0x10d]);
  local_2c = 0x5a9402;
  (**(code **)(**(int **)(param_1 + 0x380) + 0xcc))
            (*(int **)(param_1 + 0x380),PTR_DAT_0066ac78[0x10c]);
  local_2c = 0x5a9419;
  FUN_0054c10c(*(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(PTR_DAT_0066ac78 + 0xe0));
  local_2c = 0x5a9432;
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x16c),*(undefined4 *)PTR_DAT_0066b5a8);
  local_2c = 0x5a944c;
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x38c) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066b5a8 + 4));
  local_2c = 0x5a9466;
  FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x16c),
               *(undefined4 *)(PTR_DAT_0066b5a8 + 8));
  if (*(int *)(PTR_DAT_0066ac78 + 0xd4) == 2) {
    local_2c = 0x5a948f;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x168),*(undefined4 *)PTR_DAT_0066b5a8)
    ;
    local_2c = 0x5a94a5;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x38c) + 0x168),0xffff);
    local_2c = 0x5a94bf;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x168),
                 *(undefined4 *)(PTR_DAT_0066b5a8 + 8));
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0xd4) == 3) {
    local_2c = 0x5a94e9;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x38c) + 0x168),
                 *(undefined4 *)(PTR_DAT_0066b5a8 + 4));
    local_2c = 0x5a94ff;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x168),0xffff);
    local_2c = 0x5a9518;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x168),*(undefined4 *)PTR_DAT_0066b5a8)
    ;
  }
  else {
    local_2c = 0x5a9534;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x38c) + 0x168),
                 *(undefined4 *)(PTR_DAT_0066b5a8 + 4));
    local_2c = 0x5a954a;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x168),0xffff);
    local_2c = 0x5a9564;
    FUN_0042a88c(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x168),
                 *(undefined4 *)(PTR_DAT_0066b5a8 + 8));
  }
  puVar3 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005a95ae;
  local_24 = (undefined1 *)0x5a9581;
  FUN_00405008(&local_f8,0x24,puVar3);
  local_24 = (undefined1 *)0x5a9589;
  FUN_004048d4(&local_68);
  local_24 = (undefined1 *)0x5a9591;
  FUN_00404ff0(&local_64);
  local_24 = (undefined1 *)0x5a9599;
  FUN_004048d4(&local_60);
  local_24 = (undefined1 *)0x5a95a6;
  FUN_00405008(&local_5c,0x15);
  return;
}

