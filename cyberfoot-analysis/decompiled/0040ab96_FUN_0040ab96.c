// Address: 0040ab96
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

ulonglong * FUN_0040ab96(byte param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  int iVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  byte bVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  char cVar11;
  short sVar12;
  uint uVar13;
  undefined3 uVar14;
  uint extraout_ECX;
  int iVar15;
  uint uVar16;
  int unaff_EBP;
  byte *pbVar17;
  byte *pbVar18;
  code *pcVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  uint uStack_8;
  
  uVar14 = (undefined3)((uint)param_3 >> 8);
  uVar13 = CONCAT31(uVar14,param_1) & 0xffffffdf;
  uVar9 = 1;
  iVar15 = *(int *)(unaff_EBP + -0xc);
  if (*(int *)(unaff_EBP + 8) < iVar15) goto LAB_0040ac03;
  *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + iVar15 * 8);
  puVar10 = (ulonglong *)*puVar1;
  cVar11 = (char)uVar13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(puVar1 + 1)) {
  case 0:
    pbVar18 = (byte *)(unaff_EBP + -0x59);
    uVar13 = *(uint *)(unaff_EBP + -0x24);
    if (0x10 < uVar13) {
      uVar13 = 0;
    }
    uVar16 = CONCAT31(uVar14,cVar11 + -0x44);
    if ((((char)(cVar11 + -0x44) == '\0') || (uVar16 = 0x10, (param_1 & 0xdf) == 0x58)) ||
       (uVar16 = 10, (param_1 & 0xdf) == 0x55)) {
      pbVar17 = pbVar18;
      if ((char)uVar16 == '\0') {
        if ((int)puVar10 < 0) {
          FUN_00409d42(-(int)puVar10);
          *(undefined1 *)(unaff_EBP + -0x5a) = 0x2d;
          return (ulonglong *)0x2d;
        }
        uVar16 = 10;
      }
      do {
        puVar8 = (ulonglong *)((uint)puVar10 / uVar16);
        pbVar17 = pbVar17 + -1;
        cVar11 = (char)((uint)puVar10 % uVar16);
        bVar7 = cVar11 + 0x30;
        if (0x39 < bVar7) {
          bVar7 = cVar11 + 0x37;
        }
        *pbVar17 = bVar7;
        puVar10 = puVar8;
      } while (puVar8 != (ulonglong *)0x0);
      iVar15 = uVar13 - ((int)pbVar18 - (int)pbVar17);
      puVar10 = (ulonglong *)0x0;
      if ((uint)((int)pbVar18 - (int)pbVar17) <= uVar13 && iVar15 != 0) {
        puVar10 = (ulonglong *)0x30;
        iVar3 = -iVar15;
        while (iVar15 = iVar15 + -1, iVar15 != 0) {
          (pbVar17 + iVar3)[iVar15] = 0x30;
        }
        pbVar17[iVar3] = 0x30;
      }
      return puVar10;
    }
    break;
  case 2:
    if (cVar11 == 'S') {
      return puVar10;
    }
    break;
  case 3:
    uVar4 = 0;
    uVar6 = 0;
    goto LAB_0040ad50;
  case 4:
    if (cVar11 != 'S') break;
    uVar5 = *puVar10;
    puVar10 = (ulonglong *)(uint)(byte)uVar5;
    uVar13 = (uint)(byte)uVar5;
    goto LAB_0040ad05;
  case 5:
    if (cVar11 == 'P') {
      puVar10 = (ulonglong *)FUN_00409d2c(puVar10,8,0x10);
      return puVar10;
    }
    break;
  case 6:
    if (cVar11 == 'S') {
      iVar15 = *(int *)(unaff_EBP + -0x24);
      if (iVar15 != 0) {
        do {
          if (iVar15 == 0) {
            return (ulonglong *)0x0;
          }
          iVar15 = iVar15 + -1;
          uVar5 = *puVar10;
          puVar10 = (ulonglong *)((int)puVar10 + 1);
        } while ((byte)uVar5 != 0);
      }
      return (ulonglong *)0x0;
    }
    break;
  case 10:
    pcVar19 = FUN_00404b0c;
    goto LAB_0040acd4;
  case 0xb:
    puVar8 = puVar10;
    if (cVar11 != 'S') break;
    goto LAB_0040acfe;
  case 0xc:
    uVar4 = 1;
    uVar6 = 1;
LAB_0040ad50:
    if ((cVar11 == 'G') || (uVar6 = uVar4, cVar11 == 'E')) {
      uVar4 = uVar6;
      uStack_8 = *(uint *)(unaff_EBP + -0x24);
      uVar13 = 3;
      if (0x12 < uStack_8) {
        uStack_8 = 0xf;
      }
    }
    else {
      if (((cVar11 != 'F') && (cVar11 != 'N')) && (cVar11 != 'M')) break;
      uStack_8 = 0x12;
      uVar13 = *(uint *)(unaff_EBP + -0x24);
      if ((0x12 < uVar13) && (uVar13 = 2, cVar11 == 'M')) {
        uVar13 = (uint)DAT_0066c68c;
      }
    }
    puVar10 = (ulonglong *)FUN_0040b4b8(unaff_EBP + -0x69,puVar10,uVar4,uVar13);
    return puVar10;
  case 0xd:
    if (cVar11 != 'S') break;
    if ((ushort)*puVar10 < 2) {
      return puVar10;
    }
    puVar10 = (ulonglong *)FUN_0040aa3c(unaff_EBP + -0x10,puVar10);
    puVar8 = *(ulonglong **)(unaff_EBP + -0x10);
    goto LAB_0040acfe;
  case 0xf:
    pcVar19 = FUN_00404b6c;
LAB_0040acd4:
    if (cVar11 != 'S') break;
    uStack_8 = 0x40aceb;
    (*(pcVar19 + *(int *)(unaff_EBP + -4)))(unaff_EBP + -0x14,puVar10);
    puVar10 = *(ulonglong **)(unaff_EBP + -0x14);
    puVar8 = puVar10;
LAB_0040acfe:
    if (puVar8 == (ulonglong *)0x0) {
      return puVar10;
    }
    uVar13 = *(uint *)((int)puVar8 + -4);
LAB_0040ad05:
    if (*(uint *)(unaff_EBP + -0x24) < uVar13) {
      return puVar10;
    }
    return puVar10;
  case 0x10:
    goto switchD_0040abb6_caseD_10;
  }
  do {
    uVar9 = 0;
LAB_0040ac03:
    uVar9 = FUN_0040adc3(uVar9);
    puVar10 = (ulonglong *)
              FUN_0040a9e4(uVar9,*(int *)(unaff_EBP + -0x18),
                           *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x18));
    uVar13 = extraout_ECX;
switchD_0040abb6_caseD_10:
    uVar16 = *(uint *)(unaff_EBP + -0x24);
    if (0x20 < uVar16) {
      uVar16 = 0;
    }
    cVar11 = (char)uVar13;
    sVar12 = (short)CONCAT31((int3)(uVar13 >> 8),cVar11 + -0x44);
  } while ((((char)(cVar11 + -0x44) != '\0') && (sVar12 = 0x10, cVar11 != 'X')) &&
          (sVar12 = 10, cVar11 != 'U'));
  if (((char)sVar12 == '\0') && (sVar12 = 10, (*puVar10 & 0x8000000000000000) != 0)) {
    uStack_8 = -(int)*puVar10;
    puVar10 = (ulonglong *)FUN_00409f10(&uStack_8);
    *(undefined1 *)(unaff_EBP + -0x4a) = 0x2d;
    return puVar10;
  }
  fVar2 = (float10)1;
  if ((*puVar10 & 0x8000000000000000) == 0) {
    fVar22 = (float10)(longlong)*puVar10;
  }
  else {
    fVar22 = (float10)0x7fffffffffffffff + fVar2 + (float10)(*puVar10 & 0x7fffffffffffffff);
  }
  fVar20 = (float10)sVar12;
  pbVar18 = (byte *)(unaff_EBP + -0x49);
  do {
    pbVar18 = pbVar18 + -1;
    fVar21 = fVar22 - (float10)(unkint10)(fVar22 / fVar20) * fVar20;
    fVar22 = fVar22 / fVar20;
    uStack_8._0_1_ = (char)(short)ROUND(fVar21);
    bVar7 = (char)uStack_8 + 0x30;
    if (0x39 < bVar7) {
      bVar7 = (char)uStack_8 + 0x37;
    }
    *pbVar18 = bVar7;
    puVar10 = (ulonglong *)0x0;
  } while (fVar2 <= fVar22);
  ffree(fVar2);
  ffree(fVar22);
  ffree(fVar20);
  ffree(fVar22);
  uVar13 = (unaff_EBP + -0x49) - (int)pbVar18;
  iVar15 = uVar16 - uVar13;
  if (uVar13 <= uVar16 && iVar15 != 0) {
    iVar3 = -iVar15;
    puVar10 = (ulonglong *)0x30;
    while (iVar15 = iVar15 + -1, iVar15 != 0) {
      (pbVar18 + iVar3)[iVar15] = 0x30;
    }
    pbVar18[iVar3] = 0x30;
  }
  return puVar10;
}

