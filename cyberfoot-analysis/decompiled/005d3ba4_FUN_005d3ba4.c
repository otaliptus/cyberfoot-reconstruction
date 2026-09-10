// Address: 005d3ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d3ba4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *local_14;
  
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x700) = 0;
  PTR_DAT_0066ac78[0x708] = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x5fc) = 0;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x62c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x630) = 1;
  iVar8 = 10;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x604);
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = FUN_004032c8(6,0,param_3,1);
  iVar8 = iVar8 + 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4bc) = *(undefined4 *)(&DAT_0066a16c + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c0) = *(undefined4 *)(&DAT_0066a170 + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c4) = *(undefined4 *)(&DAT_0066a174 + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c8) = *(undefined4 *)(&DAT_0066a178 + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4cc) = *(undefined4 *)(&DAT_0066a17c + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4d0) = *(undefined4 *)(&DAT_0066a180 + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4d4) = *(undefined4 *)(&DAT_0066a184 + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4d8) = *(undefined4 *)(&DAT_0066a188 + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4dc) = *(undefined4 *)(&DAT_0066a18c + iVar8 * 0x30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4e0) = (&DAT_0066a190)[iVar8 * 0xc];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4e4) = (&DAT_0066a194)[iVar8 * 0xc];
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4e8) = *(undefined4 *)(&DAT_0066a198 + iVar8 * 0x30);
  iVar8 = 3;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar6 = 4;
    puVar9 = puVar2;
    do {
      uVar3 = FUN_005d3b58(*puVar9);
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar2 = puVar2 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  _DAT_006d333c = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  _DAT_006d333c = _DAT_006d333c + 1;
  _DAT_006d3340 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066af70);
  _DAT_006d3340 = _DAT_006d3340 + 1;
  iVar8 = 1;
  piVar5 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar6 = 1;
    piVar4 = piVar5;
    do {
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x5c + *piVar4 * 0x2f8) = iVar6;
      *(int *)(*(int *)PTR_DAT_0066af70 + 0x94 + *piVar4 * 0x2f8) = iVar8;
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + *piVar4 * 0x2f8) = 1;
      _DAT_006d3340 = _DAT_006d3340 + 1;
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 != 5);
    iVar8 = iVar8 + 1;
    piVar5 = piVar5 + 4;
  } while (iVar8 != 4);
  iVar6 = 0;
  FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,0);
  iVar8 = 3;
  local_14 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
  do {
    iVar7 = 4;
    piVar5 = local_14;
    do {
      iVar6 = iVar6 + 1;
      FUN_004060a8(&DAT_006d3344,PTR_DAT_005d3af8,1,iVar6);
      *(int *)(DAT_006d3344 + -0xc + iVar6 * 0xc) = *piVar5;
      *(undefined4 *)(DAT_006d3344 + -8 + iVar6 * 0xc) =
           *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x98 + *piVar5 * 0x2f8);
      uVar3 = FUN_004032c8(100);
      *(undefined4 *)(DAT_006d3344 + -4 + iVar6 * 0xc) = uVar3;
      piVar5 = piVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    local_14 = local_14 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  DAT_006d3278 = FUN_00405eec(DAT_006d3344);
  puVar10 = &LAB_005d3b1c;
  FUN_004bcdb0(DAT_006d3344,0xc,0,&LAB_005d3b1c,DAT_006d3278 + -1);
  iVar8 = 0;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x648);
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar8 != 8);
  iVar8 = 8;
  puVar2 = (undefined4 *)(PTR_DAT_0066ac78 + 0x668);
  do {
    *puVar2 = *(undefined4 *)(DAT_006d3344 + iVar8 * 0xc);
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar8 != 0xc);
  uVar1 = *(uint *)(PTR_DAT_0066ac78 + 0x638);
  if ((int)uVar1 < 0x1c) {
    if (uVar1 < 7) {
      puVar10 = (undefined1 *)(uVar1 + 1);
    }
    else if (uVar1 - 7 < 7) {
      puVar10 = (undefined1 *)(uVar1 - 6);
    }
    else if (uVar1 - 0xe < 7) {
      puVar10 = (undefined1 *)(uVar1 - 0xd);
    }
    else if (uVar1 - 0x15 < 7) {
      puVar10 = (undefined1 *)(uVar1 - 0x14);
    }
  }
  else if (uVar1 - 0x1c < 7) {
    puVar10 = (undefined1 *)(uVar1 - 0x1b);
  }
  else if (uVar1 - 0x23 < 7) {
    puVar10 = (undefined1 *)(uVar1 - 0x22);
  }
  else if (uVar1 - 0x2a < 7) {
    puVar10 = (undefined1 *)(uVar1 - 0x29);
  }
  else if (uVar1 - 0x31 < 7) {
    puVar10 = (undefined1 *)(uVar1 - 0x30);
  }
  *(undefined1 **)(PTR_DAT_0066ac78 + 0x644) = puVar10;
  return;
}

