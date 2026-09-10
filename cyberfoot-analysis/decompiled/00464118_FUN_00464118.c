// Address: 00464118
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464118(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  HWND pHVar4;
  undefined4 uVar5;
  HCURSOR pHVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  int iVar11;
  char cVar12;
  int local_1c;
  bool local_18 [4];
  int local_14;
  int local_10;
  
  bVar10 = 0;
  if (((DAT_0066cb90 == '\0') &&
      (uVar7 = DAT_0066cb80 - *param_1 >> 0x1f,
      (int)((DAT_0066cb80 - *param_1 ^ uVar7) - uVar7) < DAT_0066cb8c)) &&
     (uVar7 = DAT_0066cb84 - param_1[1] >> 0x1f,
     (int)((DAT_0066cb84 - param_1[1] ^ uVar7) - uVar7) < DAT_0066cb8c)) {
    return;
  }
  iVar3 = FUN_00463ff8(param_1,&local_1c,*(undefined1 *)(DAT_0066cb70 + 0x9b),DAT_0066cb70);
  if ((DAT_0066cb90 == '\0') && (DAT_0066cb94 != 0)) {
    iVar11 = DAT_0066cb84;
    pHVar4 = GetDesktopWindow();
    FUN_0046e604(DAT_0066cb94,pHVar4,DAT_0066cb80,iVar11);
  }
  cVar12 = DAT_0066cb90;
  local_18[0] = *(char *)(DAT_0066cb70 + 0x9b) != '\0';
  if (local_18[0]) {
    DAT_0066cb90 = '\x02';
  }
  else {
    DAT_0066cb90 = '\x01';
  }
  local_18[0] = local_18[0] && cVar12 != '\0';
  if (iVar3 != DAT_0066cb74[1]) {
    FUN_00464048(1);
    if (DAT_0066cb74 == (int *)0x0) {
      return;
    }
    DAT_0066cb74[1] = iVar3;
    DAT_0066cb74[2] = local_1c;
    piVar8 = DAT_0066cb74;
    DAT_0066cb74[3] = *param_1;
    piVar8[4] = param_1[1];
    FUN_00464048(0);
    if (DAT_0066cb74 == (int *)0x0) {
      return;
    }
  }
  piVar8 = DAT_0066cb74;
  DAT_0066cb74[3] = *param_1;
  piVar8[4] = param_1[1];
  if (DAT_0066cb74[1] != 0) {
    FUN_00465d4c(DAT_0066cb74[1],param_1,&local_14);
    piVar8 = DAT_0066cb74;
    DAT_0066cb74[5] = local_14;
    piVar8[6] = local_10;
  }
  iVar11 = param_1[1];
  uVar5 = FUN_00464048(CONCAT31((int3)((uint)iVar11 >> 8),2));
  cVar12 = (char)iVar11;
  uVar5 = (**(code **)(*DAT_0066cb74 + 4))(DAT_0066cb74,uVar5,*param_1);
  if (DAT_0066cb94 != 0) {
    if ((iVar3 == 0) || ((*(byte *)(iVar3 + 0x51) & 0x20) != 0)) {
      FUN_0046e5c0(DAT_0066cb94,uVar5);
      if (*(char *)(DAT_0066cb94 + 0x6a) == '\0') {
        iVar11 = param_1[1];
        pHVar4 = GetDesktopWindow();
        FUN_0046e604(DAT_0066cb94,pHVar4,*param_1,iVar11);
      }
      else {
        FUN_0046e6ec(DAT_0066cb94,*param_1,param_1[1]);
      }
    }
    else {
      FUN_0046e760(DAT_0066cb94);
      pHVar6 = (HCURSOR)FUN_004853a4(*(undefined4 *)PTR_DAT_0066b760,(int)(short)uVar5);
      SetCursor(pHVar6);
    }
  }
  pHVar6 = (HCURSOR)FUN_004853a4(*(undefined4 *)PTR_DAT_0066b760,(int)(short)uVar5);
  SetCursor(pHVar6);
  if (DAT_0066cb90 == '\x02') {
    if (iVar3 == 0) {
      iVar11 = param_1[1];
      FUN_00403c80(DAT_0066cb74[0xe],DAT_0066cb74,*param_1,iVar11);
    }
    else {
      iVar3 = FUN_00464084();
      DAT_0066cb74[0x16] = iVar3;
      if (iVar3 == 0) {
        iVar11 = 0x464362;
        uVar1 = FUN_00403c80(DAT_0066cb74[1],DAT_0066cb74 + 5);
        *(undefined1 *)(DAT_0066cb74 + 0x15) = uVar1;
      }
      else {
        FUN_00465d4c(iVar3,param_1,local_18);
        iVar11 = 0x464389;
        uVar1 = FUN_00403c80(iVar3,local_18);
        *(undefined1 *)(DAT_0066cb74 + 0x15) = uVar1;
      }
    }
    if ((DAT_0066cb74 != (int *)0x0) &&
       (cVar2 = FUN_00409658(DAT_0066cb74 + 0x11,DAT_0066cb74 + 0x17,0x10,iVar11), cVar2 == '\0')) {
      if (cVar12 != '\0') {
        (**(code **)(*DAT_0066cb74 + 0x34))();
      }
      (**(code **)(*DAT_0066cb74 + 0x30))();
      piVar9 = DAT_0066cb74 + (uint)bVar10 * -2 + 0x18;
      piVar8 = DAT_0066cb74 + (uint)bVar10 * -2 + 0x12;
      DAT_0066cb74[0x17] = DAT_0066cb74[0x11];
      *piVar9 = *piVar8;
      piVar9[(uint)bVar10 * -2 + 1] = piVar8[(uint)bVar10 * -2 + 1];
      (piVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (piVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    }
  }
  return;
}

