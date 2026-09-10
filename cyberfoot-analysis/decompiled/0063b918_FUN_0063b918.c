// Address: 0063b918
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063b918(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  wchar_t *unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 local_13c [36];
  undefined1 local_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  wchar_t *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  wchar_t *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  wchar_t *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  wchar_t *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  wchar_t *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  wchar_t *pwStack_44;
  undefined1 *puStack_40;
  undefined1 *local_3c;
  wchar_t *local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  wchar_t *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 0x27;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_0063c7fb;
  local_24 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined1 *)0x63b943;
  local_8 = param_1;
  FUN_00404ff0(&stack0xffffffec);
  local_28 = (undefined1 *)0x63b94b;
  FUN_00404ff0(&stack0xffffffe8);
  local_28 = (undefined1 *)0x63b953;
  FUN_00404ff0(&local_1c);
  local_28 = (undefined1 *)0x63b95b;
  FUN_00404ff0(&local_20);
  local_28 = (undefined1 *)0x63b963;
  FUN_00404ff0(&local_24);
  *(undefined4 *)PTR_DAT_0066b004 = 0;
  *(undefined4 *)PTR_DAT_0066b6cc = 0;
  local_34 = 0xffffffff;
  local_3c = (undefined1 *)0xffffffff;
  local_38 = (wchar_t *)0xffffffff;
  local_2c = &LAB_0063b9c7;
  local_30 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x10) =
       *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  *in_FS_OFFSET = local_30;
  local_28 = (undefined1 *)0x63b9d9;
  FUN_0063b658(local_8,local_30,&stack0xfffffffc);
  local_2c = (undefined1 *)0x0;
  if (*PTR_DAT_0066afb4 == '\0') {
    local_28 = (undefined1 *)0x63b9f0;
    FUN_0063a7e4(local_8);
    local_28 = (undefined1 *)0x63b9f8;
    FUN_0063ad9c(local_8);
    local_28 = (undefined1 *)0x63ba00;
    FUN_0063b100(local_8);
    if ((((PTR_DAT_0066ac78[0x17f] != '\0') && (*(int *)(PTR_DAT_0066ac78 + 0x4c) == 5)) &&
        (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1)) && (*(int *)(PTR_DAT_0066ac78 + 0x88) == 1)) {
      local_28 = (undefined1 *)0x63ba37;
      cVar2 = FUN_0064fd04();
      if (cVar2 != '\0') {
        local_28 = (undefined1 *)0x0;
        local_2c = (undefined1 *)0x0;
        local_30 = (wchar_t *)0x0;
        local_34 = 0x63ba58;
        FUN_0064cbf0(*(undefined4 *)(PTR_DAT_0066ac78 + 8),9,1);
      }
    }
  }
  local_28 = (undefined1 *)0x63ba68;
  FUN_0064fbb8(0,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  local_28 = (undefined1 *)0x63ba70;
  FUN_0063b76c(local_8);
  local_28 = (undefined1 *)0x63ba78;
  FUN_006380e8(local_8);
  local_28 = (undefined1 *)0x63ba80;
  FUN_0063b408(local_8);
  local_28 = (undefined1 *)0x63ba88;
  FUN_006397ec(local_8);
  local_28 = *(undefined1 **)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc);
  local_2c = *(undefined1 **)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
  local_30 = (wchar_t *)0x63bab1;
  iVar4 = FUN_0065b414(*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  *(undefined4 *)PTR_DAT_0066b004 = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar4 * 0x48);
  *(undefined4 *)PTR_DAT_0066b6cc = *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x24 + iVar4 * 0x48);
  local_3c = *(undefined1 **)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48);
  local_38 = *(wchar_t **)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) {
    local_28 = (undefined1 *)0x63bbea;
    FUN_0064a280(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_48);
  }
  else {
    local_2c = &LAB_0063bbce;
    local_30 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    if (*(int *)(*(int *)PTR_DAT_0066afa0 + (int)&stack0xfffffffc * 0x48) ==
        *(int *)(PTR_DAT_0066ac78 + 8)) {
      local_34 = 0x63bb44;
      local_28 = &stack0xfffffffc;
      FUN_00642c50(0xcd,&local_4c);
      local_34 = 0x63bb54;
      FUN_004052cc(&stack0xffffffe8,local_4c,&DAT_0063c810);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 0) {
        local_34 = 0x63bb6f;
        FUN_00642c50(0xcd,&stack0xffffffe8);
      }
      local_2c = *(undefined1 **)(*(int *)PTR_DAT_0066afa0 + 4 + iVar4 * 0x48);
    }
    else {
      local_34 = 0x63bb8c;
      local_28 = &stack0xfffffffc;
      FUN_00642c50(0xcf,&local_50);
      local_34 = 0x63bb9c;
      FUN_004052cc(&stack0xffffffe8,local_50,&DAT_0063c810);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 0) {
        local_34 = 0x63bbb7;
        FUN_00642c50(0xcf,&stack0xffffffe8);
      }
      local_2c = *(undefined1 **)(*(int *)PTR_DAT_0066afa0 + iVar4 * 0x48);
    }
    *in_FS_OFFSET = local_30;
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 5) {
    local_2c = local_48;
  }
  *(undefined1 **)PTR_DAT_0066b118 = local_2c;
  *(undefined1 **)(*(int *)(local_8 + 0x3b0) + 0xc) = local_2c;
  local_28 = (undefined1 *)0x63bc22;
  FUN_00636910(local_8,local_2c);
  local_28 = (undefined1 *)0x63bc2d;
  FUN_00645508(local_2c,&local_54);
  if (local_54 != 0) {
    local_28 = (undefined1 *)0x63bc3e;
    FUN_00645508(local_2c,&local_58);
    local_28 = (undefined1 *)0x63bc55;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x390) + 0x168),local_58);
  }
  local_28 = (undefined1 *)0x63bc72;
  FUN_0043aa68(*(undefined4 *)(local_8 + 0x400),*(undefined4 *)(*(int *)(local_8 + 0x2f8) + 0x168));
  local_28 = (undefined1 *)0x63bc8f;
  FUN_0043aa68(*(undefined4 *)(local_8 + 0x404),*(undefined4 *)(*(int *)(local_8 + 0x390) + 0x168));
  local_28 = (undefined1 *)0x63bca2;
  FUN_004048d4(*(int *)(local_8 + 0x3c0) + 0x80);
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) == 0x1d) {
    if (0 < *(int *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x708)) {
      local_28 = (undefined1 *)0x63bce6;
      FUN_00642c50(0xd2,&local_60);
      local_28 = (undefined1 *)local_60;
      local_2c = &DAT_0063c81c;
      local_30 = L"痿趠ꡅκ";
      FUN_004051d4(&local_64,
                   *(undefined4 *)
                    (PTR_DAT_0066b4dc +
                    *(int *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x708) * 0x10 + -0x10
                    ));
      local_30 = local_64;
      local_34 = 0x63bd27;
      FUN_00405330(&local_5c,3);
      local_28 = (undefined1 *)0x63bd3d;
      FUN_00404b6c(*(int *)(local_8 + 0x3c0) + 0x80,local_5c);
      *(undefined4 *)(*(int *)(local_8 + 0x3c0) + 0xc) =
           *(undefined4 *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x708);
    }
  }
  else if (0 < *(int *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x720)) {
    local_28 = (undefined1 *)0x63bd8a;
    FUN_00642c50(0xd2,&local_6c);
    local_28 = (undefined1 *)local_6c;
    local_2c = &DAT_0063c81c;
    local_30 = L"痿趔鱅κ";
    FUN_004051d4(&local_70,
                 *(undefined4 *)
                  (PTR_DAT_0066b4dc +
                  *(int *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x720) * 0x10 + -0x10))
    ;
    local_30 = local_70;
    local_34 = 0x63bdcb;
    FUN_00405330(&local_68,3);
    local_28 = (undefined1 *)0x63bde1;
    FUN_00404b6c(*(int *)(local_8 + 0x3c0) + 0x80,local_68);
    *(undefined4 *)(*(int *)(local_8 + 0x3c0) + 0xc) =
         *(undefined4 *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x720);
  }
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar4 == 0) {
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) ==
        *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + (int)local_2c * 0x2f8)) {
      local_28 = (undefined1 *)0x63be56;
      FUN_00642c50(0xd4,&stack0xffffffec);
    }
    else {
      local_28 = (undefined1 *)0x63be44;
      FUN_00642c50(0xd3,&stack0xffffffec);
    }
  }
  else if (iVar4 == 1) {
    if ((*(int *)(PTR_DAT_0066ac78 + 0x4c) == 1) && (*(int *)(PTR_DAT_0066ac78 + 0x50) == 1)) {
      local_28 = (undefined1 *)0x63be88;
      FUN_00404ff0(&local_20,PTR_DAT_0066ac78);
    }
    else {
      local_28 = &DAT_0063c810;
      iVar4 = (int)local_2c * 0x2f8;
      local_2c = (undefined1 *)0x63beaf;
      FUN_00642c50(*(int *)(*(int *)PTR_DAT_0066af70 + 0x1a8 + iVar4) + 0xb7,&local_74);
      local_2c = local_74;
      local_30 = L" ";
      local_34 = 0x63bec4;
      FUN_00642c50(0xcc,&local_78);
      local_34 = local_78;
      local_38 = L"喍뢈Ñ";
      FUN_00405330(&local_20,4);
    }
    local_28 = (undefined1 *)0x63bee1;
    FUN_00642c50(0xd1,&local_7c);
    local_28 = (undefined1 *)local_7c;
    local_2c = &DAT_0063c828;
    local_30 = (wchar_t *)0x63beff;
    uVar3 = FUN_0064d61c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x4c),
                         *(undefined4 *)(PTR_DAT_0066ac78 + 0x50));
    local_30 = (wchar_t *)0x63bf07;
    FUN_00409dd8(uVar3,&local_84);
    local_30 = L"痿趄\xe845κ";
    FUN_004051d4(&local_80,local_84);
    local_30 = local_80;
    local_34 = 0x63bf22;
    FUN_00405330(&local_1c,3);
    local_28 = (undefined1 *)0x63bf3f;
    FUN_00645c68(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8),
                 &stack0xffffffec);
  }
  else if (iVar4 == 2) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x118) == 1) {
      local_28 = (undefined1 *)0x63bf6e;
      FUN_00642c50(0xda,&local_24);
    }
    else {
      local_28 = (undefined1 *)0x63bf80;
      FUN_00642c50(0xdb,local_88);
    }
    switch(*(undefined4 *)(PTR_DAT_0066ac78 + 0x110)) {
    case 0:
      local_28 = (undefined1 *)0x63bfc3;
      FUN_00642c50(0xd5,&local_8c);
      local_28 = (undefined1 *)local_8c;
      local_2c = &DAT_0063c810;
      local_30 = local_24;
      local_34 = 0x63bfde;
      FUN_00405330(&local_c,3);
      break;
    case 1:
      local_28 = (undefined1 *)0x63bff3;
      FUN_00642c50(0xd5,&local_90);
      local_28 = (undefined1 *)local_90;
      local_2c = &DAT_0063c810;
      local_30 = local_24;
      local_34 = 0x63c00e;
      FUN_00405330(&local_c,3);
      break;
    case 2:
      local_28 = (undefined1 *)0x63c023;
      FUN_00642c50(0xd6,&local_94);
      local_28 = (undefined1 *)local_94;
      local_2c = &DAT_0063c810;
      local_30 = local_24;
      local_34 = 0x63c03e;
      FUN_00405330(&local_c,3);
      break;
    case 3:
      local_28 = (undefined1 *)0x63c053;
      FUN_00642c50(0xd7,&local_98);
      local_28 = (undefined1 *)local_98;
      local_2c = &DAT_0063c810;
      local_30 = local_24;
      local_34 = 0x63c06e;
      FUN_00405330(&local_c,3);
      break;
    case 4:
      local_28 = (undefined1 *)0x63c080;
      FUN_00642c50(0xd8,&local_9c);
      local_28 = (undefined1 *)local_9c;
      local_2c = &DAT_0063c810;
      local_30 = local_24;
      local_34 = 0x63c09b;
      FUN_00405330(&local_c,3);
      break;
    case 5:
      local_28 = (undefined1 *)0x63c0ad;
      FUN_00642c50(0xd9,&local_a0);
      local_28 = (undefined1 *)local_a0;
      local_2c = &DAT_0063c810;
      local_30 = local_24;
      local_34 = 0x63c0c8;
      FUN_00405330(&local_c,3);
    }
    local_28 = (undefined1 *)0x63c0d3;
    thunk_FUN_0040502c(&local_1c,local_c);
    local_28 = (undefined1 *)0x63c0f0;
    FUN_006458c8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8),
                 &stack0xffffffec);
  }
  else if (iVar4 == 4) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x198) == 2) {
      local_28 = (undefined1 *)0x63c122;
      FUN_00642c50(0xdb,&local_a4);
      local_28 = (undefined1 *)0x63c135;
      FUN_004052cc(&stack0xfffffff0,&DAT_0063c810,local_a4);
    }
    else {
      local_28 = (undefined1 *)0x63c147;
      FUN_00642c50(0xda,&local_a8);
      local_28 = (undefined1 *)0x63c15a;
      FUN_004052cc(&stack0xfffffff0,&DAT_0063c810,local_a8);
    }
    iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x194);
    if (iVar4 < 4) {
      local_28 = (undefined1 *)0x63c17a;
      FUN_00642c50(0xd1,&local_ac);
      local_28 = (undefined1 *)local_ac;
      local_2c = &DAT_0063c828;
      local_30 = (wchar_t *)0x63c1a1;
      uVar3 = FUN_0064d63c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x194),
                           *(undefined4 *)(PTR_DAT_0066ac78 + 400));
      local_30 = (wchar_t *)0x63c1ac;
      FUN_00409dd8(uVar3,&local_b4);
      local_30 = L"뗿ｔ\xffff䖍뫨\x03";
      FUN_004051d4(&local_b0,local_b4);
      local_30 = local_b0;
      local_34 = 0x63c1d0;
      FUN_00405330(&local_1c,3);
    }
    else if (iVar4 == 4) {
      local_28 = (undefined1 *)0x63c1f0;
      FUN_00642c50(0xd6,&local_b8);
      local_28 = (undefined1 *)local_b8;
      local_2c = &DAT_0063c828;
      local_34 = 0x63c20b;
      local_30 = unaff_EBX;
      FUN_00405330(&local_1c,3);
    }
    else if (iVar4 == 5) {
      local_28 = (undefined1 *)0x63c22b;
      FUN_00642c50(0xd7,&local_bc);
      local_28 = (undefined1 *)0x63c23c;
      FUN_004052cc(&local_1c,local_bc,unaff_EBX);
    }
    else if (iVar4 == 6) {
      local_28 = (undefined1 *)0x63c259;
      FUN_00642c50(0xd8,&local_c0);
      local_28 = (undefined1 *)0x63c26a;
      FUN_004052cc(&local_1c,local_c0,unaff_EBX);
    }
    else if ((*(int *)(PTR_DAT_0066ac78 + 0x194) == 7) || (*(int *)(PTR_DAT_0066ac78 + 0x194) == 8))
    {
      local_28 = (undefined1 *)0x63c297;
      FUN_00642c50(0xd9,&local_c4);
      local_28 = (undefined1 *)0x63c2a8;
      FUN_004052cc(&local_1c,local_c4,unaff_EBX);
    }
    local_28 = (undefined1 *)0x63c2c2;
    iVar4 = FUN_0064f2d0(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
                        );
    if (iVar4 == 1) {
      local_28 = (undefined1 *)0x63c2d2;
      FUN_00642c50(0xde,&stack0xffffffec);
    }
    else {
      local_28 = (undefined1 *)0x63c2e1;
      FUN_00642c50(0xdc,&stack0xffffffec);
    }
    local_28 = (undefined1 *)0x63c2fb;
    iVar4 = FUN_0064f2d0(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
                        );
    if (iVar4 == 1) {
      local_28 = (undefined1 *)0x63c30b;
      FUN_00642c50(0xde,&stack0xffffffec);
    }
    else {
      local_28 = (undefined1 *)0x63c32a;
      iVar4 = FUN_0064f2d0(*(undefined4 *)
                            (*(int *)PTR_DAT_0066af70 + 0x3c +
                            *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
      if (iVar4 == 0) {
        local_28 = (undefined1 *)0x63c33b;
        FUN_00642c50(0xdc,&stack0xffffffec);
      }
      else {
        local_28 = (undefined1 *)0x63c35a;
        iVar4 = FUN_0064f2d0(*(undefined4 *)
                              (*(int *)PTR_DAT_0066af70 + 0x3c +
                              *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
        if (iVar4 == 2) {
          local_28 = (undefined1 *)0x63c36c;
          FUN_00642c50(0x3e2,&stack0xffffffec);
        }
        else {
          local_28 = (undefined1 *)0x63c38b;
          iVar4 = FUN_0064f2d0(*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x3c +
                                *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
          if (iVar4 == 3) {
            local_28 = (undefined1 *)0x63c3a1;
            FUN_00642c50(0x3e3,&stack0xffffffec);
          }
        }
      }
    }
  }
  else if (iVar4 == 5) {
    local_28 = (undefined1 *)0x63c3be;
    FUN_00642c50(0xe0,&stack0xffffffec);
    local_28 = (undefined1 *)0x63c3cb;
    thunk_FUN_0040502c(&local_1c,L"Japan");
  }
  else if (iVar4 == 6) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x1a4) == 2) {
      local_28 = (undefined1 *)0x63c3fd;
      FUN_00642c50(0xdb,&local_c8);
      local_28 = (undefined1 *)0x63c410;
      FUN_004052cc(&stack0xfffffff0,&DAT_0063c810,local_c8);
    }
    else {
      local_28 = (undefined1 *)0x63c422;
      FUN_00642c50(0xda,&local_cc);
      local_28 = (undefined1 *)0x63c435;
      FUN_004052cc(&stack0xfffffff0,&DAT_0063c810,local_cc);
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x3c) <= (int)local_2c) {
      local_28 = (undefined1 *)0x63c452;
      FUN_00466414(*(undefined4 *)(local_8 + 0x3b0),0);
    }
    iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x1a0);
    if (iVar4 < 4) {
      local_28 = (undefined1 *)0x63c472;
      FUN_00642c50(0xd1,&local_d0);
      local_28 = (undefined1 *)local_d0;
      local_2c = &DAT_0063c828;
      local_30 = (wchar_t *)0x63c499;
      uVar3 = FUN_0064d63c(*(undefined4 *)(PTR_DAT_0066ac78 + 0x1a0),
                           *(undefined4 *)(PTR_DAT_0066ac78 + 0x19c));
      local_30 = (wchar_t *)0x63c4a4;
      FUN_00409dd8(uVar3,&local_d8);
      local_30 = L"뗿Ｐ\xffff䖍뫨\x03";
      FUN_004051d4(&local_d4,local_d8);
      local_30 = local_d4;
      local_34 = 0x63c4c8;
      FUN_00405330(&local_1c,3);
    }
    else if (iVar4 == 4) {
      local_28 = (undefined1 *)0x63c4e8;
      FUN_00642c50(0xd6,&local_dc);
      local_28 = (undefined1 *)local_dc;
      local_2c = &DAT_0063c828;
      local_34 = 0x63c503;
      local_30 = unaff_EBX;
      FUN_00405330(&local_1c,3);
    }
    else if (iVar4 == 5) {
      local_28 = (undefined1 *)0x63c523;
      FUN_00642c50(0xd7,&local_e0);
      local_28 = (undefined1 *)local_e0;
      local_2c = &DAT_0063c828;
      local_34 = 0x63c53e;
      local_30 = unaff_EBX;
      FUN_00405330(&local_1c,3);
    }
    else if (iVar4 == 6) {
      local_28 = (undefined1 *)0x63c55b;
      FUN_00642c50(0xd8,&local_e4);
      local_28 = (undefined1 *)local_e4;
      local_2c = &DAT_0063c828;
      local_34 = 0x63c576;
      local_30 = unaff_EBX;
      FUN_00405330(&local_1c,3);
    }
    else if ((*(int *)(PTR_DAT_0066ac78 + 0x1a0) == 7) || (*(int *)(PTR_DAT_0066ac78 + 0x1a0) == 8))
    {
      local_28 = (undefined1 *)0x63c5a3;
      FUN_00642c50(0xd9,&local_e8);
      local_28 = (undefined1 *)local_e8;
      local_2c = &DAT_0063c828;
      local_34 = 0x63c5be;
      local_30 = unaff_EBX;
      FUN_00405330(&local_1c,3);
    }
    local_28 = (undefined1 *)0x63c5d8;
    iVar4 = FUN_0064f2d0(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
                        );
    if (iVar4 == 1) {
      local_28 = (undefined1 *)0x63c5e8;
      FUN_00642c50(0xdf,&stack0xffffffec);
    }
    else {
      local_28 = (undefined1 *)0x63c5fa;
      FUN_00642c50(0xdd,&stack0xffffffec);
    }
  }
  else if (iVar4 == 10) {
    local_2c = &LAB_0063c683;
    local_30 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    if (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + (int)&stack0xfffffffc * 0x48) == 1) {
      local_34 = 0x63c641;
      local_28 = &stack0xfffffffc;
      FUN_00642c50(0xda,&local_ec);
      local_34 = 0x63c654;
      FUN_004052cc(&local_1c,&DAT_0063c810,local_ec);
    }
    else {
      local_34 = 0x63c666;
      local_28 = &stack0xfffffffc;
      FUN_00642c50(0xdb,&local_f0);
      local_34 = 0x63c679;
      FUN_004052cc(&local_1c,&DAT_0063c810,local_f0);
    }
    puVar1 = local_28;
    *in_FS_OFFSET = local_30;
    local_28 = (undefined1 *)0x63c6a7;
    iVar4 = FUN_0064f2d0(*(undefined4 *)
                          (*(int *)PTR_DAT_0066af70 + 0x3c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)
                         ,*(int *)PTR_DAT_0066af70,puVar1);
    if (iVar4 == 1) {
      local_28 = (undefined1 *)0x63c6b7;
      FUN_00642c50(0x3e5,&stack0xffffffec);
    }
    else {
      local_28 = (undefined1 *)0x63c6c6;
      FUN_00642c50(0x3e4,&stack0xffffffec);
    }
  }
  local_28 = (undefined1 *)0x63c6d6;
  FUN_004030d4(local_118,&DAT_0063c83c);
  local_28 = (undefined1 *)0x63c6f2;
  FUN_004030a4(local_118,*(int *)PTR_DAT_0066af70 + (int)local_2c * 0x2f8,0x1f);
  local_28 = (undefined1 *)0x63c703;
  FUN_004030d4(local_13c,local_118);
  local_28 = (undefined1 *)0x63c715;
  FUN_004030a4(local_13c,&DAT_0063c844,0x20);
  local_28 = (undefined1 *)0x63c726;
  FUN_00405194(&local_f8,local_13c);
  local_28 = (undefined1 *)local_f8;
  local_2c = local_20;
  local_30 = L"</shad><br><shad>";
  local_38 = L"</shad><br><shad>";
  puStack_40 = local_1c;
  pwStack_44 = L"</shad>";
  local_48 = (undefined1 *)0x63c757;
  local_3c = (undefined1 *)unaff_EDI;
  FUN_00405330(&local_f4,8);
  local_48 = (undefined1 *)0x63c76b;
  FUN_00545088(*(undefined4 *)(local_8 + 0x3b0),local_f4);
  puVar1 = local_3c;
  *in_FS_OFFSET = pwStack_44;
  local_3c = &LAB_0063c805;
  puStack_40 = (undefined1 *)0x63c788;
  FUN_00405008(&local_f8,8,puVar1);
  puStack_40 = (undefined1 *)0x63c793;
  FUN_004048d4(&local_d8);
  puStack_40 = (undefined1 *)0x63c7a3;
  FUN_00405008(&local_d4,8);
  puStack_40 = (undefined1 *)0x63c7ae;
  FUN_004048d4(&local_b4);
  puStack_40 = (undefined1 *)0x63c7be;
  FUN_00405008(&local_b0,0xb);
  puStack_40 = (undefined1 *)0x63c7c6;
  FUN_004048d4(&local_84);
  puStack_40 = (undefined1 *)0x63c7d3;
  FUN_00405008(&local_80,10);
  puStack_40 = (undefined1 *)0x63c7e0;
  FUN_004048f8(&local_58,2);
  puStack_40 = (undefined1 *)0x63c7ed;
  FUN_00405008(&local_50,2);
  puStack_40 = (undefined1 *)0x63c7fa;
  FUN_00405008(&local_24,7);
  return;
}

