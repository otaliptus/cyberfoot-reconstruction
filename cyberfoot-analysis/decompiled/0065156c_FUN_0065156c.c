// Address: 0065156c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065156c(int param_1)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  puVar4 = PTR_DAT_0066b5b8;
  bVar3 = false;
  iVar5 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    iVar7 = iVar5;
    do {
      iVar2 = *(int *)(*(int *)puVar4 + 0x20 + iVar6 * 0x130);
      if (((-1 < iVar2) && (param_1 == iVar2)) &&
         (*(int *)(*(int *)puVar4 + 0x50 + iVar6 * 0x130) == 1)) {
        pbVar1 = (byte *)(*(int *)puVar4 + iVar6 * 0x130);
        bVar8 = *pbVar1 == 0xffffffff;
        FUN_00403180(pbVar1,&DAT_0065172c);
        if (bVar8) {
          *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + param_1 * 0x2f8) = iVar6;
          bVar3 = true;
          break;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((!bVar3) && (-1 < iVar5 + -1)) {
    iVar6 = 0;
    iVar7 = iVar5;
    do {
      if (((param_1 == *(int *)(*(int *)puVar4 + 0x20 + iVar6 * 0x130)) &&
          (*(int *)(*(int *)puVar4 + 0x50 + iVar6 * 0x130) == 1)) &&
         (*(int *)(*(int *)puVar4 + 0x5c + iVar6 * 0x130) == 9)) {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + param_1 * 0x2f8) = iVar6;
        bVar3 = true;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((!bVar3) && (-1 < iVar5 + -1)) {
    iVar6 = 0;
    iVar7 = iVar5;
    do {
      if (((param_1 == *(int *)(*(int *)puVar4 + 0x20 + iVar6 * 0x130)) &&
          (*(int *)(*(int *)puVar4 + 0x50 + iVar6 * 0x130) == 1)) &&
         (*(int *)(*(int *)puVar4 + 0x5c + iVar6 * 0x130) == 4)) {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + param_1 * 0x2f8) = iVar6;
        bVar3 = true;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((!bVar3) && (-1 < iVar5 + -1)) {
    iVar6 = 0;
    iVar7 = iVar5;
    do {
      if (((param_1 == *(int *)(*(int *)puVar4 + 0x20 + iVar6 * 0x130)) &&
          (*(int *)(*(int *)puVar4 + 0x50 + iVar6 * 0x130) == 1)) &&
         (*(int *)(*(int *)puVar4 + 0x5c + iVar6 * 0x130) == 0xb)) {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + param_1 * 0x2f8) = iVar6;
        bVar3 = true;
        break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((!bVar3) && (-1 < iVar5 + -1)) {
    iVar7 = 0;
    do {
      if ((param_1 == *(int *)(*(int *)puVar4 + 0x20 + iVar7 * 0x130)) &&
         (*(int *)(*(int *)puVar4 + 0x50 + iVar7 * 0x130) == 1)) {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + param_1 * 0x2f8) = iVar7;
        return;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

