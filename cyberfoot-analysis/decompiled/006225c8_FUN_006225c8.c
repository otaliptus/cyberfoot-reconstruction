// Address: 006225c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006225c8(undefined4 param_1)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar2 = PTR_DAT_0066ac78;
  iVar8 = -1;
  iVar7 = -1;
  DAT_006d4924 = '\0';
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  DAT_006d4794 = 0;
  bVar1 = false;
  if ((*(int *)(puVar2 + 0x88) == 2) && (*(int *)(puVar2 + 0x110) == 0)) {
    while ((!bVar1 && (*(int *)PTR_DAT_0066b484 < iVar4))) {
      iVar5 = FUN_0065a250(*(undefined4 *)PTR_DAT_0066b484,2,0);
      if (iVar5 == -1) {
        *(int *)PTR_DAT_0066b484 = *(int *)PTR_DAT_0066b484 + 1;
      }
      else {
        bVar1 = true;
      }
    }
  }
  if ((*(int *)(puVar2 + 0x88) == 2) && (*(int *)(puVar2 + 0x110) == 1)) {
    while ((!bVar1 && (*(int *)PTR_DAT_0066b484 < iVar4))) {
      iVar5 = FUN_0065a250(*(undefined4 *)PTR_DAT_0066b484,2,1);
      if (iVar5 == -1) {
        *(int *)PTR_DAT_0066b484 = *(int *)PTR_DAT_0066b484 + 1;
      }
      else {
        bVar1 = true;
      }
    }
  }
  if ((*(int *)(puVar2 + 0x88) == 2) && (iVar8 = FUN_00656dc8(), iVar8 < *(int *)PTR_DAT_0066b484))
  {
    iVar8 = -1;
  }
  if (*(int *)(puVar2 + 0x88) == 1) {
    iVar7 = FUN_00656fb0();
    if (iVar7 < *(int *)PTR_DAT_0066b484) {
      iVar7 = -1;
    }
    if (*(int *)PTR_DAT_0066b484 < iVar4) {
      _DAT_006d48f0 =
           FUN_00645280(*(undefined4 *)
                         (*(int *)PTR_DAT_0066aca0 + 0x140 + *(int *)PTR_DAT_0066b484 * 0x294));
    }
  }
  iVar5 = *(int *)(puVar2 + 0x88);
  if ((iVar5 == 1) || (iVar5 == 2)) {
    if (*(int *)PTR_DAT_0066b484 < iVar4) {
      if ((((*(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + *(int *)PTR_DAT_0066b484 * 0x294) == '\0')
           && (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + *(int *)PTR_DAT_0066b484 * 0x294) ==
               '\0')) && (iVar8 != *(int *)PTR_DAT_0066b484)) && (iVar7 != *(int *)PTR_DAT_0066b484)
         ) {
        DAT_006d4924 = '\0';
      }
      else {
        DAT_006d4924 = '\x01';
      }
    }
    if (((*(int *)(puVar2 + 0x88) == 2) && (*(int *)(puVar2 + 0x110) == 0)) &&
       (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + *(int *)PTR_DAT_0066b484 * 0x294) == 0x1d)) {
      DAT_006d4924 = '\x01';
    }
  }
  else if (iVar5 == 4) {
    DAT_006d4924 = '\x01';
  }
  else if (iVar5 == 6) {
    DAT_006d4924 = '\x01';
  }
  if ((*(int *)(puVar2 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 == 1)) {
    iVar8 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066afa0);
    bVar1 = false;
    if (-1 < iVar8 + -1) {
      iVar7 = 0;
      do {
        if ((((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x38 + iVar7 * 0x48) == 1) &&
             (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar7 * 0x48) == 6)) &&
            (*(double *)(*(int *)PTR_DAT_0066afa0 + 0x30 + iVar7 * 0x48) ==
             *(double *)(PTR_DAT_0066b574 + *(int *)(puVar2 + 0x16c) * 0x18 + -0x10))) &&
           (*(char *)(*(int *)PTR_DAT_0066afa0 + 0x2c + iVar7 * 0x48) == '\0')) {
          bVar1 = true;
          break;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (!bVar1) {
      *(int *)PTR_DAT_0066b484 = *(int *)PTR_DAT_0066b484 + 1;
      *PTR_DAT_0066b6a0 = 0;
    }
  }
  iVar8 = *(int *)(puVar2 + 0x88);
  if ((iVar8 == 4) || (iVar8 == 6)) {
    iVar4 = 3;
  }
  if (iVar8 == 4) {
    iVar4 = 5;
    if ((*(int *)PTR_DAT_0066b484 == 1) && (puVar2[0x175] == '\0')) {
      DAT_006d4924 = '\0';
    }
    if ((*(int *)PTR_DAT_0066b484 == 2) && (puVar2[0x176] == '\0')) {
      DAT_006d4924 = '\0';
    }
    if ((*(int *)PTR_DAT_0066b484 == 3) && (puVar2[0x177] == '\0')) {
      DAT_006d4924 = '\0';
    }
    if ((*(int *)PTR_DAT_0066b484 == 4) && (puVar2[0x178] == '\0')) {
      DAT_006d4924 = '\0';
    }
    if ((*(int *)PTR_DAT_0066b484 == 1) && (cVar3 = FUN_006574c4(1), cVar3 != '\0')) {
      DAT_006d4924 = '\x01';
    }
    if ((*(int *)PTR_DAT_0066b484 == 2) && (cVar3 = FUN_006574c4(0), cVar3 != '\0')) {
      DAT_006d4924 = '\x01';
    }
    if ((*(int *)PTR_DAT_0066b484 == 3) && (cVar3 = FUN_006574c4(2), cVar3 != '\0')) {
      DAT_006d4924 = '\x01';
    }
    if ((*(int *)PTR_DAT_0066b484 == 4) && (cVar3 = FUN_006574c4(3), cVar3 != '\0')) {
      DAT_006d4924 = '\x01';
    }
  }
  if (*(int *)PTR_DAT_0066b484 < iVar4) {
    if (DAT_006d4924 == '\0') {
      FUN_00622e5c(param_1);
      *PTR_DAT_0066b6c8 = 1;
      FUN_00621ee0(param_1);
    }
    else {
      *PTR_DAT_0066b6c8 = 0;
      FUN_00622e5c(param_1);
      *(undefined4 *)PTR_DAT_0066b594 = 0;
      *(undefined4 *)PTR_DAT_0066af54 = 0;
      *(undefined4 *)PTR_DAT_0066b2cc = 1;
      DAT_006d4794 = 0;
      *PTR_DAT_0066b6c8 = 0;
      iVar4 = 10;
      puVar6 = &DAT_006d4494;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      FUN_00612a00(param_1,*(undefined4 *)(puVar2 + 0x88));
      if (*(int *)(puVar2 + 0x88) == 6) {
        FUN_00610b38(param_1);
      }
      if (*(int *)(puVar2 + 0x88) == 1) {
        FUN_00610b38(param_1);
      }
      if (*(int *)(puVar2 + 0x88) == 4) {
        FUN_00610b38(param_1);
      }
      if (*(int *)(puVar2 + 0x88) == 2) {
        FUN_00610b38(param_1);
      }
      if (puVar2[0x6c8] != '\0') {
        FUN_0043b244(DAT_006d4918,1);
      }
      FUN_00618d28(param_1);
    }
  }
  else {
    if (*(int *)(puVar2 + 0x88) == 1) {
      FUN_0061ab38(param_1);
      if (*(int *)(puVar2 + 0x168) == 4) {
        iVar4 = 10;
      }
      else {
        iVar4 = 0x14;
      }
      *(int *)(puVar2 + 0x4c) = *(int *)(puVar2 + 0x4c) + 1;
      if (iVar4 == *(int *)(puVar2 + 0x4c)) {
        if (*(int *)(puVar2 + 0x50) == 1) {
          *(undefined4 *)(puVar2 + 0x50) = 2;
          *(undefined4 *)(puVar2 + 0x4c) = 1;
        }
        else {
          *PTR_DAT_0066ace0 = 1;
        }
      }
    }
    if (*(int *)(puVar2 + 0x88) == 2) {
      if (*(int *)(puVar2 + 0x118) == 1) {
        *(undefined4 *)(puVar2 + 0x118) = 2;
      }
      else {
        *(int *)(puVar2 + 0x110) = *(int *)(puVar2 + 0x110) + 1;
        *(undefined4 *)(puVar2 + 0x118) = 1;
      }
    }
    if ((*(int *)(puVar2 + 0x88) == 6) && (*(int *)PTR_DAT_0066b484 != 1)) {
      if (*(int *)(puVar2 + 0x1a4) == 1) {
        *(undefined4 *)(puVar2 + 0x1a4) = 2;
      }
      else {
        if (3 < *(int *)(puVar2 + 0x1a0)) {
          *(int *)(puVar2 + 0x1a0) = *(int *)(puVar2 + 0x1a0) + 1;
        }
        *(undefined4 *)(puVar2 + 0x1a4) = 1;
      }
      if (((*(int *)(puVar2 + 0x1a0) < 4) &&
          (*(int *)(puVar2 + 0x1a0) = *(int *)(puVar2 + 0x1a0) + 1, *(int *)(puVar2 + 0x1a0) == 4))
         && (*(int *)(puVar2 + 0x19c) == 1)) {
        *(undefined4 *)(puVar2 + 0x1a0) = 1;
        *(undefined4 *)(puVar2 + 0x19c) = 2;
      }
    }
    if (*(int *)(puVar2 + 0x88) == 4) {
      if (3 < *(int *)(puVar2 + 0x194)) {
        if (*(int *)(puVar2 + 0x198) == 1) {
          *(undefined4 *)(puVar2 + 0x198) = 2;
        }
        else {
          *(int *)(puVar2 + 0x194) = *(int *)(puVar2 + 0x194) + 1;
          *(undefined4 *)(puVar2 + 0x198) = 1;
        }
      }
      if (((*(int *)(puVar2 + 0x194) < 4) &&
          (*(int *)(puVar2 + 0x194) = *(int *)(puVar2 + 0x194) + 1, *(int *)(puVar2 + 0x194) == 4))
         && (*(int *)(puVar2 + 400) == 1)) {
        *(undefined4 *)(puVar2 + 0x194) = 1;
        *(undefined4 *)(puVar2 + 400) = 2;
      }
    }
    FUN_0060ee88(param_1);
  }
  return;
}

