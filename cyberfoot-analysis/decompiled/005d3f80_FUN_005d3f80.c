// Address: 005d3f80
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d3f80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 local_78 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [6];
  undefined4 local_48 [14];
  
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x700) = 0;
  local_78[0] = 1;
  PTR_DAT_0066ac78[0x708] = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x5fc) = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x62c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x630) = 1;
  iVar6 = 10;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x604);
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar8 = 0;
  FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
  puVar2 = local_78;
  iVar6 = 8;
  puVar7 = &DAT_0066a2bc;
  do {
    iVar8 = iVar8 + 1;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar8);
    *(undefined4 *)(DAT_006d3344 + -0xc + iVar8 * 0xc) = *puVar7;
    uVar3 = FUN_004032c8(100);
    *(undefined4 *)(DAT_006d3344 + -4 + iVar8 * 0xc) = uVar3;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_006d3278 = FUN_00405eec(DAT_006d3344);
  iVar6 = DAT_006d3278 + -1;
  FUN_004bcdb0(DAT_006d3344,0xc,0);
  FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar8);
  iVar8 = 0;
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar8 != 8);
  iVar9 = 0;
  FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
  iVar8 = 8;
  puVar2 = &DAT_0066a2dc;
  do {
    iVar9 = iVar9 + 1;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar9);
    *(undefined4 *)(DAT_006d3344 + -0xc + iVar9 * 0xc) = *puVar2;
    uVar3 = FUN_004032c8(100);
    *(undefined4 *)(DAT_006d3344 + -4 + iVar9 * 0xc) = uVar3;
    puVar2 = puVar2 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  DAT_006d3278 = FUN_00405eec(DAT_006d3344);
  iVar8 = DAT_006d3278 + -1;
  FUN_004bcdb0(DAT_006d3344,0xc,0);
  FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar9);
  iVar9 = 0;
  puVar2 = local_60;
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar9 * 0xc);
    iVar9 = iVar9 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar9 != 8);
  iVar10 = 0;
  FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
  iVar9 = 8;
  puVar2 = &DAT_0066a2fc;
  do {
    iVar10 = iVar10 + 1;
    FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar10);
    *(undefined4 *)(DAT_006d3344 + -0xc + iVar10 * 0xc) = *puVar2;
    uVar3 = FUN_004032c8(100);
    *(undefined4 *)(DAT_006d3344 + -4 + iVar10 * 0xc) = uVar3;
    puVar2 = puVar2 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  DAT_006d3278 = FUN_00405eec(DAT_006d3344);
  FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c,DAT_006d3278 + -1);
  FUN_004060a8(&DAT_006d3338,PTR_DAT_005d3ad4,1,iVar10);
  iVar9 = 0;
  puVar2 = local_48;
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar9 * 0xc);
    iVar9 = iVar9 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar9 != 8);
  *(undefined1 **)(PTR_DAT_0066ac78 + 0x4bc) = &LAB_005d3b1c;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c0) = local_78[0];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c4) = local_68;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c8) = local_60[2];
  *(int *)(PTR_DAT_0066ac78 + 0x4cc) = iVar8;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4d0) = local_78[1];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4d4) = local_64;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4d8) = local_60[3];
  *(undefined1 **)(PTR_DAT_0066ac78 + 0x4dc) = &LAB_005d3b1c;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4e0) = local_78[2];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4e4) = local_60[0];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4e8) = local_48[0];
  *(int *)(PTR_DAT_0066ac78 + 0x4ec) = iVar6;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4f0) = local_78[3];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4f4) = local_60[1];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4f8) = local_48[1];
  iVar6 = 4;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar8 = 4;
    puVar7 = puVar2;
    do {
      uVar3 = FUN_005d3b58(*puVar7);
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar2 = puVar2 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 1;
  piVar5 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar8 = 1;
    piVar4 = piVar5;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x5c + *piVar4 * 0x2f8) = iVar8;
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x94 + *piVar4 * 0x2f8) = iVar6;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + *piVar4 * 0x2f8) = 1;
      _DAT_006d3340 = _DAT_006d3340 + 1;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar8 != 5);
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 4;
  } while (iVar6 != 5);
  iVar8 = 0;
  FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
  iVar6 = 4;
  piVar5 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar9 = 4;
    piVar4 = piVar5;
    do {
      iVar8 = iVar8 + 1;
      FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar8);
      *(int *)(DAT_006d3344 + -0xc + iVar8 * 0xc) = *piVar5;
      *(undefined4 *)(DAT_006d3344 + -8 + iVar8 * 0xc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + *piVar5 * 0x2f8);
      uVar3 = FUN_004032c8(100);
      *(undefined4 *)(DAT_006d3344 + -4 + iVar8 * 0xc) = uVar3;
      piVar5 = piVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    piVar5 = piVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DAT_006d3278 = FUN_00405eec(DAT_006d3344);
  puVar11 = &LAB_005d3b1c;
  FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c,DAT_006d3278 + -1);
  iVar6 = 0;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x648);
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar6 * 0xc);
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar6 != 8);
  iVar6 = 8;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x668);
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar6 * 0xc);
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0x10);
  uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x63c);
  if ((int)uVar1 < 0x1c) {
    if (uVar1 < 7) {
      puVar11 = (undefined1 *)(uVar1 + 1);
    }
    else if (uVar1 - 7 < 7) {
      puVar11 = (undefined1 *)(uVar1 - 6);
    }
    else if (uVar1 - 0xe < 7) {
      puVar11 = (undefined1 *)(uVar1 - 0xd);
    }
    else if (uVar1 - 0x15 < 7) {
      puVar11 = (undefined1 *)(uVar1 - 0x14);
    }
  }
  else if (uVar1 - 0x1c < 7) {
    puVar11 = (undefined1 *)(uVar1 - 0x1b);
  }
  else if (uVar1 - 0x23 < 7) {
    puVar11 = (undefined1 *)(uVar1 - 0x22);
  }
  else if (uVar1 - 0x2a < 7) {
    puVar11 = (undefined1 *)(uVar1 - 0x29);
  }
  else if (uVar1 - 0x31 < 7) {
    puVar11 = (undefined1 *)(uVar1 - 0x30);
  }
  *(undefined1 **)(PTR_DAT_0066ac78 + 0x644) = puVar11;
  return;
}

