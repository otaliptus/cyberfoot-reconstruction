// Address: 0061737c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061737c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EDI;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 local_54 [28];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int *piVar9;
  int iVar10;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 0xc;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0061792b;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x6173a4;
  cVar4 = FUN_006571c8();
  if (cVar4 == '\0') {
    local_2c = 0x6173d6;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 0xcc));
  }
  else {
    local_2c = 0x6173be;
    FUN_0043b244(DAT_006d4918,*(undefined4 *)(PTR_DAT_0066ac78 + 200));
  }
  *(undefined4 *)PTR_DAT_0066aea4 = 2;
  iVar10 = *(int *)(PTR_DAT_0066ac78 + 0x1a8);
  if (iVar10 == 1) {
    local_c = 0;
  }
  else if (iVar10 == 2) {
    local_c = 2;
  }
  else if (iVar10 == 3) {
    local_c = 4;
  }
  local_2c = 0x61741b;
  FUN_00642c50(0xe0,&stack0xffffffe4);
  local_2c = 0x61742b;
  FUN_004052cc(&local_10,unaff_EDI,&DAT_00617940);
  iVar10 = *(int *)(PTR_DAT_0066ac78 + 0x1a8);
  if (iVar10 == 1) {
    local_2c = 0x61744e;
    FUN_00642c50(0xd7,&local_24);
    local_2c = 0x61745c;
    FUN_004052cc(&local_20,local_10,local_24);
    local_2c = 0x61746a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_20);
  }
  else if (iVar10 == 2) {
    local_2c = 0x617479;
    FUN_00642c50(0xd8,&local_2c);
    uVar5 = local_2c;
    local_2c = 0x617487;
    FUN_004052cc(&local_28,local_10,uVar5);
    local_2c = 0x617495;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_28);
  }
  else if (iVar10 == 3) {
    local_2c = 0x6174a4;
    FUN_00642c50(0xd9,&local_34);
    local_2c = 0x6174b2;
    FUN_004052cc(&local_30,local_10,local_34);
    local_2c = 0x6174c0;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x324),local_30);
  }
  iVar6 = 0;
  iVar10 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar10) {
    local_8 = 1;
    do {
      iVar6 = iVar6 + 1;
      iVar7 = *(int *)(PTR_DAT_0066af90 + (local_8 + local_c) * 0x30 + -0x30);
      iVar1 = *(int *)(PTR_DAT_0066af90 + (local_8 + local_c) * 0x30 + -0x2c);
      local_2c = 0x617508;
      FUN_004030d4(local_54,&DAT_00617948);
      local_2c = 0x617520;
      FUN_004030a4(local_54,*(int *)PTR_DAT_0066af70 + iVar7 * 0x2f8,0x1a);
      local_2c = 0x61752b;
      FUN_00404b48(&local_38,local_54);
      local_2c = 0x61753b;
      FUN_00466238(*(undefined4 *)(DAT_006d4764 + iVar6 * 4),local_38);
      local_2c = 0x617548;
      FUN_004030d4(local_54,&DAT_00617948);
      local_2c = 0x617560;
      FUN_004030a4(local_54,*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8,0x1a);
      local_2c = 0x61756b;
      FUN_00404b48(&local_58,local_54);
      local_2c = 0x61757b;
      FUN_00466238(*(undefined4 *)(DAT_006d4768 + iVar6 * 4),local_58);
      local_2c = 0x61759d;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4764 + iVar6 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar7 * 0x2f8));
      local_2c = 0x6175bf;
      FUN_0042a3a0(*(undefined4 *)(*(int *)(DAT_006d4768 + iVar6 * 4) + 0x68),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar1 * 0x2f8));
      local_2c = 0x6175de;
      FUN_004663a8(*(undefined4 *)(DAT_006d4764 + iVar6 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar7 * 0x2f8));
      local_2c = 0x6175fd;
      FUN_004663a8(*(undefined4 *)(DAT_006d4768 + iVar6 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
      local_2c = 0x617621;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d461c + iVar6 * 4) + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar7 * 0x2f8));
      local_2c = 0x617645;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(&DAT_006d46bc + iVar6 * 4) + 0x16c),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar1 * 0x2f8));
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc) = iVar7;
      *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc) = iVar1;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x10 + iVar6 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar7 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x14 + iVar6 * 0x1bc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x60 + iVar1 * 0x2f8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x18 + iVar6 * 0x1bc) = 3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x1c + iVar6 * 0x1bc) = 3;
      local_2c = 0xffffffff;
      local_30 = 0xffffffff;
      local_34 = 0x6176d9;
      uVar5 = FUN_0064dee4(5,0xffffffff,0xffffffff);
      *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + iVar6 * 0x1bc) = uVar5;
      local_2c = 0x6176f6;
      FUN_00466238(*(undefined4 *)(DAT_006d4780 + iVar6 * 4),0);
      local_2c = 0x617705;
      FUN_00545088(*(undefined4 *)(DAT_006d4784 + iVar6 * 4),0);
      iVar7 = *(int *)(DAT_006d492c + iVar6 * 4);
      if (*(int *)(iVar7 + 0x168) != 0) {
        local_2c = 0x61771d;
        FUN_0043aa68(iVar7,0);
      }
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                    *(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc) * 0x2f8) != '\0') ||
         (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 +
                   *(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc) * 0x2f8) != '\0')) {
        DAT_006d4794 = DAT_006d4794 + 1;
        (&DAT_006d4490)[DAT_006d4794] = iVar6;
      }
      local_8 = local_8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar10) {
    iVar6 = 1;
    piVar8 = &DAT_006d47b0;
    piVar9 = &DAT_006d4850;
    do {
      uVar2 = *(uint *)(PTR_DAT_0066ac78 + 0xc0);
      if ((int)uVar2 < 0x10) {
        if (uVar2 < 6) {
          iVar7 = 1;
        }
        else if (uVar2 - 6 < 5) {
          iVar7 = 2;
        }
        else if (uVar2 - 0xb < 5) {
          iVar7 = 3;
        }
        else {
LAB_006177f8:
          iVar7 = 1;
        }
      }
      else if (uVar2 - 0x10 < 5) {
        iVar7 = 1;
      }
      else if (uVar2 - 0x15 < 5) {
        iVar7 = 2;
      }
      else {
        if (4 < uVar2 - 0x1a) goto LAB_006177f8;
        iVar7 = 3;
      }
      if (iVar6 == 1) {
        local_2c = 0x617820;
        FUN_00404928(*(int *)PTR_DAT_0066b3b8 + 0x1f8,
                     *(undefined4 *)(PTR_PTR_0066b370 + iVar7 * 8 + -8));
      }
      else {
        local_2c = 0x617840;
        FUN_00404928(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar6 * 0x1bc,
                     *(undefined4 *)(PTR_PTR_0066b370 + iVar7 * 8 + -4));
      }
      local_2c = 0x61785b;
      FUN_00466238(*(undefined4 *)(DAT_006d4760 + iVar6 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x3c + iVar6 * 0x1bc));
      local_2c = 0x61786e;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc),&local_5c);
      if (local_5c != 0) {
        local_2c = 0x617887;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar6 * 0x1bc),&local_60);
        local_2c = 0x617897;
        FUN_0042d6c0(*(undefined4 *)(*piVar8 + 0x168),local_60);
      }
      local_2c = 0x6178aa;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc),&local_64);
      if (local_64 != 0) {
        local_2c = 0x6178c3;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar6 * 0x1bc),&local_68);
        local_2c = 0x6178d6;
        FUN_0042d6c0(*(undefined4 *)(*piVar9 + 0x168),local_68);
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      piVar8 = piVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  local_2c = 0x6178f3;
  FUN_0043b234(DAT_006d4918,1);
  puVar3 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00617932;
  local_24 = (undefined1 *)0x61790d;
  FUN_004048f8(&local_68,5,puVar3);
  local_24 = (undefined1 *)0x617915;
  FUN_004048d4(&local_38);
  local_24 = (undefined1 *)0x617922;
  FUN_00405008(&local_34,7);
  local_24 = (undefined1 *)0x61792a;
  FUN_00404ff0(&local_10);
  return;
}

