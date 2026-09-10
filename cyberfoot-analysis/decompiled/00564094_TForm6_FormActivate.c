// Address: 00564094
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm6_FormActivate(int param_1)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *in_FS_OFFSET;
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
  undefined *local_34;
  undefined4 local_30;
  undefined1 **local_2c;
  undefined4 *puStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  iVar6 = 0xc;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_20 = &LAB_005647bc;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_28 = &local_c;
  piVar1 = *(int **)(*(int *)PTR_DAT_0066b300 + 0x33c);
  local_2c = (undefined1 **)0x5640d1;
  uVar4 = (**(code **)(*piVar1 + 0x138))();
  local_2c = (undefined1 **)0x5640dd;
  FUN_00416244(&local_1c,uVar4,0xfc);
  local_2c = &local_1c;
  local_30 = 0x5640ee;
  FUN_00416478(&local_2c,"idjog");
  ppuVar2 = local_2c;
  local_2c = (undefined1 **)0x5640fe;
  FUN_0050e448(piVar1,&local_2c,ppuVar2);
  local_2c = (undefined1 **)0x564109;
  FUN_00404b6c(&local_8,local_c);
  local_2c = (undefined1 **)0x564111;
  DAT_0067b49c = FUN_00409ff8(local_8);
  if (*PTR_DAT_0066ad3c == '\0') {
    uVar7 = (uint)*(byte *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 +
                           DAT_0067b49c);
  }
  else {
    uVar7 = *(uint *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8
                     );
  }
  local_2c = (undefined1 **)0x564176;
  (**(code **)(**(int **)(param_1 + 0x33c) + 0xd8))();
  local_2c = (undefined1 **)0x564184;
  (**(code **)(**(int **)(param_1 + 0x340) + 0xd8))();
  if (uVar7 == 0) {
    iVar6 = 0;
    puVar8 = (undefined4 *)PTR_DAT_0066b3a4;
    do {
      local_2c = (undefined1 **)&DAT_005647e4;
      local_30 = 0x5641a4;
      FUN_00409dd8(iVar6 + 1,&local_38);
      local_30 = local_38;
      local_34 = &DAT_005647f0;
      local_38 = 0x5641b9;
      FUN_00404c64(&local_34,3);
      local_2c = (undefined1 **)0x5641c4;
      FUN_004051d4(&local_30,local_34);
      local_2c = (undefined1 **)0x5641ce;
      FUN_0040526c(&local_30,*puVar8);
      local_2c = (undefined1 **)0x5641dc;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),local_30);
      local_2c = (undefined1 **)0x5641e6;
      FUN_00409dd8(iVar6,&local_40);
      local_2c = (undefined1 **)0x5641f3;
      FUN_00404bac(&local_40,&DAT_005647f0);
      local_2c = (undefined1 **)0x5641fe;
      FUN_004051d4(&local_3c,local_40);
      local_2c = (undefined1 **)0x564208;
      FUN_0040526c(&local_3c,*puVar8);
      local_2c = (undefined1 **)0x564216;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),local_3c);
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 != 4);
  }
  else {
    iVar6 = 4;
    puVar8 = (undefined4 *)(PTR_DAT_0066b3a4 + 0x10);
    do {
      local_2c = (undefined1 **)&DAT_005647e4;
      local_30 = 0x564248;
      FUN_00409dd8(iVar6 + -3,&local_4c);
      local_30 = local_4c;
      local_34 = &DAT_005647f0;
      local_38 = 0x56425d;
      FUN_00404c64(&local_48,3);
      local_2c = (undefined1 **)0x564268;
      FUN_004051d4(&local_44,local_48);
      local_2c = (undefined1 **)0x564272;
      FUN_0040526c(&local_44,*puVar8);
      local_2c = (undefined1 **)0x564280;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x33c),local_44);
      local_2c = (undefined1 **)0x56428d;
      FUN_00409dd8(iVar6 + -4,&local_54);
      local_2c = (undefined1 **)0x56429a;
      FUN_00404bac(&local_54,&DAT_005647f0);
      local_2c = (undefined1 **)0x5642a5;
      FUN_004051d4(&local_50,local_54);
      local_2c = (undefined1 **)0x5642af;
      FUN_0040526c(&local_50,*puVar8);
      local_2c = (undefined1 **)0x5642bd;
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x340),local_50);
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 != 0xe);
  }
  if (*PTR_DAT_0066ad3c == '\0') {
    local_2c = (undefined1 **)0x564304;
    FUN_00404b48(&local_58,
                 *(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + -0x24 +
                 DAT_0067b49c * 0x24);
    local_2c = (undefined1 **)0x564312;
    FUN_00466238(*(undefined4 *)(param_1 + 0x300),local_58);
    local_2c = (undefined1 **)0x564341;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),
                 *(undefined1 *)
                  (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x617 +
                  DAT_0067b49c));
    iVar6 = *(int *)PTR_DAT_0066ac90;
    if (*(char *)(*(int *)PTR_DAT_0066b110 + iVar6 * 0x708 + 0x617 + DAT_0067b49c) == '\0') {
      local_2c = (undefined1 **)0x564391;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),
                   *(undefined1 *)(*(int *)PTR_DAT_0066b110 + iVar6 * 0x708 + 0x667 + DAT_0067b49c))
      ;
      local_2c = (undefined1 **)0x5643c0;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),
                   *(undefined1 *)
                    (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x68f +
                    DAT_0067b49c));
    }
    else {
      local_2c = (undefined1 **)0x5643ef;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),
                   *(byte *)(*(int *)PTR_DAT_0066b110 + iVar6 * 0x708 + 0x667 + DAT_0067b49c) - 4);
      local_2c = (undefined1 **)0x564421;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),
                   *(byte *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x68f +
                            DAT_0067b49c) - 4);
    }
    local_2c = (undefined1 **)0x564450;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),
                 *(undefined1 *)
                  (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x6b7 +
                  DAT_0067b49c));
    local_2c = (undefined1 **)0x56447c;
    FUN_00409dd8(*(undefined1 *)
                  (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5ef +
                  DAT_0067b49c),&local_5c);
    local_2c = (undefined1 **)0x56448a;
    FUN_00466238(*(undefined4 *)(param_1 + 0x2f8),local_5c);
    local_2c = (undefined1 **)0x5644b9;
    FUN_00449fdc(*(undefined4 *)(param_1 + 0x304),
                 *(undefined1 *)
                  (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5ef +
                  DAT_0067b49c));
    iVar6 = 0;
    puVar5 = (uint *)(PTR_DAT_0066b2bc + 4);
    do {
      if ((uint)*(byte *)(*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x5c7 +
                         DAT_0067b49c) == *puVar5) {
        local_2c = (undefined1 **)0x5644f9;
        FUN_0054c10c(*(undefined4 *)(param_1 + 0x338),iVar6);
        break;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 != 0xca);
    local_2c = (undefined1 **)0x564538;
    (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))
              (*(int **)(param_1 + 0x2fc),
               *(undefined1 *)
                (*(int *)PTR_DAT_0066b110 + *(int *)PTR_DAT_0066ac90 * 0x708 + 0x59f + DAT_0067b49c)
              );
  }
  else {
    local_2c = (undefined1 **)0x564567;
    FUN_00404b48(&local_60,
                 PTR_DAT_0066b640 + DAT_0067b49c * 0x24 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x38);
    local_2c = (undefined1 **)0x564575;
    FUN_00466238(*(undefined4 *)(param_1 + 0x300),local_60);
    local_2c = (undefined1 **)0x5645a1;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x330),
                 *(undefined4 *)
                  (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8));
    if (*(int *)(PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x4b8) ==
        0) {
      local_2c = (undefined1 **)0x5645f1;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),
                   *(undefined4 *)
                    (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x598)
                  );
      local_2c = (undefined1 **)0x56461d;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),
                   *(undefined4 *)
                    (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x608)
                  );
    }
    else {
      local_2c = (undefined1 **)0x56464e;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x33c),
                   *(int *)(PTR_DAT_0066b640 +
                           DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x598) + -4);
      local_2c = (undefined1 **)0x56467d;
      FUN_0054c10c(*(undefined4 *)(param_1 + 0x340),
                   *(int *)(PTR_DAT_0066b640 +
                           DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x608) + -4);
    }
    local_2c = (undefined1 **)0x5646aa;
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x334),
                 PTR_DAT_0066b640[DAT_0067b49c + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x698]);
    local_2c = (undefined1 **)0x5646d3;
    FUN_00409dd8(*(undefined4 *)
                  (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x448),
                 &local_64);
    local_2c = (undefined1 **)0x5646e1;
    FUN_00466238(*(undefined4 *)(param_1 + 0x2f8),local_64);
    local_2c = (undefined1 **)0x56470d;
    FUN_00449fdc(*(undefined4 *)(param_1 + 0x304),
                 *(undefined4 *)
                  (PTR_DAT_0066b640 + DAT_0067b49c * 4 + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x448));
    local_2c = (undefined1 **)0x56473c;
    (**(code **)(**(int **)(param_1 + 0x2fc) + 0xcc))
              (*(int **)(param_1 + 0x2fc),
               PTR_DAT_0066b640[DAT_0067b49c + *(int *)PTR_DAT_0066b63c * 0x6d4 + 0x67b]);
  }
  puVar3 = puStack_20;
  *in_FS_OFFSET = (int)puStack_28;
  puStack_20 = &LAB_005647c3;
  iStack_24 = 0x564756;
  FUN_004048f8(&local_64,5,puVar3);
  iStack_24 = 0x56475e;
  FUN_00404ff0(&local_50);
  iStack_24 = 0x56476b;
  FUN_004048f8(&local_4c,2);
  iStack_24 = 0x564773;
  FUN_00404ff0(&local_44);
  iStack_24 = 0x56477b;
  FUN_004048d4(&local_40);
  iStack_24 = 0x564783;
  FUN_00404ff0(&local_3c);
  iStack_24 = 0x564790;
  FUN_004048f8(&local_38,2);
  iStack_24 = 0x564798;
  FUN_00404ff0(&local_30);
  iStack_24 = 0x5647ab;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  iStack_24 = 0x5647b3;
  FUN_00404ff0(&local_c);
  iStack_24 = 0x5647bb;
  FUN_004048d4(&local_8);
  return;
}

