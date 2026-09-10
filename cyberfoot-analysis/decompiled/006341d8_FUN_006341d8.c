// Address: 006341d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006341d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  
  puVar3 = PTR_DAT_0066aca0;
  iVar6 = 4;
  puVar4 = &DAT_006d5180;
  do {
    iVar1 = 0x14;
    puVar5 = puVar4;
    do {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar4 = puVar4 + 0x14;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 2;
  puVar4 = &DAT_006d5080;
  do {
    iVar1 = 0x20;
    puVar5 = puVar4;
    do {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar4 = puVar4 + 0x20;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar1 = 0;
  iVar6 = 1;
  local_14 = &DAT_006d5180;
  do {
    iVar2 = 1;
    puVar4 = local_14;
    do {
      *puVar4 = *(undefined4 *)(*(int *)puVar3 + param_1 * 0x294 + iVar6 * 0x50 + -0x54 + iVar2 * 4)
      ;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0x15);
    iVar6 = iVar6 + 1;
    local_14 = local_14 + 0x14;
  } while (iVar6 != 4);
  iVar6 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < iVar6 + -1) {
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(iVar2 * 0x5f);
      puVar3 = *(undefined **)PTR_DAT_0066af70;
      if (*(int *)(*(undefined **)PTR_DAT_0066af70 + iVar2 * 0x2f8 + 0x3c) == 0x1d) {
        puVar5 = *(undefined4 **)(*(undefined **)PTR_DAT_0066af70 + iVar2 * 0x2f8 + 0x7c);
        puVar3 = *(undefined **)PTR_DAT_0066af70;
        puVar4 = puVar5;
        if ((3 < (int)puVar5) ||
           (puVar4 = (undefined4 *)((int)puVar5 + -1), puVar3 = PTR_DAT_0066af70, (int)puVar5 < 1))
        {
          iVar1 = iVar1 + 1;
          *(int *)(iVar1 * 4 + 0x6d526c) = iVar2;
          if (0x14 < iVar1) break;
        }
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_1c = 4;
  piVar8 = &DAT_006d5180;
  do {
    iVar6 = 0x14;
    piVar7 = piVar8;
    do {
      iVar1 = FUN_004032c8(0x14,puVar4,puVar3);
      puVar4 = (undefined4 *)*piVar7;
      puVar3 = (undefined *)piVar8[iVar1];
      *piVar7 = (int)puVar3;
      piVar8[iVar1] = (int)puVar4;
      piVar7 = piVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar8 = piVar8 + 0x14;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  if ((((-1 < *(int *)PTR_DAT_0066b420) && (-1 < *(int *)(PTR_DAT_0066b420 + 4))) &&
      (-1 < *(int *)(PTR_DAT_0066b420 + 8))) && (-1 < *(int *)(PTR_DAT_0066b420 + 0xc))) {
    iVar6 = 4;
    puVar5 = &DAT_006d5270;
    puVar4 = (undefined4 *)PTR_DAT_0066b420;
    do {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = 0x20;
  piVar8 = &DAT_0066a858;
  puVar4 = &DAT_006d5080;
  do {
    *puVar4 = *(undefined4 *)(*piVar8 * 0x50 + 0x6d512c + piVar8[1] * 4);
    puVar4 = puVar4 + 1;
    piVar8 = piVar8 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0x20;
  piVar8 = &DAT_0066a958;
  puVar4 = &DAT_006d5100;
  do {
    *puVar4 = *(undefined4 *)(*piVar8 * 0x50 + 0x6d512c + piVar8[1] * 4);
    puVar4 = puVar4 + 1;
    piVar8 = piVar8 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar1 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066afa0);
  iVar6 = local_18;
  if (-1 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = 0;
    do {
      if (((*(int *)(*(int *)PTR_DAT_0066afa0 + 0x18 + iVar2 * 0x48) == 2) &&
          (*(int *)(*(int *)PTR_DAT_0066afa0 + 0x38 + iVar2 * 0x48) == param_1)) &&
         (iVar6 = iVar2, *(int *)(*(int *)PTR_DAT_0066afa0 + 0x1c + iVar2 * 0x48) == 0)) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
      iVar6 = local_18;
    } while (iVar1 != 0);
  }
  local_18 = iVar6;
  iVar6 = 0x20;
  piVar8 = &DAT_006d5080;
  do {
    *(int *)(*(int *)PTR_DAT_0066afa0 + local_18 * 0x48) = *piVar8;
    *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + local_18 * 0x48) = piVar8[0x20];
    *(int *)(*(int *)PTR_DAT_0066afa0 + (local_18 + 1) * 0x48) = piVar8[0x20];
    *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + (local_18 + 1) * 0x48) = *piVar8;
    local_18 = local_18 + 2;
    *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + *piVar8 * 0x2f8) = 1;
    *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + piVar8[0x20] * 0x2f8) = 1;
    piVar8 = piVar8 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

