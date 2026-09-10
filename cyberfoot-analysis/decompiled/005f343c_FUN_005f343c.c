// Address: 005f343c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f343c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint in_stack_ffffffe0;
  uint uVar11;
  int *local_14;
  int iVar5;
  
  iVar7 = *(int *)(PTR_DAT_0066ac78 + 0x62c);
  if (iVar7 < 5) {
    if (param_2 == 8) {
      iVar3 = 3;
    }
    else {
      iVar3 = 4;
    }
    iVar10 = 0;
    uVar11 = in_stack_ffffffe0 & 0xffffff00;
    uVar9 = 0;
    FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
    FUN_004060a8(&DAT_006d3f8c,PTR_DAT_005f2aa0,1,0);
    if (iVar7 == 4) {
      if (iVar3 != 0) {
        piVar2 = (int *)(PTR_DAT_0066ac78 + 0x4bc);
        do {
          iVar7 = 4;
          iVar4 = 0;
          local_14 = piVar2;
          do {
            iVar5 = iVar4;
            iVar4 = iVar5 + 1;
            uVar6 = 0x5f34fb;
            FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,iVar4,iVar7,uVar9,iVar10,uVar11,iVar3);
            iVar1 = *local_14;
            DAT_006d3f88[iVar4 * 10 + -10] = iVar1;
            DAT_006d3f88[iVar4 * 10 + -9] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0xb4 + param_2 * 4);
            DAT_006d3f88[iVar4 * 10 + -8] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0xdc + param_2 * 4);
            DAT_006d3f88[iVar4 * 10 + -7] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0x104 + param_2 * 4);
            DAT_006d3f88[iVar4 * 10 + -6] =
                 *(int *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0xdc + param_2 * 4) -
                 (*(int *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0x104 + param_2 * 4) +
                 *(int *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 300 + param_2 * 4));
            DAT_006d3f88[iVar4 * 10 + -5] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 300 + param_2 * 4);
            DAT_006d3f88[iVar4 * 10 + -4] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0x154 + param_2 * 4);
            DAT_006d3f88[iVar4 * 10 + -3] =
                 *(undefined4 *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0x17c + param_2 * 4);
            DAT_006d3f88[iVar4 * 10 + -2] =
                 *(int *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0x154 + param_2 * 4) -
                 *(int *)(*(int *)PTR_DAT_0066af70 + iVar1 * 0x2f8 + 0x17c + param_2 * 4);
            local_14 = local_14 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          DAT_006d3f44 = FUN_00405eec(DAT_006d3f88);
          iVar7 = DAT_006d3f44 + -1;
          puVar8 = &LAB_005f2b00;
          FUN_004bcdb0(DAT_006d3f88,0x28,0,uVar6);
          if (-1 < iVar5) {
            puVar8 = (undefined1 *)0x0;
            do {
              *(undefined1 **)
               (*(int *)PTR_DAT_0066af70 + DAT_006d3f88[(int)puVar8 * 10] * 0x2f8 + 0x1a4 +
               param_2 * 4) = puVar8 + 1;
              puVar8 = puVar8 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          (&DAT_006d3f44)[(int)(puVar8 + 1)] = *DAT_006d3f88;
          (&DAT_006d3f44)[(int)(puVar8 + 2)] = DAT_006d3f88[10];
          if (param_2 == 8) {
            iVar7 = iVar7 + 1;
            FUN_004060a8(&DAT_006d3f8c,PTR_DAT_005f2aa0,1,iVar7);
            FUN_0040595c(DAT_006d3f8c + iVar7 * 10 + -10,DAT_006d3f88 + 0x14,PTR_DAT_005f2a60);
          }
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + DAT_006d3f88[0x14] * 0x2f8) = 0;
          *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + DAT_006d3f88[0x1e] * 0x2f8) = 0;
          uVar9 = 1;
          uVar11 = uVar11 + 0x10;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      FUN_004060a8(&DAT_006d3f88,PTR_DAT_005f2a80,1,0);
    }
    if ((char)uVar11 != '\0') {
      if (param_2 == 8) {
        DAT_006d3f44 = FUN_00405eec(DAT_006d3f8c);
        FUN_004bcdb0(DAT_006d3f8c,0x28,0,&LAB_005f2b00,DAT_006d3f44 + -1);
        DAT_006d3f60 = *DAT_006d3f8c;
        DAT_006d3f64 = DAT_006d3f8c[10];
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + DAT_006d3f60 * 0x2f8) = 1;
        *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x215 + DAT_006d3f8c[10] * 0x2f8) = 1;
      }
      *(undefined4 *)PTR_DAT_0066ad60 = DAT_006d3f48;
      *(undefined4 *)(PTR_DAT_0066ad60 + 4) = DAT_006d3f54;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x30) = DAT_006d3f58;
      *(int *)(PTR_DAT_0066ad60 + 0x34) = DAT_006d3f64;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x60) = DAT_006d3f50;
      *(undefined4 *)(PTR_DAT_0066ad60 + 100) = DAT_006d3f4c;
      *(int *)(PTR_DAT_0066ad60 + 0x90) = DAT_006d3f60;
      *(undefined4 *)(PTR_DAT_0066ad60 + 0x94) = DAT_006d3f5c;
    }
  }
  return;
}

