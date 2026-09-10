// Address: 004773c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004773c0(void)

{
  short sVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  HBITMAP pHVar9;
  LPRECT ptVar10;
  HDC pHVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *in_FS_OFFSET;
  bool bVar17;
  byte bVar18;
  int in_stack_00000004;
  undefined4 in_stack_ffffffbc;
  undefined4 uVar19;
  UINT UVar20;
  undefined1 *puVar21;
  UINT UVar22;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  bVar18 = 0;
  puStack_18 = &stack0xfffffffc;
  puVar21 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00477ca8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar3 = &stack0xfffffffc;
  if (*(char *)(in_stack_00000004 + -0x21) != '\0') {
    if (((*(byte *)(in_stack_00000004 + 0xc) & 1) == 0) &&
       ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) == 0)) {
      puVar3 = &stack0xfffffffc;
      if (*(char *)(in_stack_00000004 + 8) != '\0') {
        FUN_0042ab6c(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0xff00001e);
        puVar3 = puStack_18;
      }
    }
    else {
      puStack_18 = &stack0xfffffffc;
      FUN_0042ab6c(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0xff00001d);
      FUN_0042a3a0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0xc),0xff00000e);
      puVar3 = puStack_18;
    }
  }
  puStack_18 = puVar3;
  if ((*(char *)(in_stack_00000004 + -0x29) == '\0') ||
     (*(char *)(in_stack_00000004 + -0x21) != '\0')) {
    FUN_0042af8c(*(undefined4 *)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x20);
  }
  if (*(int *)(in_stack_00000004 + -0x30) == 0) {
    cVar4 = FUN_00403c10(*(undefined4 *)(in_stack_00000004 + -0x30),PTR_PTR_00475da8);
    if (cVar4 == '\0') {
      *(undefined1 *)(in_stack_00000004 + -0x31) = 0;
    }
    else {
      *(undefined1 *)(in_stack_00000004 + -0x31) =
           *(undefined1 *)(*(int *)(in_stack_00000004 + -0x30) + 0x60);
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x31) = 0;
  }
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x20) + 1;
  iVar6 = *(int *)(in_stack_00000004 + -0x1c) + 1;
  bVar17 = iVar6 == 0;
  *(int *)(in_stack_00000004 + -0xc) = iVar6;
  FUN_00404cf0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x38) + 0x30),&DAT_00477cc0);
  if (bVar17) {
    FUN_0042af8c(*(undefined4 *)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x20);
    *(undefined4 *)(in_stack_00000004 + -0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + -8) = 0xfffffffc;
    *(undefined1 *)(in_stack_00000004 + -0x39) = 0;
    goto LAB_0047798f;
  }
  if (*(int *)(in_stack_00000004 + -0x40) == 0) {
LAB_00477545:
    uVar5 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(in_stack_00000004 + -0x38) + 0x40);
    if (iVar6 < 0) {
LAB_0047751e:
      if (*(char *)(*(int *)(in_stack_00000004 + -0x38) + 0x38) == '\0') goto LAB_00477545;
      piVar2 = *(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c);
      if (piVar2 != (int *)0x0) {
        cVar4 = (**(code **)(*piVar2 + 0x1c))();
        if (cVar4 == '\0') goto LAB_00477545;
      }
    }
    else {
      iVar7 = FUN_00473f5c(*(undefined4 *)(in_stack_00000004 + -0x40));
      if (iVar7 <= iVar6) goto LAB_0047751e;
    }
    uVar5 = 1;
  }
  *(undefined1 *)(in_stack_00000004 + -0x41) = uVar5;
  if (*(char *)(in_stack_00000004 + -0x41) == '\0') {
    piVar2 = *(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c);
    if (piVar2 != (int *)0x0) {
      cVar4 = (**(code **)(*piVar2 + 0x1c))();
      if (cVar4 == '\0') goto LAB_0047757d;
    }
    if ((*(int *)(in_stack_00000004 + -0x40) == 0) || (*(char *)(in_stack_00000004 + 8) != '\0')) {
      *(undefined4 *)(in_stack_00000004 + -8) = *(undefined4 *)(in_stack_00000004 + -0x10);
      *(undefined4 *)(in_stack_00000004 + -4) = *(undefined4 *)(in_stack_00000004 + -0xc);
    }
    else {
      *(int *)(in_stack_00000004 + -8) =
           *(int *)(in_stack_00000004 + -0x10) +
           *(int *)(*(int *)(in_stack_00000004 + -0x40) + 0x34);
      *(int *)(in_stack_00000004 + -4) =
           *(int *)(in_stack_00000004 + -0xc) + *(int *)(*(int *)(in_stack_00000004 + -0x40) + 0x30)
      ;
    }
    *(undefined1 *)(in_stack_00000004 + -0x39) = 0;
  }
  else {
LAB_0047757d:
    *(undefined1 *)(in_stack_00000004 + -0x39) = 1;
    if (*(char *)(in_stack_00000004 + -0x41) == '\0') {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -0x10) + 0x10;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -0xc) + 0x10;
    }
    else {
      *(int *)(in_stack_00000004 + -8) =
           *(int *)(in_stack_00000004 + -0x10) +
           *(int *)(*(int *)(in_stack_00000004 + -0x40) + 0x34);
      *(int *)(in_stack_00000004 + -4) =
           *(int *)(in_stack_00000004 + -0xc) + *(int *)(*(int *)(in_stack_00000004 + -0x40) + 0x30)
      ;
    }
    if ((*(char *)(*(int *)(in_stack_00000004 + -0x38) + 0x38) != '\0') &&
       (*(char *)(in_stack_00000004 + -0x21) == '\0')) {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 1;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 1;
      uVar8 = FUN_0042ab64(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14));
      *(undefined4 *)(in_stack_00000004 + -0x48) = uVar8;
      if ((*(byte *)(in_stack_00000004 + 0xc) & 1) == 0) {
        uVar8 = FUN_0042ab64(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14));
        *(undefined4 *)(in_stack_00000004 + -0x48) = uVar8;
        uVar8 = FUN_0043212c(0xff00000f,0xff000014);
        FUN_0042ab40(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14),uVar8);
        FUN_0042af8c(*(undefined4 *)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10);
      }
      else {
        FUN_0042ab6c(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0xff00000f);
        FUN_0042af8c(*(undefined4 *)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10);
      }
      FUN_0042ab6c(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14),
                   *(undefined4 *)(in_stack_00000004 + -0x48));
      *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + 1;
      *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + 1;
    }
    if (*(char *)(in_stack_00000004 + -0x41) == '\0') {
      puVar16 = (undefined4 *)(in_stack_00000004 + -0x58 + (uint)bVar18 * -8);
      puVar14 = (undefined4 *)(in_stack_00000004 + -0xc + (uint)bVar18 * -8);
      *(undefined4 *)(in_stack_00000004 + -0x5c) = *(undefined4 *)(in_stack_00000004 + -0x10);
      puVar15 = puVar16 + (uint)bVar18 * -2 + 1;
      puVar13 = puVar14 + (uint)bVar18 * -2 + 1;
      *puVar16 = *puVar14;
      *puVar15 = *puVar13;
      puVar15[(uint)bVar18 * -2 + 1] = puVar13[(uint)bVar18 * -2 + 1];
      iVar6 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c) + 0x2c))();
      if (iVar6 < *(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) {
        iVar6 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c) + 0x2c))();
        uVar12 = (*(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) - iVar6;
        iVar6 = (int)uVar12 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar12 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0x10) = iVar6 + *(int *)(in_stack_00000004 + -0x10) + 1;
        iVar6 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c) + 0x2c))();
        *(int *)(in_stack_00000004 + -8) = iVar6 + *(int *)(in_stack_00000004 + -0x10);
      }
      iVar6 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c) + 0x20))();
      if (iVar6 < *(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) {
        iVar6 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c) + 0x20))();
        uVar12 = (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) - iVar6;
        iVar6 = (int)uVar12 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar12 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0xc) = iVar6 + *(int *)(in_stack_00000004 + -0xc) + 1;
        iVar6 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x38) + 0x4c) + 0x20))();
        *(int *)(in_stack_00000004 + -4) = iVar6 + *(int *)(in_stack_00000004 + -0xc);
      }
      FUN_0042b20c(*(undefined4 *)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10,
                   *(undefined4 *)(*(int *)(in_stack_00000004 + -0x38) + 0x4c));
      puVar16 = (undefined4 *)(in_stack_00000004 + -0xc + (uint)bVar18 * -8);
      puVar14 = (undefined4 *)(in_stack_00000004 + -0x58 + (uint)bVar18 * -8);
      *(undefined4 *)(in_stack_00000004 + -0x10) = *(undefined4 *)(in_stack_00000004 + -0x5c);
      puVar15 = puVar16 + (uint)bVar18 * -2 + 1;
      puVar13 = puVar14 + (uint)bVar18 * -2 + 1;
      *puVar16 = *puVar14;
      *puVar15 = *puVar13;
      puVar15[(uint)bVar18 * -2 + 1] = puVar13[(uint)bVar18 * -2 + 1];
    }
    else {
      iVar6 = *(int *)(*(int *)(in_stack_00000004 + -0x38) + 0x40);
      if (iVar6 < 0) {
LAB_0047770b:
        uVar8 = FUN_0042fcb8(PTR_PTR_00429378,1);
        *(undefined4 *)(in_stack_00000004 + -0x4c) = uVar8;
        uVar8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffd4;
        (**(code **)(**(int **)(in_stack_00000004 + -0x4c) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x4c),1);
        pHVar9 = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7ff8);
        FUN_00430eec(*(undefined4 *)(in_stack_00000004 + -0x4c),pHVar9);
        *(undefined4 *)(in_stack_00000004 + -0x48) =
             *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0xc) + 0x18);
        FUN_0042a3a0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0xc),0xff000012);
        uVar19 = *(undefined4 *)(in_stack_00000004 + -0x4c);
        iVar6 = (**(code **)(**(int **)(in_stack_00000004 + -0x4c) + 0x20))();
        uVar12 = (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc)) - iVar6;
        iVar6 = (int)uVar12 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar12 & 1) != 0);
        }
        iVar7 = iVar6 + *(int *)(in_stack_00000004 + -0xc) + 1;
        iVar6 = (**(code **)(**(int **)(in_stack_00000004 + -0x4c) + 0x2c))();
        uVar12 = (*(int *)(in_stack_00000004 + -8) - *(int *)(in_stack_00000004 + -0x10)) - iVar6;
        iVar6 = (int)uVar12 >> 1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + (uint)((uVar12 & 1) != 0);
        }
        FUN_0042ae64(*(undefined4 *)(in_stack_00000004 + -0x28),
                     iVar6 + *(int *)(in_stack_00000004 + -0x10) + 1,iVar7,uVar19);
        FUN_0042a3a0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0xc),
                     *(undefined4 *)(in_stack_00000004 + -0x48));
        *in_FS_OFFSET = uVar8;
        FUN_00403a84(*(undefined4 *)(in_stack_00000004 + -0x4c),uVar8,puVar21);
        return;
      }
      iVar7 = FUN_00473f5c(*(undefined4 *)(in_stack_00000004 + -0x40));
      if (iVar7 <= iVar6) goto LAB_0047770b;
      FUN_00474474(*(undefined4 *)(in_stack_00000004 + -0x40),
                   *(undefined4 *)(in_stack_00000004 + -0x28),
                   *(undefined4 *)(in_stack_00000004 + -0x10));
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -0x38) + 0x38) != '\0') {
      *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
      *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + -1;
    }
  }
LAB_0047798f:
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + -1;
  *(int *)(in_stack_00000004 + -0xc) = *(int *)(in_stack_00000004 + -0xc) + -1;
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + 2;
  *(int *)(in_stack_00000004 + -4) = *(int *)(in_stack_00000004 + -4) + 2;
  if (((*(char *)(*(int *)(in_stack_00000004 + -0x38) + 0x38) != '\0') ||
      ((*(char *)(in_stack_00000004 + -0x29) != '\0' &&
       (*(char *)(in_stack_00000004 + -0x39) != '\0')))) &&
     (*(char *)(in_stack_00000004 + -0x21) == '\0')) {
    UVar22 = 0xf;
    UVar20 = *(UINT *)(&DAT_006631c0 +
                      (uint)*(byte *)(*(int *)(in_stack_00000004 + -0x38) + 0x38) * 4);
    ptVar10 = (LPRECT)(in_stack_00000004 + -0x10);
    pHVar11 = (HDC)FUN_0042b5a8(*(undefined4 *)(in_stack_00000004 + -0x28));
    DrawEdge(pHVar11,ptVar10,UVar20,UVar22);
  }
  if (*(char *)(in_stack_00000004 + -0x29) != '\0') {
    if (*(char *)(in_stack_00000004 + -0x39) != '\0') {
      *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -8) + 1;
    }
    if ((*(char *)(in_stack_00000004 + -0x5d) == '\0') || (*(char *)(in_stack_00000004 + 8) == '\0')
       ) {
      FUN_0042ab6c(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x14),0xff00000d);
    }
    FUN_0042af8c(*(undefined4 *)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x20);
  }
  if (((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x5d) != '\0'))
     && (*(char *)(in_stack_00000004 + -0x21) == '\0')) {
    if (*(char *)(in_stack_00000004 + -0x29) == '\0') {
      if ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) != 0) {
        UVar22 = 0xf;
        UVar20 = 4;
        ptVar10 = (LPRECT)(in_stack_00000004 + -0x20);
        pHVar11 = (HDC)FUN_0042b5a8(*(undefined4 *)(in_stack_00000004 + -0x28));
        DrawEdge(pHVar11,ptVar10,UVar20,UVar22);
      }
    }
    else {
      UVar22 = 0xf;
      UVar20 = 2;
      ptVar10 = (LPRECT)(in_stack_00000004 + -0x20);
      pHVar11 = (HDC)FUN_0042b5a8(*(undefined4 *)(in_stack_00000004 + -0x28));
      DrawEdge(pHVar11,ptVar10,UVar20,UVar22);
    }
    if (*(char *)(in_stack_00000004 + -0x29) == '\0') {
      OffsetRect((LPRECT)(in_stack_00000004 + -0x20),0,-1);
    }
  }
  if ((*(char *)(in_stack_00000004 + -0x29) == '\0') ||
     (*(char *)(in_stack_00000004 + -0x39) == '\0')) {
    *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -8) + 1;
  }
  *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -0x20) + 2;
  *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x18) + -1;
  *(uint *)(in_stack_00000004 + -100) =
       (uint)(*(ushort *)(&DAT_006631b8 + (uint)*(byte *)(in_stack_00000004 + -0x31) * 2) | 0x60);
  if ((*(char *)(in_stack_00000004 + -0x65) != '\0') &&
     ((*(byte *)(in_stack_00000004 + 0xd) & 1) != 0)) {
    *(uint *)(in_stack_00000004 + -100) = *(uint *)(in_stack_00000004 + -100) | 0x100000;
  }
  puVar16 = (undefined4 *)(in_stack_00000004 + -0x58 + (uint)bVar18 * -8);
  puVar14 = (undefined4 *)(in_stack_00000004 + -0x1c + (uint)bVar18 * -8);
  *(undefined4 *)(in_stack_00000004 + -0x5c) = *(undefined4 *)(in_stack_00000004 + -0x20);
  puVar15 = puVar16 + (uint)bVar18 * -2 + 1;
  puVar13 = puVar14 + (uint)bVar18 * -2 + 1;
  *puVar16 = *puVar14;
  *puVar15 = *puVar13;
  puVar15[(uint)bVar18 * -2 + 1] = puVar13[(uint)bVar18 * -2 + 1];
  if ((*(byte *)(in_stack_00000004 + 0xc) & 0x20) != 0) {
    FUN_0042a66c(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0xc),DAT_00477cc4);
  }
  FUN_00477170(*(undefined4 *)(in_stack_00000004 + -0x38),*(undefined4 *)(in_stack_00000004 + -0x28)
               ,*(undefined4 *)(*(int *)(in_stack_00000004 + -0x38) + 0x30));
  uVar12 = (*(int *)(in_stack_00000004 + -0x50) - *(int *)(in_stack_00000004 + -0x58)) -
           (*(int *)(in_stack_00000004 + -0x14) - *(int *)(in_stack_00000004 + -0x1c));
  iVar6 = (int)uVar12 >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((uVar12 & 1) != 0);
  }
  OffsetRect((LPRECT)(in_stack_00000004 + -0x20),0,iVar6);
  if ((((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x29) != '\0')
       ) && (*(char *)(in_stack_00000004 + -0x5d) != '\0')) &&
     (*(char *)(in_stack_00000004 + -0x21) == '\0')) {
    OffsetRect((LPRECT)(in_stack_00000004 + -0x20),1,0);
  }
  iVar6 = 0x477c2e;
  FUN_00477170(*(undefined4 *)(in_stack_00000004 + -0x38),*(undefined4 *)(in_stack_00000004 + -0x28)
               ,*(undefined4 *)(*(int *)(in_stack_00000004 + -0x38) + 0x30),
               *(undefined4 *)(in_stack_00000004 + -100),*(undefined1 *)(in_stack_00000004 + -0x29),
               in_stack_00000004 + -0x20);
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -0x38) + 0x60);
  if ((sVar1 != 0) && (*(char *)(in_stack_00000004 + 8) == '\0')) {
    *(undefined4 *)(in_stack_00000004 + -0x20) = *(undefined4 *)(in_stack_00000004 + -0x18);
    *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x54) + -10;
    iVar6 = in_stack_00000004 + -0x20;
    uVar12 = (uint)*(byte *)(in_stack_00000004 + -0x29);
    in_stack_ffffffbc = 2;
    FUN_00476234(sVar1,&local_8);
    FUN_00477170(*(undefined4 *)(in_stack_00000004 + -0x38),
                 *(undefined4 *)(in_stack_00000004 + -0x28),local_8,in_stack_ffffffbc,uVar12);
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  FUN_004048d4(&local_8,in_stack_ffffffbc,iVar6,&LAB_00477caf);
  return;
}

