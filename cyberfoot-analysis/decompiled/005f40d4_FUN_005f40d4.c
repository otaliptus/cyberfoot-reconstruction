// Address: 005f40d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f40d4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  int *local_10;
  int iVar4;
  
  iVar9 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  if (iVar9 < 5) {
    iVar10 = 0;
    uVar11 = 0;
    iVar8 = 0x10;
    puVar1 = &DAT_006d3f48;
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar7 = (undefined1 *)0x8;
    piVar2 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
    do {
      iVar8 = 4;
      iVar3 = 0;
      local_10 = piVar2;
      do {
        iVar4 = iVar3;
        iVar3 = iVar4 + 1;
        uVar5 = 0x5f4159;
        FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar3,puVar7,iVar8,iVar9,iVar10,uVar11);
        iVar6 = *local_10;
        DAT_006d3f88[iVar3 * 10 + -10] = iVar6;
        DAT_006d3f88[iVar3 * 10 + -9] =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xd0 + iVar6 * 0x2f8);
        DAT_006d3f88[iVar3 * 10 + -8] =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xf8 + iVar6 * 0x2f8);
        DAT_006d3f88[iVar3 * 10 + -7] =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x120 + iVar6 * 0x2f8);
        DAT_006d3f88[iVar3 * 10 + -6] =
             *(int *)(*(int *)PTR_DAT_0066af70 + 0xf8 + iVar6 * 0x2f8) -
             (*(int *)(*(int *)PTR_DAT_0066af70 + 0x120 + iVar6 * 0x2f8) +
             *(int *)(*(int *)PTR_DAT_0066af70 + 0x148 + iVar6 * 0x2f8));
        DAT_006d3f88[iVar3 * 10 + -5] =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x148 + iVar6 * 0x2f8);
        DAT_006d3f88[iVar3 * 10 + -4] =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x170 + iVar6 * 0x2f8);
        DAT_006d3f88[iVar3 * 10 + -3] =
             *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x198 + iVar6 * 0x2f8);
        DAT_006d3f88[iVar3 * 10 + -2] =
             *(int *)(*(int *)PTR_DAT_0066af70 + 0x170 + iVar6 * 0x2f8) -
             *(int *)(*(int *)PTR_DAT_0066af70 + 0x198 + iVar6 * 0x2f8);
        local_10 = local_10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
      puVar7 = &LAB_005f2b00;
      FUN_004bcdb0(DAT_006d3f88,0x28,0,uVar5,DAT_006d3f44 + -1);
      if (-1 < iVar4) {
        iVar6 = 0;
        do {
          *(int *)(*(int *)PTR_DAT_0066af70 + 0x1c0 + DAT_006d3f88[iVar6 * 10] * 0x2f8) = iVar6 + 1;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (puVar7 == (undefined1 *)0x4) {
        (&DAT_006d3f44)[iVar8 + 1] = *DAT_006d3f88;
        (&DAT_006d3f44)[iVar8 + 2] = DAT_006d3f88[10];
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + DAT_006d3f88[0x14] * 0x2f8) = 0;
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + DAT_006d3f88[0x1e] * 0x2f8) = 0;
        iVar9 = 1;
      }
      FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
      iVar10 = iVar10 + 0x10;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined1 *)0x0);
    if ((char)iVar9 != '\0') {
      *(undefined4 *)PTR_DAT_0066ad60 = DAT_006d3f48;
      *(undefined4 *)(PTR_DAT_0066ad60 + 4) = DAT_006d3f54;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x30) = DAT_006d3f58;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x34) = DAT_006d3f64;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x60) = DAT_006d3f50;
      *(undefined4 *)(PTR_DAT_0066ad60 + 100) = DAT_006d3f4c;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x90) = DAT_006d3f60;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x94) = DAT_006d3f5c;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0xc0) = DAT_006d3f68;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0xc4) = DAT_006d3f74;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0xf0) = DAT_006d3f78;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0xf4) = DAT_006d3f84;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x120) = DAT_006d3f70;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x124) = DAT_006d3f6c;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x150) = DAT_006d3f80;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x154) = DAT_006d3f7c;
    }
  }
  return;
}

