// Address: 0040b11c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b11c(byte param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  char cVar11;
  uint uVar12;
  undefined3 uVar13;
  uint extraout_ECX;
  short sVar14;
  int iVar15;
  uint uVar16;
  int unaff_EBP;
  ushort *puVar17;
  ushort *puVar18;
  code *pcVar19;
  float10 fVar20;
  float10 fVar21;
  uint uStack_8;
  
  bVar6 = param_1 & 0xdf;
  uVar13 = (undefined3)((uint)param_3 >> 8);
  uVar12 = CONCAT31(uVar13,param_1) & 0xffffffdf;
  uVar8 = 1;
  iVar15 = *(int *)(unaff_EBP + -0xc);
  if (*(int *)(unaff_EBP + 8) < iVar15) goto LAB_0040b189;
  *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
  puVar10 = (ulonglong *)(*(int *)(unaff_EBP + 0xc) + iVar15 * 8);
  puVar9 = *(ulonglong **)puVar10;
  cVar11 = (char)uVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((int)puVar10 + 4)) {
  case 0:
    puVar18 = (ushort *)(unaff_EBP + -0x86);
    uVar12 = *(uint *)(unaff_EBP + -0x20);
    if (0x10 < uVar12) {
      uVar12 = 0;
    }
    uVar16 = CONCAT31(uVar13,bVar6 + 0xbc);
    if ((((byte)(bVar6 + 0xbc) == '\0') || (uVar16 = 0x10, bVar6 == 0x58)) ||
       (uVar16 = 10, bVar6 == 0x55)) {
      puVar17 = puVar18;
      if ((char)uVar16 == '\0') {
        if ((int)puVar9 < 0) {
          FUN_00409d94(-(int)puVar9);
          *(undefined2 *)(unaff_EBP + -0x88) = 0x2d;
          return;
        }
        uVar16 = 10;
      }
      do {
        puVar10 = (ulonglong *)((uint)puVar9 / uVar16);
        sVar14 = (short)((uint)puVar9 % uVar16);
        uVar7 = sVar14 + 0x30;
        puVar17 = puVar17 + -1;
        if (0x39 < uVar7) {
          uVar7 = sVar14 + 0x37;
        }
        *puVar17 = uVar7;
        puVar9 = puVar10;
      } while (puVar10 != (ulonglong *)0x0);
      uVar16 = (uint)((int)puVar18 - (int)puVar17) >> 1;
      iVar15 = uVar12 - uVar16;
      if (uVar16 <= uVar12 && iVar15 != 0) {
        iVar3 = -iVar15;
        while (iVar15 = iVar15 + -1, iVar15 != 0) {
          (puVar17 + iVar3)[iVar15] = 0x30;
        }
        puVar17[iVar3] = 0x30;
      }
      return;
    }
    break;
  case 2:
    if (cVar11 != 'S') break;
    uVar12 = 1;
    goto LAB_0040b261;
  case 3:
    uVar2 = 0;
    uVar5 = 0;
    goto LAB_0040b2f7;
  case 4:
    if (cVar11 != 'S') break;
    uVar12 = (uint)(byte)*puVar9;
    puVar10 = (ulonglong *)((int)puVar9 + 1);
    goto LAB_0040b261;
  case 5:
    if (cVar11 == 'P') {
      FUN_00409d2c(puVar9,8,0x10);
      return;
    }
    break;
  case 6:
    pcVar19 = FUN_00405128;
    goto LAB_0040b274;
  case 9:
    if (cVar11 == 'S') {
      return;
    }
    break;
  case 10:
    if (cVar11 == 'S') {
      iVar15 = *(int *)(unaff_EBP + -0x20);
      if (iVar15 != 0) {
        do {
          if (iVar15 == 0) {
            return;
          }
          iVar15 = iVar15 + -1;
          uVar4 = *puVar9;
          puVar9 = (ulonglong *)((int)puVar9 + 2);
        } while ((ushort)uVar4 != 0);
      }
      return;
    }
    break;
  case 0xb:
    pcVar19 = FUN_004051d4;
LAB_0040b274:
    if (cVar11 != 'S') break;
    goto LAB_0040b27d;
  case 0xc:
    uVar2 = 1;
    uVar5 = 1;
LAB_0040b2f7:
    if ((cVar11 == 'G') || (uVar5 = uVar2, cVar11 == 'E')) {
      uVar2 = uVar5;
      uStack_8 = *(uint *)(unaff_EBP + -0x20);
      uVar12 = 3;
      if (0x12 < uStack_8) {
        uStack_8 = 0xf;
      }
    }
    else {
      if (((cVar11 != 'F') && (cVar11 != 'N')) && (cVar11 != 'M')) break;
      uStack_8 = 0x12;
      uVar12 = *(uint *)(unaff_EBP + -0x20);
      if ((0x12 < uVar12) && (uVar12 = 2, cVar11 == 'M')) {
        uVar12 = (uint)DAT_0066c68c;
      }
    }
    uVar12 = FUN_0040b4b8(unaff_EBP + -0xa6,puVar9,uVar2,uVar12);
    puVar10 = (ulonglong *)(unaff_EBP + -0xa6);
LAB_0040b261:
    pcVar19 = FUN_00405058;
    puVar9 = puVar10;
LAB_0040b27d:
    uStack_8 = 0x40b28b;
    (*(pcVar19 + *(int *)(unaff_EBP + -4)))(unaff_EBP + -0x10,puVar9,uVar12);
    puVar9 = *(ulonglong **)(unaff_EBP + -0x10);
LAB_0040b29c:
    if (puVar9 == (ulonglong *)0x0) {
      return;
    }
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)((int)puVar9 + -4) >> 1) {
      return;
    }
    return;
  case 0xd:
    if (cVar11 != 'S') break;
    if ((ushort)*puVar9 < 2) {
      return;
    }
    FUN_0040afb8(unaff_EBP + -0x10,puVar9);
    puVar9 = *(ulonglong **)(unaff_EBP + -0x10);
    goto LAB_0040b29c;
  case 0xf:
    if (cVar11 == 'S') goto LAB_0040b29c;
    break;
  case 0x10:
    goto switchD_0040b13c_caseD_10;
  }
  do {
    uVar8 = 0;
LAB_0040b189:
    uVar8 = FUN_0040b374(uVar8);
    puVar9 = (ulonglong *)
             FUN_0040af38(uVar8,*(int *)(unaff_EBP + -0x14),
                          (uint)(*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x14)) >> 1);
    uVar12 = extraout_ECX;
switchD_0040b13c_caseD_10:
    uVar16 = *(uint *)(unaff_EBP + -0x20);
    if (0x20 < uVar16) {
      uVar16 = 0;
    }
    cVar11 = (char)uVar12;
    sVar14 = (short)CONCAT31((int3)(uVar12 >> 8),cVar11 + -0x44);
  } while ((((char)(cVar11 + -0x44) != '\0') && (sVar14 = 0x10, cVar11 != 'X')) &&
          (sVar14 = 10, cVar11 != 'U'));
  if (((char)sVar14 == '\0') && (sVar14 = 10, (*puVar9 & 0x8000000000000000) != 0)) {
    uStack_8 = -(int)*puVar9;
    FUN_00409e30(&uStack_8);
    *(undefined2 *)(unaff_EBP + -0x68) = 0x2d;
    return;
  }
  fVar1 = (float10)1;
  if ((*puVar9 & 0x8000000000000000) == 0) {
    fVar21 = (float10)(longlong)*puVar9;
  }
  else {
    fVar21 = (float10)0x7fffffffffffffff + fVar1 + (float10)(*puVar9 & 0x7fffffffffffffff);
  }
  fVar20 = (float10)sVar14;
  puVar18 = (ushort *)(unaff_EBP + -0x66);
  do {
    puVar18 = puVar18 + -1;
    *puVar18 = (short)ROUND(fVar21 - (float10)(unkint10)(fVar21 / fVar20) * fVar20);
    fVar21 = fVar21 / fVar20;
    uVar7 = *puVar18 + 0x30;
    if (0x39 < uVar7) {
      uVar7 = *puVar18 + 0x37;
    }
    *puVar18 = uVar7;
  } while (fVar1 <= fVar21);
  ffree(fVar1);
  ffree(fVar21);
  ffree(fVar20);
  ffree(fVar21);
  uVar12 = (uint)((unaff_EBP + -0x66) - (int)puVar18) >> 1;
  if ((-1 < (int)uVar16) && (iVar15 = uVar16 - uVar12, uVar12 <= uVar16 && iVar15 != 0)) {
    iVar3 = -iVar15;
    while (iVar15 = iVar15 + -1, iVar15 != 0) {
      (puVar18 + iVar3)[iVar15] = 0x30;
    }
    puVar18[iVar3] = 0x30;
  }
  return;
}

