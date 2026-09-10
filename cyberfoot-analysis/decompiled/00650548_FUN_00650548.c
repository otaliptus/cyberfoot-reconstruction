// Address: 00650548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00650548(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  float10 in_ST0;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x650561;
  FUN_00404d94(param_4);
  bVar8 = true;
  puStack_20 = &LAB_00650e75;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00404cf0(param_4,&DAT_00650e90);
  bVar9 = false;
  if (bVar8) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x118 + param_1 * 0x130);
    *piVar1 = *piVar1 + 1;
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
    iVar5 = -1;
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      iVar4 = 0;
      do {
        if ((param_1 == *(int *)(*(int *)PTR_DAT_0066b6b4 + iVar4 * 0x10)) &&
           (iVar5 = iVar4, *(int *)(*(int *)PTR_DAT_0066b6b4 + 8 + iVar4 * 0x10) == param_3)) break;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        iVar5 = -1;
      } while (iVar3 != 0);
    }
    if (iVar5 == -1) {
      iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b6b4);
      FUN_004060a8(PTR_DAT_0066b6b4,PTR_DAT_00488f20,1,iVar5 + 1);
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
      *(int *)(*(int *)PTR_DAT_0066b6b4 + iVar5 * 0x10) = param_1;
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
      *(int *)(*(int *)PTR_DAT_0066b6b4 + 8 + iVar5 * 0x10) = param_3;
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
      *(int *)(*(int *)PTR_DAT_0066b6b4 + 0xc + iVar5 * 0x10) = param_2;
      uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
      bVar9 = (uVar6 & 0x7fffffff) == 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b6b4 + 4 + uVar6 * 0x10) = 1;
    }
    else {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b6b4 + 4 + iVar5 * 0x10);
      *piVar1 = *piVar1 + 1;
      bVar9 = *piVar1 == 0;
    }
  }
  FUN_00404cf0(param_4,&DAT_00650e9c);
  bVar8 = false;
  if (bVar9) {
    iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
    iVar5 = -1;
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      iVar4 = 0;
      do {
        if ((param_1 == *(int *)(*(int *)PTR_DAT_0066ae58 + iVar4 * 0x10)) &&
           (iVar5 = iVar4, *(int *)(*(int *)PTR_DAT_0066ae58 + 8 + iVar4 * 0x10) == param_3)) break;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        iVar5 = -1;
      } while (iVar3 != 0);
    }
    if (iVar5 == -1) {
      iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066ae58);
      FUN_004060a8(PTR_DAT_0066ae58,PTR_DAT_00488f40,1,iVar5 + 1);
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
      *(int *)(*(int *)PTR_DAT_0066ae58 + iVar5 * 0x10) = param_1;
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
      *(int *)(*(int *)PTR_DAT_0066ae58 + 8 + iVar5 * 0x10) = param_3;
      iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
      *(int *)(*(int *)PTR_DAT_0066ae58 + 0xc + iVar5 * 0x10) = param_2;
      uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
      bVar8 = (uVar6 & 0x7fffffff) == 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066ae58 + 4 + uVar6 * 0x10) = 1;
    }
    else {
      piVar1 = (int *)(*(int *)PTR_DAT_0066ae58 + 4 + iVar5 * 0x10);
      *piVar1 = *piVar1 + 1;
      bVar8 = *piVar1 == 0;
    }
  }
  FUN_00404cf0(param_4,&DAT_00650e9c);
  if ((((!bVar8) && (FUN_00404cf0(param_4,&DAT_00650e90), !bVar8)) &&
      (FUN_00404cf0(param_4,&DAT_00650ea8), !bVar8)) &&
     (FUN_00404cf0(param_4,&DAT_00650eb4), !bVar8)) {
    FUN_00404cf0(param_4,&DAT_00650ec0);
    bVar9 = false;
    if (!bVar8) goto LAB_00650a84;
  }
  iVar3 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
  iVar5 = -1;
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      if (((param_1 == *(int *)(*(int *)PTR_DAT_0066b604 + iVar4 * 0x20)) &&
          (*(int *)(*(int *)PTR_DAT_0066b604 + 0x18 + iVar4 * 0x20) ==
           *(int *)(PTR_DAT_0066ac78 + 0xc0))) &&
         (iVar5 = iVar4, *(int *)(*(int *)PTR_DAT_0066b604 + 0x1c + iVar4 * 0x20) == param_2))
      break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar5 = -1;
    } while (iVar3 != 0);
  }
  bVar8 = iVar5 == -1;
  if (bVar8) {
    iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b604);
    FUN_004060a8(PTR_DAT_0066b604,PTR_DAT_00488ee0,1,iVar5 + 1);
    iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
    *(int *)(*(int *)PTR_DAT_0066b604 + iVar5 * 0x20) = param_1;
    iVar5 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
    *(undefined4 *)(*(int *)PTR_DAT_0066b604 + 0x18 + iVar5 * 0x20) =
         *(undefined4 *)(PTR_DAT_0066ac78 + 0xc0);
    uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
    bVar9 = (uVar6 & 0x3fffffff) == 0;
    *(int *)(*(int *)PTR_DAT_0066b604 + 0x1c + uVar6 * 0x20) = param_2;
    FUN_00404cf0(param_4,&DAT_00650e9c);
    bVar8 = false;
    if (bVar9) {
      uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
      bVar8 = (uVar6 & 0x3fffffff) == 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b604 + 0x10 + uVar6 * 0x20) = 1;
    }
    FUN_00404cf0(param_4,&DAT_00650e90);
    if (bVar8) {
      uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
      bVar9 = (uVar6 & 0x3fffffff) == 0;
      *(undefined4 *)(*(int *)PTR_DAT_0066b604 + 4 + uVar6 * 0x20) = 1;
    }
    else {
      FUN_00404cf0(param_4,&DAT_00650ea8);
      if (bVar8) {
        uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
        bVar9 = (uVar6 & 0x3fffffff) == 0;
        *(undefined4 *)(*(int *)PTR_DAT_0066b604 + 8 + uVar6 * 0x20) = 1;
      }
      else {
        FUN_00404cf0(param_4,&DAT_00650eb4);
        if (bVar8) {
          uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
          bVar9 = (uVar6 & 0x3fffffff) == 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b604 + 0xc + uVar6 * 0x20) = 1;
        }
        else {
          FUN_00404cf0(param_4,&DAT_00650ec0);
          bVar9 = false;
          if (bVar8) {
            uVar6 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b604);
            bVar9 = (uVar6 & 0x3fffffff) == 0;
            *(undefined4 *)(*(int *)PTR_DAT_0066b604 + 0x14 + uVar6 * 0x20) = 1;
          }
        }
      }
    }
  }
  else {
    FUN_00404cf0(param_4,&DAT_00650e90);
    if (bVar8) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b604 + 4 + iVar5 * 0x20);
      *piVar1 = *piVar1 + 1;
      bVar9 = *piVar1 == 0;
    }
    else {
      FUN_00404cf0(param_4,&DAT_00650e9c);
      if (bVar8) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b604 + 0x10 + iVar5 * 0x20);
        *piVar1 = *piVar1 + 1;
        bVar9 = *piVar1 == 0;
      }
      else {
        FUN_00404cf0(param_4,&DAT_00650ea8);
        if (bVar8) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066b604 + 8 + iVar5 * 0x20);
          *piVar1 = *piVar1 + 1;
          bVar9 = *piVar1 == 0;
        }
        else {
          FUN_00404cf0(param_4,&DAT_00650eb4);
          if (bVar8) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066b604 + 0xc + iVar5 * 0x20);
            *piVar1 = *piVar1 + 1;
            bVar9 = *piVar1 == 0;
          }
          else {
            FUN_00404cf0(param_4,&DAT_00650ec0);
            bVar9 = false;
            if (bVar8) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066b604 + 0x14 + iVar5 * 0x20);
              *piVar1 = *piVar1 + 1;
              bVar9 = *piVar1 == 0;
            }
          }
        }
      }
    }
  }
LAB_00650a84:
  FUN_00404cf0(param_4,&DAT_00650e9c);
  bVar8 = false;
  if (bVar9) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x10c + param_1 * 0x130);
    *piVar1 = *piVar1 + 1;
    bVar8 = *piVar1 == 0;
  }
  FUN_00404cf0(param_4,&DAT_00650e90);
  bVar9 = false;
  if (bVar8) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x104 + param_1 * 0x130);
    *piVar1 = *piVar1 + 1;
    bVar9 = *piVar1 == 0;
  }
  FUN_00404cf0(param_4,&DAT_00650ea8);
  if ((bVar9) || (FUN_00404cf0(param_4,&DAT_00650eb4), bVar8 = false, bVar9)) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x108 + param_1 * 0x130);
    *piVar1 = *piVar1 + 1;
    bVar8 = *piVar1 == 0;
  }
  FUN_00404cf0(param_4,&DAT_00650eb4);
  bVar9 = false;
  if (bVar8) {
    iVar5 = FUN_004032c8(0x23);
    if (iVar5 < 3) {
      if (iVar5 == 0) {
        iVar5 = 10;
      }
      else if (iVar5 - 1U < 2) {
        iVar5 = 5;
      }
    }
    else if (iVar5 - 3U < 3) {
      iVar5 = 3;
    }
    else if (iVar5 - 6U < 10) {
      iVar5 = 2;
    }
    else if (iVar5 - 0x10U < 0x14) {
      iVar5 = 1;
    }
    iVar3 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130);
    if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) != '\0') && (1 < iVar5)) {
      FUN_0064cbf0(iVar3,1,iVar5,0,0,param_1);
    }
    piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + param_1 * 0x130 + 0xb8 +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *piVar1 = *piVar1 + iVar5;
    bVar9 = *piVar1 == 0;
  }
  FUN_00404cf0(param_4,&DAT_00650ea8);
  bVar8 = false;
  if (bVar9) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + param_1 * 0x130 + 0x8c +
                    *(int *)(PTR_DAT_0066ac78 + 0x88) * 4);
    *piVar1 = *piVar1 + 1;
    bVar8 = *piVar1 == 0;
  }
  FUN_00404cf0(param_4,&DAT_00650ec0);
  if (bVar8) {
    uVar7 = (uint)(*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x78 + param_1 * 0x130) < 0x32);
    uVar6 = *(uint *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
    if ((int)uVar6 < 0x24) {
      if (uVar6 < 0x1a) {
        uVar7 = uVar7 + 1;
      }
      else if (uVar6 - 0x1a < 5) {
        iVar5 = FUN_004032c8(3);
        uVar7 = uVar7 + iVar5 + 1;
      }
      else if (uVar6 - 0x1f < 5) {
        iVar5 = FUN_004032c8(3);
        uVar7 = uVar7 + iVar5 + 2;
      }
    }
    else if (uVar6 - 0x24 < 5) {
      iVar5 = FUN_004032c8(4);
      uVar7 = uVar7 + iVar5 + 3;
    }
    else if (uVar6 - 0x29 < 10) {
      iVar5 = FUN_004032c8(4);
      uVar7 = uVar7 + iVar5 + 4;
    }
    else if (uVar6 - 0x33 < 10) {
      iVar5 = FUN_004032c8(4);
      uVar7 = uVar7 + iVar5 + 5;
    }
    else if (uVar6 - 0x3d < 0x474) {
      iVar5 = FUN_004032c8(4);
      uVar7 = uVar7 + iVar5 + 6;
    }
    iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x18 + param_1 * 0x130);
    if (iVar5 < 0x1f) {
      if (iVar5 - 0x10U < 5) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
        *piVar1 = *piVar1 + -2;
      }
      else if (iVar5 - 0x15U < 5) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
        *piVar1 = *piVar1 + -3;
      }
      else if (iVar5 - 0x1aU < 5) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
        *piVar1 = *piVar1 + -4;
      }
    }
    else if (iVar5 - 0x1fU < 5) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
      *piVar1 = *piVar1 + -5;
    }
    else if (iVar5 - 0x24U < 5) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
      *piVar1 = *piVar1 + -7;
    }
    else if (iVar5 - 0x3dU < 0x474) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
      *piVar1 = *piVar1 + -10;
    }
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130) < 1) {
      *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130) = 1;
    }
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + param_1 * 0x130) == 0xc) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
      *piVar1 = *piVar1 + 2;
    }
    else if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + param_1 * 0x130) == 0xc) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + param_1 * 0x130);
      *piVar1 = *piVar1 + 1;
    }
    if ((1 < (int)uVar7) && (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + param_1 * 0x130) == 0xc)) {
      uVar7 = uVar7 - 1;
    }
    iVar5 = FUN_004032c8(300);
    if (iVar5 == 1) {
      iVar5 = FUN_004032c8(6);
      uVar7 = iVar5 + 0xf;
    }
    if (0 < (int)uVar7) {
      FUN_004bc5a0(uVar7 * 7 + 2);
      *(double *)(*(int *)PTR_DAT_0066b5b8 + 0x68 + param_1 * 0x130) = (double)in_ST0;
    }
    if ((((*(int *)(PTR_DAT_0066ac78 + 0x88) < 7) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 10)) &&
        (iVar5 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + param_1 * 0x130),
        *(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar5 * 0x2f8) != '\0')) && (1 < (int)uVar7)) {
      FUN_0064cbf0(iVar5,3,uVar7,0,0,param_1);
    }
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00650e7c;
  puStack_20 = (undefined1 *)0x650e74;
  FUN_004048d4(&param_4,uStack_24,puVar2);
  return;
}

