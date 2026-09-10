// Address: 00628778
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628778(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  char *local_14;
  
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),10);
  FUN_006278c8(param_1);
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),0x28);
  FUN_00625d04();
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x4c) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x50) = 1;
  cVar2 = FUN_006500c8();
  if (cVar2 == '\0') {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x110) = 1;
  }
  else {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x110) = 0;
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x114) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x118) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x188) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x184) = 1;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x10) = *(undefined4 *)(PTR_DAT_0066ac78 + 8);
  *(undefined4 *)(PTR_DAT_0066ac78 + 4) = 0xf;
  if (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x40) = 0;
  }
  FUN_004060a8(PTR_DAT_0066ae84,PTR_DAT_00488b40,1,0);
  FUN_004060a8(PTR_DAT_0066b154,PTR_DAT_00488c80,1,0);
  if (PTR_DAT_0066ac78[0x170] == '\0') {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x88) = 1;
  }
  else {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0x88) = 3;
  }
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),0x3c);
  FUN_004060a8(PTR_DAT_0066b238,PTR_DAT_00488c00,1,0);
  FUN_004060a8(&DAT_006d493c,PTR_DAT_00624f70,1,0);
  FUN_004060a8(&DAT_006d4940,PTR_DAT_00624f90,1,0);
  FUN_004060a8(&DAT_006d4944,PTR_DAT_00624fb0,1,0);
  FUN_004060a8(PTR_DAT_0066b4e0,PTR_DAT_00488b80,1,0);
  *(undefined4 *)PTR_DAT_0066adf4 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 4) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 8) = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066adf4 + 0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20) = 0xffffffff;
  FUN_00656abc();
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),0x46);
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar3 + -1) {
    iVar7 = 0;
    iVar8 = iVar3;
    do {
      FUN_0065a2bc(1,iVar7);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    iVar8 = 0;
    pcVar5 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if (*pcVar5 != '\0') {
        FUN_0065a2bc(3,iVar8);
      }
      iVar8 = iVar8 + 1;
      pcVar5 = pcVar5 + 0x568;
    } while (iVar8 != 0x1b);
  }
  if ((PTR_DAT_0066ac78[0x10e] != '\0') && (-1 < iVar3 + -1)) {
    iVar8 = 0;
    do {
      FUN_0065a2bc(2,iVar8);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((PTR_DAT_0066ac78[0x171] != '\0') && (PTR_DAT_0066ac78[0x75d] != '\0')) {
    FUN_0065a2bc(4,0xffffffff);
  }
  iVar8 = 1;
  FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,1);
  **(undefined4 **)PTR_DAT_0066b6ac = 0;
  *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 8) = 0xffffffff;
  *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4) = 0xffffffff;
  iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar7 = 0;
    do {
      local_18 = *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar7 * 0x294);
      if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar7 * 0x294) == 0x1d) &&
         (PTR_DAT_0066ac78[0x75c] != '\0')) {
        local_18 = 4;
      }
      if (0 < local_18) {
        iVar6 = 1;
        do {
          iVar8 = iVar8 + 1;
          FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
          *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 1;
          *(int *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = iVar6;
          *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) =
               *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar7 * 0x294);
          iVar6 = iVar6 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (PTR_DAT_0066ac78[0x10e] != '\0') {
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0);
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      iVar7 = 0;
      do {
        iVar8 = iVar8 + 1;
        FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
        *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 2;
        *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = 0xffffffff;
        *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) =
             *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar7 * 0x294);
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (PTR_DAT_0066ac78[0x170] != '\0') {
    iVar3 = 0;
    local_14 = PTR_DAT_0066ae98 + 0x52d;
    do {
      if ((*local_14 != '\0') && (iVar7 = *(int *)(local_14 + -0x1d), 0 < iVar7)) {
        iVar6 = 1;
        do {
          iVar8 = iVar8 + 1;
          FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
          *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 3;
          *(int *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = iVar6;
          *(int *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = iVar3;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x568;
    } while (iVar3 != 0x1b);
  }
  if (PTR_DAT_0066ac78[0x171] != '\0') {
    iVar3 = 0;
    do {
      iVar8 = iVar8 + 1;
      FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 4;
      *(int *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = iVar3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
  }
  if (PTR_DAT_0066ac78[0x171] != '\0') {
    iVar8 = iVar8 + 1;
    FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 5;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
  }
  if (PTR_DAT_0066ac78[0x172] != '\0') {
    iVar3 = 0;
    do {
      iVar8 = iVar8 + 1;
      FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 6;
      *(int *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = iVar3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 2);
  }
  if ((PTR_DAT_0066ac78[0x171] != '\0') && (PTR_DAT_0066ac78[0x172] != '\0')) {
    iVar3 = 0;
    do {
      iVar8 = iVar8 + 1;
      FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
      *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 10;
      *(int *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = iVar3;
      *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 2);
  }
  if (PTR_DAT_0066ac78[0x17f] != '\0') {
    iVar8 = iVar8 + 1;
    FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 7;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
  }
  if (PTR_DAT_0066ac78[0x181] != '\0') {
    iVar8 = iVar8 + 1;
    FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 8;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
  }
  if (PTR_DAT_0066ac78[0x180] != '\0') {
    iVar8 = iVar8 + 1;
    FUN_004060a8(PTR_DAT_0066b6ac,PTR_DAT_00488f60,1,iVar8);
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -0xc + iVar8 * 0xc) = 9;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -4 + iVar8 * 0xc) = 0xffffffff;
    *(undefined4 *)(*(int *)PTR_DAT_0066b6ac + -8 + iVar8 * 0xc) = 0xffffffff;
  }
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),0x50);
  if (PTR_DAT_0066ac78[0x10e] != '\0') {
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0);
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      iVar8 = 0;
      do {
        if (((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar8 * 0x294) == 0x1d) &&
            (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2)) &&
           (0x50 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x148 + iVar8 * 0x294))) {
          FUN_006341d8(iVar8);
        }
        else {
          FUN_00633910(iVar8);
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c) = 1;
  FUN_00656a18();
  *(undefined4 *)PTR_DAT_0066b4f8 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x88) =
       *(undefined4 *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -8);
  iVar3 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar3 + -1) {
    iVar8 = 0;
    do {
      iVar7 = FUN_004032c8(0x1e);
      FUN_00647c48(iVar7 + 10,iVar8);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (PTR_DAT_0066ac78[0x181] != '\0') {
    FUN_005d3ba4();
  }
  FUN_0064cae0();
  *(undefined4 *)PTR_DAT_0066ad34 = 0;
  *PTR_DAT_0066afb4 = 1;
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x3c);
  if (-1 < iVar3 + -1) {
    iVar8 = 0;
    do {
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x217 + iVar8 * 0x2f8) != '\0') {
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar8 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar8 * 0x2f8) +
                   (float)*(int *)PTR_DAT_0066b2d4 * _DAT_00629640);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar8 * 0x38);
        *piVar1 = *piVar1 + *(int *)PTR_DAT_0066b2d4;
      }
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x218 + iVar8 * 0x2f8) != '\0') {
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar8 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar8 * 0x2f8) +
                   (float)*(int *)(PTR_DAT_0066b2d4 + 4) * _DAT_00629640);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar8 * 0x38);
        *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066b2d4 + 4);
      }
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x214 + iVar8 * 0x2f8) != '\0') {
        *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar8 * 0x2f8) =
             (longlong)
             ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + iVar8 * 0x2f8) +
                   (float)*(int *)(PTR_DAT_0066b2d4 + 8) * _DAT_00629640);
        piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar8 * 0x38);
        *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066b2d4 + 8);
      }
      piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x2c + iVar8 * 0x38);
      *piVar1 = *piVar1 + *(int *)(PTR_DAT_0066ae20 +
                                  *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar8 * 0x2f8) * 4);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(PTR_DAT_0066ac78 + 0x13c);
  if (0 < iVar3) {
    local_14 = PTR_DAT_0066ac78 + 0x140;
    do {
      FUN_0064cbf0(*(undefined4 *)local_14,0,0,0,0,0);
      local_14 = (char *)((int)local_14 + 4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0044a83c(*(undefined4 *)(DAT_006d4934 + 0x2f8),100);
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) {
    *PTR_DAT_0066afb4 = 1;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
    if (*(int *)(PTR_DAT_0066ac78 + 0xc4) == 0xca) {
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
    }
    else {
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
    }
    FUN_00483bc4(DAT_006d4934);
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
    FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
    *PTR_DAT_0066afb4 = 0;
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
    cVar2 = FUN_00656d70();
    if (cVar2 == '\0') {
      cVar2 = FUN_00656d04();
      if (cVar2 == '\0') {
        *(int *)(PTR_DAT_0066ac78 + 0x110) = *(int *)(PTR_DAT_0066ac78 + 0x110) + 1;
        *(undefined4 *)(PTR_DAT_0066ac78 + 0x88) = 1;
        uVar4 = FUN_00656d44();
        *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c) = uVar4;
        *PTR_DAT_0066afb4 = 1;
        FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
        FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
        FUN_00483bc4(DAT_006d4934);
        FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
        *PTR_DAT_0066afb4 = 0;
      }
      else {
        *(undefined4 *)PTR_DAT_0066b484 = 0;
        FUN_004e1a98();
        FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
        FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
        FUN_00483bc4(DAT_006d4934);
      }
    }
    else {
      *PTR_DAT_0066afb4 = 1;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
      FUN_00483bc4(DAT_006d4934);
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
      *PTR_DAT_0066afb4 = 0;
    }
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    cVar2 = FUN_00657370();
    if (cVar2 == '\0') {
      if (PTR_DAT_0066ae98[0x8c55] == '\0') {
        if (PTR_DAT_0066ae98[0x667d] == '\0') {
          if (PTR_DAT_0066ae98[0x3b3d] == '\0') {
            iVar3 = 0;
            local_14 = PTR_DAT_0066ae98 + 0x52d;
            do {
              if (*local_14 != '\0') {
                *(int *)PTR_DAT_0066b09c = iVar3;
                break;
              }
              iVar3 = iVar3 + 1;
              local_14 = local_14 + 0x568;
            } while (iVar3 != 0x1b);
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
      FUN_004e1a98();
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
      FUN_00483bc4(DAT_006d4934);
    }
    else {
      *PTR_DAT_0066afb4 = 1;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
      FUN_00483bc4(DAT_006d4934);
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
      *PTR_DAT_0066afb4 = 0;
    }
  }
  else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
    cVar2 = FUN_0065746c();
    if (cVar2 == '\0') {
      *(undefined4 *)PTR_DAT_0066b484 = 1;
      FUN_004e1a98();
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0060e964,PTR_DAT_0066b6a4);
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
      FUN_00483bc4(DAT_006d4934);
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
      if (((PTR_DAT_0066ac78[0x175] == '\0') && (PTR_DAT_0066ac78[0x176] == '\0')) &&
         ((PTR_DAT_0066ac78[0x177] == '\0' && (PTR_DAT_0066ac78[0x178] == '\0')))) {
        FUN_00618ac8(*(undefined4 *)PTR_DAT_0066b6a4);
      }
      else {
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
      }
    }
    else {
      *PTR_DAT_0066afb4 = 1;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00634a00,PTR_DAT_0066b054);
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066b3d4);
      FUN_00483bc4(DAT_006d4934);
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b054);
      *PTR_DAT_0066afb4 = 0;
    }
  }
  return;
}

