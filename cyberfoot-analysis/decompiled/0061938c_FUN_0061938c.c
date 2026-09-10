// Address: 0061938c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061938c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_ESI;
  int *in_FS_OFFSET;
  undefined1 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [28];
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
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  int local_2c;
  undefined1 **local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  
  local_20 = &stack0xfffffffc;
  iVar6 = 0x15;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_24 = &LAB_00619e2b;
  local_28 = (undefined1 **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = 0x6193ba;
  cVar4 = FUN_00653218();
  if (cVar4 == '\0') {
    local_2c = 0x6193ec;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
  }
  else {
    local_2c = 0x6193d4;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  }
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  switch(iVar6) {
  case 0:
  case 1:
  case 2:
  case 3:
    *(undefined4 *)PTR_DAT_0066aea4 = 0x10;
    break;
  case 4:
    *(undefined4 *)PTR_DAT_0066aea4 = 8;
    break;
  case 5:
    *(undefined4 *)PTR_DAT_0066aea4 = 4;
    break;
  case 6:
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
    break;
  case 7:
    *(undefined4 *)PTR_DAT_0066aea4 = 2;
  }
  if (iVar6 == 4) {
    unaff_ESI = 0;
  }
  else if (iVar6 == 5) {
    unaff_ESI = 8;
  }
  else if (iVar6 == 6) {
    unaff_ESI = 0xc;
  }
  else if (iVar6 == 7) {
    unaff_ESI = 0xe;
  }
  if (iVar6 < 4) {
    local_2c = 0x6194b9;
    FUN_00642c50(0x146,&local_44);
    local_2c = local_44;
    puStack_30 = &DAT_00619e40;
    uStack_34 = 0x6194ce;
    FUN_00642c50(0xd1,&local_48);
    uStack_34 = local_48;
    puStack_38 = &DAT_00619e4c;
    uStack_3c = 0x6194e9;
    FUN_00409dd8(*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),&local_50);
    uStack_3c = 0x6194f4;
    FUN_004051d4(&local_4c,local_50);
    uStack_3c = local_4c;
    local_40 = 0x619504;
    FUN_00405330(&local_40,5);
    local_2c = 0x619515;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_40);
  }
  else if (iVar6 == 4) {
    local_2c = 0x619548;
    FUN_00642c50(0x146,&local_58);
    local_2c = local_58;
    puStack_30 = &DAT_00619e40;
    uStack_34 = 0x61955d;
    FUN_00642c50(0xd6,&local_5c);
    uStack_34 = local_5c;
    puStack_38 = (undefined *)0x61956d;
    FUN_00405330(&local_54,3);
    local_2c = 0x61957e;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_54);
  }
  else if (iVar6 == 5) {
    local_2c = 0x619590;
    FUN_00642c50(0x146,&local_64);
    local_2c = local_64;
    puStack_30 = &DAT_00619e40;
    uStack_34 = 0x6195a5;
    FUN_00642c50(0xd7,&local_68);
    uStack_34 = local_68;
    puStack_38 = (undefined *)0x6195b5;
    FUN_00405330(&local_60,3);
    local_2c = 0x6195c6;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_60);
  }
  else if (iVar6 == 6) {
    local_2c = 0x6195d8;
    FUN_00642c50(0x146,&local_70);
    local_2c = local_70;
    puStack_30 = &DAT_00619e40;
    uStack_34 = 0x6195ed;
    FUN_00642c50(0xd8,&local_74);
    uStack_34 = local_74;
    puStack_38 = (undefined *)0x6195fd;
    FUN_00405330(&local_6c,3);
    local_2c = 0x61960e;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_6c);
  }
  else if (iVar6 == 7) {
    local_2c = 0x61961d;
    FUN_00642c50(0x146,&local_7c);
    local_2c = local_7c;
    puStack_30 = &DAT_00619e40;
    uStack_34 = 0x619632;
    FUN_00642c50(0xd9,&local_80);
    uStack_34 = local_80;
    puStack_38 = (undefined *)0x619642;
    FUN_00405330(&local_78,3);
    local_2c = 0x619653;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_78);
  }
  iVar6 = 0;
  if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 4) {
    local_10 = 8;
    do {
      local_c = 1;
      do {
        iVar6 = iVar6 + 1;
        local_28 = &local_24;
        local_2c = 0x61969d;
        FUN_00648c98(*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),1,local_c);
        iVar1 = *(int *)(local_2c + 0x4a8 + (int)local_24 * 4);
        iVar2 = *(int *)(local_2c + 0x4a8 + (int)local_20 * 4);
        local_2c = 0x6196c7;
        FUN_004030d4(local_a0,&DAT_00619e50);
        local_2c = 0x6196e2;
        FUN_004030a4(local_a0,*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8,0x1a);
        local_2c = 0x6196f0;
        FUN_00404b48(&local_84,local_a0);
        local_2c = 0x619700;
        FUN_00466238(*(undefined4 *)(DAT_006d4764 + iVar6 * 4),local_84);
        local_2c = 0x619710;
        FUN_004030d4(local_a0,&DAT_00619e50);
        local_2c = 0x61972b;
        FUN_004030a4(local_a0,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8,0x1a);
        local_2c = 0x61973c;
        FUN_00404b48(&local_a4,local_a0);
        local_2c = 0x61974f;
        FUN_00466238(*(undefined4 *)(DAT_006d4768 + iVar6 * 4),local_a4);
        local_2c = 0x619771;
        FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + iVar6 * 4) + 0x68),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar1 * 0x2f8));
        local_2c = 0x619793;
        FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + iVar6 * 4) + 0x68),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar2 * 0x2f8));
        local_2c = 0x6197b2;
        FUN_004663a8(*(undefined4 *)(DAT_006d4764 + iVar6 * 4),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
        local_2c = 0x6197d6;
        FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d461c + iVar6 * 4) + 0x16c),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
        local_2c = 0x6197f5;
        FUN_004663a8(*(undefined4 *)(DAT_006d4768 + iVar6 * 4),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
        local_2c = 0x619819;
        FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d46bc + iVar6 * 4) + 0x16c),
                     *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
        *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc) = iVar1;
        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc) = iVar2;
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar6 * 0x1bc) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar1 * 0x2f8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar6 * 0x1bc) =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar2 * 0x2f8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + iVar6 * 0x1bc) = 3;
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + iVar6 * 0x1bc) = 3;
        local_2c = 0xffffffff;
        puStack_30 = (undefined *)0xffffffff;
        uStack_34 = 0x6198ad;
        uVar5 = FUN_0064dee4(7,0xffffffff,0xffffffff);
        *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar6 * 0x1bc) = uVar5;
        local_2c = 0x6198e7;
        FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d47ac + iVar6 * 4) + 0x168),
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066b3e0 +
                      *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8) * 4));
        local_2c = 0x619913;
        FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d484c + iVar6 * 4) + 0x168),
                     *(undefined4 *)
                      (*(int *)PTR_DAT_0066b3e0 +
                      *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar2 * 0x2f8) * 4));
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc) * 0x2f8) != '\0') ||
           (*(char *)(*(int *)PTR_DAT_0066af70 +
                     *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc) * 0x2f8 + 0x39) !=
            '\0')) {
          DAT_006d4794 = DAT_006d4794 + 1;
          (&DAT_006d4490)[DAT_006d4794] = iVar6;
        }
        local_c = local_c + 1;
      } while (local_c != 3);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  else if (0 < (int)*(undefined1 ***)PTR_DAT_0066aea4) {
    local_10 = 1;
    local_28 = *(undefined1 ***)PTR_DAT_0066aea4;
    do {
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x23c) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x3f8) = 0;
      iVar6 = iVar6 + 1;
      iVar1 = *(int *)(PTR_DAT_0066ad60 + (local_10 + unaff_ESI) * 0x30 + -0x30);
      iVar2 = *(int *)(PTR_DAT_0066ad60 + (local_10 + unaff_ESI) * 0x30 + -0x2c);
      local_2c = 0x6199e6;
      FUN_004030d4(local_a0,&DAT_00619e50);
      local_2c = 0x619a01;
      FUN_004030a4(local_a0,*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8,0x1a);
      local_2c = 0x619a12;
      FUN_00404b48(&local_a8,local_a0);
      local_2c = 0x619a25;
      FUN_00466238(*(undefined4 *)(DAT_006d4764 + iVar6 * 4),local_a8);
      local_2c = 0x619a35;
      FUN_004030d4(local_a0,&DAT_00619e50);
      local_2c = 0x619a50;
      FUN_004030a4(local_a0,*(int *)PTR_DAT_0066af70 + iVar2 * 0x2f8,0x1a);
      local_2c = 0x619a61;
      FUN_00404b48(&local_ac,local_a0);
      local_2c = 0x619a74;
      FUN_00466238(*(undefined4 *)(DAT_006d4768 + iVar6 * 4),local_ac);
      local_2c = 0x619a96;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + iVar6 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar1 * 0x2f8));
      local_2c = 0x619ab8;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + iVar6 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar2 * 0x2f8));
      local_2c = 0x619ad7;
      FUN_004663a8(*(undefined4 *)(DAT_006d4764 + iVar6 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
      local_2c = 0x619afb;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d461c + iVar6 * 4) + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
      local_2c = 0x619b1a;
      FUN_004663a8(*(undefined4 *)(DAT_006d4768 + iVar6 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
      local_2c = 0x619b3e;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d46bc + iVar6 * 4) + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc) = iVar1;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc) = iVar2;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar6 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar1 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar6 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar2 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + iVar6 * 0x1bc) = 3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + iVar6 * 0x1bc) = 3;
      local_2c = 0xffffffff;
      puStack_30 = (undefined *)0xffffffff;
      uStack_34 = 0x619bd2;
      uVar5 = FUN_0064dee4(7,0xffffffff,0xffffffff);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar6 * 0x1bc) = uVar5;
      local_2c = 0x619c0c;
      FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d47ac + iVar6 * 4) + 0x168),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b3e0 +
                    *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8) * 4));
      local_2c = 0x619c38;
      FUN_0042d610(*(undefined4 *)(*(int *)(&DAT_006d484c + iVar6 * 4) + 0x168),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066b3e0 +
                    *(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar2 * 0x2f8) * 4));
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc) * 0x2f8) != '\0') ||
         (*(char *)(*(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc) * 0x2f8 + 0x39) != '\0')
         ) {
        DAT_006d4794 = DAT_006d4794 + 1;
        (&DAT_006d4490)[DAT_006d4794] = iVar6;
      }
      local_10 = local_10 + 1;
      local_28 = (undefined1 **)((int)local_28 + -1);
    } while (local_28 != (undefined1 **)0x0);
  }
  if (0 < *(int *)PTR_DAT_0066aea4) {
    local_c = 1;
    do {
      local_2c = local_c;
      local_28 = &local_b0;
      uStack_34 = 0x619ce8;
      FUN_00618dc4(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 0x62c),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0x94 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + local_c * 0x1bc) * 0x2f8));
      uStack_34 = 0x619cfe;
      FUN_00404b6c(*(int *)PTR_DAT_0066b3b8 + 0x3c + local_c * 0x1bc,local_b0);
      uStack_34 = 0x619d19;
      FUN_00466238(*(undefined4 *)(DAT_006d4760 + local_c * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x3c + local_c * 0x1bc));
      uStack_34 = 0x619d2b;
      FUN_00466238(*(undefined4 *)(DAT_006d4788 + local_c * 4),0);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + local_c * 0x1bc) = 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + local_c * 0x1bc) = 0;
      uStack_34 = 0x619d8b;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + local_c * 4),0);
      uStack_34 = 0x619d9d;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + local_c * 4),0);
      iVar6 = *(int *)(DAT_006d492c + local_c * 4);
      if (*(int *)(iVar6 + 0x168) != 0) {
        uStack_34 = 0x619db8;
        FUN_0043aa68(iVar6,0);
      }
      local_c = local_c + 1;
      local_28 = (undefined1 **)((int)local_28 + -1);
    } while (local_28 != (undefined1 **)0x0);
  }
  local_2c = 0x619dd0;
  FUN_0043b234(DAT_006d4918,1);
  puVar3 = local_20;
  *in_FS_OFFSET = (int)local_28;
  local_20 = &LAB_00619e32;
  local_24 = (undefined1 *)0x619de8;
  FUN_00404ff0(&local_b0,local_28,puVar3);
  local_24 = (undefined1 *)0x619df8;
  FUN_004048f8(&local_ac,3);
  local_24 = (undefined1 *)0x619e00;
  FUN_004048d4(&local_84);
  local_24 = (undefined1 *)0x619e0d;
  FUN_00405008(&local_80,0xc);
  local_24 = (undefined1 *)0x619e15;
  FUN_004048d4(&local_50);
  local_24 = (undefined1 *)0x619e22;
  FUN_00405008(&local_4c,4);
  local_24 = (undefined1 *)0x619e2a;
  FUN_00404ff0(&stack0xffffffe4);
  return;
}

