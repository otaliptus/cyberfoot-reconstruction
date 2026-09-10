// Address: 005d8d1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm26_bt3Click(void)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  
  puVar4 = PTR_DAT_0066af70;
  iVar8 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < iVar8 + -1) {
    iVar7 = 0;
    do {
      if (((*(int *)(*(int *)puVar4 + 0x7c + iVar7 * 0x2f8) == 0) &&
          (*(char *)(*(int *)puVar4 + 0x39 + iVar7 * 0x2f8) != '\0')) &&
         ((*(int *)(*(int *)puVar4 + 0x3c + iVar7 * 0x2f8) != 0x1d ||
          ((((PTR_DAT_0066ac78[0x75c] == '\0' || (PTR_DAT_0066ac78[0x170] == '\0')) ||
            (*(int *)(*(int *)puVar4 + 0x80 + iVar7 * 0x2f8) == 0)) ||
           (PTR_DAT_0066ae98[*(int *)(*(int *)puVar4 + 0x40 + iVar7 * 0x2f8) * 0x568 + 0x52d] ==
            '\0')))))) {
        *(int *)PTR_DAT_0066b48c = iVar7;
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00641f38,PTR_DAT_0066b04c);
        (**(code **)(**(int **)PTR_DAT_0066b04c + 0xec))();
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066add8);
  if (-1 < iVar8) {
    iVar8 = iVar8 + 1;
    iVar7 = 0;
    do {
      if (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 +
                   *(int *)(*(int *)PTR_DAT_0066add8 + iVar7 * 8) * 0x80) != '\0') {
        iVar5 = 4;
        puVar9 = (undefined4 *)PTR_DAT_0066adf4;
        do {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *(undefined4 *)PTR_DAT_0066adf4 = *(undefined4 *)(*(int *)PTR_DAT_0066add8 + 4 + iVar7 * 8);
        *(undefined4 *)(PTR_DAT_0066ac78 + 0x10) =
             *(undefined4 *)(*(int *)PTR_DAT_0066add8 + iVar7 * 8);
        iVar5 = *(int *)PTR_DAT_0066adf4;
        if (((*(char *)(*(int *)puVar4 + 0x39 + iVar5 * 0x2f8) == '\0') &&
            (*(char *)(*(int *)puVar4 + 0x216 + iVar5 * 0x2f8) != '\0')) &&
           (*(int *)(*(int *)puVar4 + 0x80 + iVar5 * 0x2f8) <=
            *(int *)(PTR_DAT_0066ae98 +
                    *(int *)(*(int *)puVar4 + 0x40 + iVar5 * 0x2f8) * 0x568 + 0x510))) {
          *(undefined1 *)
           (*(int *)PTR_DAT_0066b718 + 0x30 + *(int *)(PTR_DAT_0066ac78 + 0x10) * 0x80) = 0;
          FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d5dbc,PTR_DAT_0066b408);
          (**(code **)(**(int **)PTR_DAT_0066b408 + 0xec))();
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_004060a8(PTR_DAT_0066add8,PTR_DAT_00489000,1,0);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c) = 1;
  FUN_004060a8(PTR_DAT_0066b0d4,PTR_DAT_00488d00,1,0);
  FUN_004060a8(PTR_DAT_0066b160,PTR_DAT_00488d80,1,0);
  if ((PTR_DAT_0066ac78[0x6c8] == '\0') && (0 < *(int *)(PTR_DAT_0066ac78 + 0x13c))) {
    *PTR_DAT_0066b53c = 0;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d85b4,PTR_DAT_0066b67c);
    (**(code **)(**(int **)PTR_DAT_0066b67c + 0xec))();
    if ((*PTR_DAT_0066b53c != '\0') && (iVar8 = *(int *)(PTR_DAT_0066ac78 + 0x13c), 0 < iVar8)) {
      puVar9 = (undefined4 *)(PTR_DAT_0066ac78 + 0x140);
      do {
        *(undefined4 *)(PTR_DAT_0066ac78 + 8) = *puVar9;
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d2190,PTR_DAT_0066ac58);
        (**(code **)(**(int **)PTR_DAT_0066ac58 + 0xec))();
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *PTR_DAT_0066b53c = 0;
  }
  FUN_00656a18();
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x88) =
       *(undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -8);
  cVar2 = '\0';
  FUN_0064fdf0();
  switch(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88)) {
  case 0:
    cVar2 = '\x01';
    break;
  case 1:
    cVar2 = FUN_0065735c();
    break;
  case 2:
    cVar2 = FUN_00656d70();
    break;
  case 3:
    cVar2 = FUN_00657370();
    break;
  case 4:
    cVar2 = FUN_0065746c();
    break;
  case 6:
    cVar2 = FUN_00656cac();
    break;
  case 7:
    cVar2 = FUN_00653218();
  }
  FUN_0064cae0();
  if (cVar2 == '\0') {
    iVar8 = *(int *)(PTR_DAT_0066ac78 + 0x88);
    if (iVar8 == 1) {
      *(undefined4 *)PTR_DAT_0066b484 = 0;
    }
    if (iVar8 == 2) {
      cVar2 = FUN_00656d04();
      if (cVar2 == '\0') {
        *(int *)(PTR_DAT_0066ac78 + 0x110) = *(int *)(PTR_DAT_0066ac78 + 0x110) + 1;
        *(undefined4 *)(PTR_DAT_0066ac78 + 0x88) = 1;
        uVar3 = FUN_00656d44();
        *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c) = uVar3;
        *PTR_DAT_0066afb4 = 1;
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
        FUN_00483bc4(DAT_006d3474);
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
      }
      else {
        *(undefined4 *)PTR_DAT_0066b484 = 0;
      }
    }
    if (((*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) && (*(int *)PTR_DAT_0066b09c == 0)) &&
       (*(int *)(PTR_DAT_0066ae98 + 0x510) == 0)) {
      if (PTR_DAT_0066ae98[0x8c55] == '\0') {
        if (PTR_DAT_0066ae98[0x667d] == '\0') {
          if (PTR_DAT_0066ae98[0x3b3d] == '\0') {
            iVar8 = 0;
            pcVar10 = PTR_DAT_0066ae98 + 0x52d;
            do {
              if (*pcVar10 != '\0') {
                *(int *)PTR_DAT_0066b09c = iVar8;
                break;
              }
              iVar8 = iVar8 + 1;
              pcVar10 = pcVar10 + 0x568;
            } while (iVar8 != 0x1b);
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
    *(undefined4 *)PTR_DAT_0066b484 = 0;
    puVar1 = PTR_DAT_0066b484;
    puVar4 = *(undefined **)(PTR_DAT_0066ac78 + 0x88);
    puVar6 = (undefined *)0x0;
    if ((puVar4 == (undefined *)0x4) || (puVar6 = PTR_DAT_0066ac78, puVar4 == (undefined *)0x6)) {
      *(undefined4 *)PTR_DAT_0066b484 = 1;
      puVar4 = puVar1;
    }
    FUN_004e1a98(puVar4,puVar6);
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
      cVar2 = FUN_0065746c();
      if (cVar2 == '\0') {
        if (((PTR_DAT_0066ac78[0x175] == '\0') && (PTR_DAT_0066ac78[0x176] == '\0')) &&
           ((PTR_DAT_0066ac78[0x177] == '\0' && (PTR_DAT_0066ac78[0x178] == '\0')))) {
          FUN_00618ac8(*(undefined4 *)PTR_DAT_0066b6a4);
        }
        else {
          FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
        }
      }
      else {
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
      }
    }
    else {
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
    }
    FUN_00483bc4(DAT_006d3474);
  }
  else {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
    FUN_00483bc4(DAT_006d3474);
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
  }
  return;
}

