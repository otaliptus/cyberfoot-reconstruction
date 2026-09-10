// Address: 00614e38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00614e38(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EBX;
  int iVar10;
  int iVar11;
  int *in_FS_OFFSET;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
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
  int local_3c;
  undefined4 local_38;
  undefined *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  undefined1 *local_24;
  int *local_20;
  int *piVar12;
  
  puVar3 = PTR_DAT_0066afa0;
  local_20 = (int *)&stack0xfffffffc;
  iVar9 = 0x11;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_24 = &LAB_00615758;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (int *)0x614e6a;
  FUN_004048d4(&stack0xffffffec);
  if ((*(int *)PTR_DAT_0066b09c == 0) && (*(int *)(PTR_DAT_0066ae98 + 0x510) == 0)) {
    if ((PTR_DAT_0066ae98[0x8c55] == '\0') || (PTR_DAT_0066ae98[0x8c57] != '\0')) {
      if ((PTR_DAT_0066ae98[0x667d] == '\0') || (PTR_DAT_0066ae98[0x667f] != '\0')) {
        if ((PTR_DAT_0066ae98[0x3b3d] == '\0') || (PTR_DAT_0066ae98[0x3b3f] != '\0')) {
          iVar9 = 0;
          pcVar5 = PTR_DAT_0066ae98 + 0x52d;
          do {
            if ((*pcVar5 != '\0') && (pcVar5[2] == '\0')) {
              *(int *)PTR_DAT_0066b09c = iVar9;
              break;
            }
            iVar9 = iVar9 + 1;
            pcVar5 = pcVar5 + 0x568;
          } while (iVar9 != 0x1b);
        }
        else {
          *(undefined4 *)PTR_DAT_0066b09c = 10;
        }
      }
      else {
        *(undefined4 *)PTR_DAT_0066b09c = 0x12;
      }
    }
    else {
      *(undefined4 *)PTR_DAT_0066b09c = 0x19;
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x188) < 6) {
    iVar9 = *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x510);
    if (iVar9 == 1) {
      *(undefined4 *)PTR_DAT_0066aea4 = 3;
    }
    else if (iVar9 == 2) {
      *(undefined4 *)PTR_DAT_0066aea4 = 6;
    }
    else if (iVar9 == 3) {
      *(undefined4 *)PTR_DAT_0066aea4 = 9;
    }
    else if (iVar9 == 4) {
      *(undefined4 *)PTR_DAT_0066aea4 = 0xc;
    }
  }
  else {
    *(undefined4 *)PTR_DAT_0066aea4 = 1;
  }
  PTR_DAT_0066ae98[*(int *)PTR_DAT_0066b09c * 0x568 + 0x52e] = 1;
  local_2c = (int *)0x614fcf;
  cVar4 = FUN_00657370();
  if (cVar4 == '\0') {
    local_2c = (int *)0x615001;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
  }
  else {
    local_2c = (int *)0x614fe9;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  }
  *(undefined4 *)PTR_DAT_0066b2cc = 1;
  *(undefined4 *)PTR_DAT_0066b594 = 0;
  *(undefined4 *)PTR_DAT_0066af54 = 0;
  local_2c = (int *)0x615025;
  FUN_00405eec(*(undefined4 *)puVar3);
  iVar11 = 0;
  local_2c = (int *)0x61502e;
  iVar9 = FUN_00405ef4(*(undefined4 *)puVar3);
  if (-1 < iVar9) {
    iVar9 = iVar9 + 1;
    iVar10 = 0;
    do {
      if ((((*(int *)(*(int *)puVar3 + 0x38 + iVar10 * 0x48) == *(int *)PTR_DAT_0066b09c) &&
           (*(int *)(*(int *)puVar3 + 0x18 + iVar10 * 0x48) == 3)) &&
          (*(double *)(*(int *)puVar3 + 0x30 + iVar10 * 0x48) ==
           *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10))) &&
         (*(char *)(*(int *)puVar3 + 0x2c + iVar10 * 0x48) == '\0')) {
        iVar11 = iVar11 + 1;
        local_2c = *(int **)(*(int *)puVar3 + iVar10 * 0x48);
        local_30 = *(int *)(*(int *)puVar3 + 4 + iVar10 * 0x48);
        local_38 = 0x6150aa;
        local_28 = iVar10;
        FUN_006104c0(param_1,iVar11,3);
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                      *(int *)(*(int *)puVar3 + iVar10 * 0x48) * 0x2f8) != '\0') ||
           (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                     *(int *)(*(int *)puVar3 + 4 + iVar10 * 0x48) * 0x2f8) != '\0')) {
          DAT_006d4794 = DAT_006d4794 + 1;
          (&DAT_006d4490)[DAT_006d4794] = iVar11;
        }
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined4 *)PTR_DAT_0066b080 =
       *(undefined4 *)(*(int *)puVar3 + 0x24 + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x338) * 0x48);
  iVar9 = *(int *)(*(int *)puVar3 + 0x1c + *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x338) * 0x48);
  DAT_006d4928 = iVar9;
  *(int *)PTR_DAT_0066aea4 = iVar11;
  if (*(int *)(PTR_DAT_0066b40c +
              *(int *)PTR_DAT_0066b080 * 4 +
              *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 + -0x54)
      == -1) {
    local_2c = (int *)&DAT_00615774;
    local_30 = 0x61517e;
    FUN_00409dd8(*(undefined4 *)PTR_DAT_0066b080,&local_3c);
    local_30 = local_3c;
    local_34 = &DAT_00615780;
    local_38 = 0x615193;
    FUN_00404c64(&local_38,3);
    local_2c = (int *)0x61519e;
    FUN_004051d4(&local_34,local_38);
    local_2c = (int *)0x6151af;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_34);
  }
  else {
    if (*(int *)(PTR_DAT_0066b3b0 +
                *(int *)PTR_DAT_0066b080 * 4 +
                *(int *)(PTR_DAT_0066ae98 + *(int *)PTR_DAT_0066b09c * 0x568 + 0x530) * 0x50 + -0x54
                ) == 0) {
      local_2c = (int *)0x6151e5;
      FUN_0040496c(&stack0xffffffec,&DAT_00615794);
    }
    if (iVar9 == 0x65) {
      local_2c = (int *)0x6151fa;
      FUN_00404bf0(&local_44," - Final",unaff_EBX);
      local_2c = (int *)0x615205;
      FUN_004051d4(&local_40,local_44);
      local_2c = (int *)0x615216;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_40);
    }
    else if (iVar9 == 0x66) {
      local_2c = (int *)0x615233;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),&DAT_006157b8);
    }
    else if (iVar9 == 0xc9) {
      local_2c = (int *)0x615250;
      FUN_00404bf0(&local_4c," - Semi-Final",unaff_EBX);
      local_2c = (int *)0x61525b;
      FUN_004051d4(&local_48,local_4c);
      local_2c = (int *)0x61526c;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_48);
    }
    else if (iVar9 == 0xca) {
      local_2c = (int *)0x61528c;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),&DAT_006157fc);
    }
    else if (iVar9 == 0x191) {
      local_2c = (int *)0x6152a6;
      FUN_00404bf0(&local_54," - Quartas de Final",unaff_EBX);
      local_2c = (int *)0x6152b1;
      FUN_004051d4(&local_50,local_54);
      local_2c = (int *)0x6152c2;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_50);
    }
    else if (iVar9 == 0x192) {
      local_2c = (int *)0x6152df;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),&DAT_0061584c);
    }
    else {
      local_2c = (int *)0x6152f4;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x324),&DAT_0061588c);
    }
  }
  local_2c = (int *)0x615305;
  FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_58);
  local_2c = (int *)0x615312;
  FUN_0040502c(PTR_DAT_0066aee8,local_58);
  local_2c = (int *)0x61532f;
  FUN_00404bf0(&local_60,"Campeonato ",
               *(undefined4 *)(PTR_PTR_0066b288 + *(int *)PTR_DAT_0066b09c * 4));
  local_2c = (int *)0x61533a;
  FUN_004051d4(&local_5c,local_60);
  local_2c = &local_5c;
  uVar1 = *(undefined4 *)(param_1 + 0x324);
  local_30 = 0x615351;
  FUN_004e1400(uVar1,&local_64);
  piVar12 = local_2c;
  local_2c = (int *)0x61535a;
  FUN_0040526c(piVar12,local_64);
  local_2c = (int *)0x615364;
  FUN_004e1414(uVar1,local_5c);
  iVar9 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar9) {
    iVar11 = 1;
    piVar12 = &DAT_006d47b0;
    local_20 = &DAT_006d4850;
    do {
      if (*PTR_DAT_0066b6c8 == '\0') {
        local_2c = (int *)0x6153ad;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),&local_68);
        if (local_68 != 0) {
          local_2c = (int *)0x6153c6;
          FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),&local_6c);
          local_2c = (int *)0x6153d9;
          FUN_0042d6c0(*(undefined4 *)(*piVar12 + 0x168),local_6c);
        }
        local_2c = (int *)0x6153ec;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc),&local_70);
        if (local_70 != 0) {
          local_2c = (int *)0x615405;
          FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc),&local_74);
          local_2c = (int *)0x615418;
          FUN_0042d6c0(*(undefined4 *)(*local_20 + 0x168),local_74);
        }
        local_2c = (int *)0x61543c;
        FUN_00404b48(&local_78,
                     *(int *)PTR_DAT_0066af70 + 0x1d0 +
                     *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
        local_2c = (int *)0x61544c;
        FUN_00466238(*(undefined4 *)(DAT_006d4760 + iVar11 * 4),local_78);
      }
      local_2c = (int *)0x61547b;
      FUN_00404b48(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar11 * 0x1bc,
                   *(int *)PTR_DAT_0066af70 + 0x1d0 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x40 + iVar11 * 0x1bc) = 0;
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x41 + iVar11 * 0x1bc) = 0;
      local_2c = &local_30;
      local_30 = 0x6154b5;
      FUN_006158e0(param_1,*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar11 * 0x1bc));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar11 * 0x1bc) = local_30;
      *(int **)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar11 * 0x1bc) = local_2c;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar11 * 0x1bc) = local_28;
      *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar11 * 0x1bc) = local_24;
      *(undefined1 **)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar11 * 0x1bc) =
           (undefined1 *)((int)local_2c + (int)(local_24 + local_28 + local_30));
      if (*PTR_DAT_0066b6c8 == '\0') {
        local_2c = (int *)0x615526;
        FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x28 + iVar11 * 0x1bc),&local_80);
        local_2c = (int *)0x615536;
        FUN_00404bf0(&local_7c,&DAT_006158dc,local_80);
        local_2c = (int *)0x615546;
        FUN_00466238(*(undefined4 *)(DAT_006d4788 + iVar11 * 4),local_7c);
      }
      lVar2 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x30 + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1f8 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_2c = (int *)0x615578;
      iVar10 = FUN_00402c38((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
      lVar2 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x34 + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x1fc +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_2c = (int *)0x6155b5;
      iVar6 = FUN_00402c38((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
      lVar2 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x2c + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 500 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_2c = (int *)0x6155f2;
      iVar7 = FUN_00402c38((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
      lVar2 = (longlong)*(int *)(*(int *)PTR_DAT_0066b3b8 + 0x38 + iVar11 * 0x1bc) *
              (longlong)
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x200 +
                      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar11 * 0x1bc) * 0x2f8);
      local_2c = (int *)0x61562f;
      iVar8 = FUN_00402c38((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x24 + iVar11 * 0x1bc) = iVar10 + iVar6 + iVar7 + iVar8;
      iVar11 = iVar11 + 1;
      local_20 = local_20 + 1;
      piVar12 = piVar12 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((*PTR_DAT_0066b6c8 == '\0') && (iVar9 = *(int *)PTR_DAT_0066aea4, 0 < iVar9)) {
    iVar11 = 1;
    do {
      local_2c = (int *)0x61567a;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + iVar11 * 4),0);
      local_2c = (int *)0x615689;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar11 * 4),0);
      iVar10 = *(int *)(DAT_006d492c + iVar11 * 4);
      if (*(int *)(iVar10 + 0x168) != 0) {
        local_2c = (int *)0x6156a1;
        FUN_0043aa68(iVar10,0);
      }
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (PTR_DAT_0066ac78[0x6c8] != '\0') {
    local_2c = (int *)0x6156c4;
    FUN_0043b244(DAT_006d4918,1);
  }
  local_2c = (int *)0x6156d0;
  FUN_0043b234(DAT_006d4918,1);
  piVar12 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = (int *)&LAB_00615762;
  local_24 = (undefined1 *)0x6156ea;
  FUN_004048f8(&local_80,7,piVar12);
  local_24 = (undefined1 *)0x6156f2;
  FUN_00404ff0(&local_64);
  local_24 = (undefined1 *)0x6156fa;
  FUN_004048d4(&local_60);
  local_24 = (undefined1 *)0x615702;
  FUN_00404ff0(&local_5c);
  local_24 = (undefined1 *)0x61570a;
  FUN_00404ff0(&local_58);
  local_24 = (undefined1 *)0x615712;
  FUN_004048d4(&local_54);
  local_24 = (undefined1 *)0x61571a;
  FUN_00404ff0(&local_50);
  local_24 = (undefined1 *)0x615722;
  FUN_004048d4(&local_4c);
  local_24 = (undefined1 *)0x61572a;
  FUN_00404ff0(&local_48);
  local_24 = (undefined1 *)0x615732;
  FUN_004048d4(&local_44);
  local_24 = (undefined1 *)0x61573a;
  FUN_00404ff0(&local_40);
  local_24 = (undefined1 *)0x615747;
  FUN_004048f8(&local_3c,2);
  local_24 = (undefined1 *)0x61574f;
  FUN_00404ff0(&local_34);
  local_24 = (undefined1 *)0x615757;
  FUN_004048d4(&stack0xffffffec);
  return;
}

