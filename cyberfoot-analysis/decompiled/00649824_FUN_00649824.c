// Address: 00649824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00649824(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + param_2 * 0x80) == '\0') {
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x24 + param_2 * 0x80) =
         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8);
  }
  else {
    *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x24 + param_2 * 0x80) =
         *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8);
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
      iVar1 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
      if ((*(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar1 * 0x294) == 2) &&
         (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + param_1 * 0x2f8) == 2)) {
        *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x24 + param_2 * 0x80) = 4;
      }
    }
  }
  *(undefined4 *)(*(int *)PTR_DAT_0066b718 + 0x1c + param_2 * 0x80) = 0xffffffff;
  *(int *)(*(int *)PTR_DAT_0066b718 + 0x20 + param_2 * 0x80) = param_1;
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + param_1 * 0x2f8) = 0xffffffff;
  *(undefined1 *)(*(int *)PTR_DAT_0066b718 + 0x40 + param_2 * 0x80) = 0;
  if (*(char *)(*(int *)PTR_DAT_0066b718 + 0x31 + param_2 * 0x80) != '\0') {
    iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
    iVar1 = iVar1 + -1;
    if (0 < iVar1) {
      iVar5 = 1;
      do {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar5 * 0x130);
        if ((-1 < iVar2) && (param_1 == iVar2)) {
          *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar5 * 0x130) = 0;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe4 + iVar5 * 0x130) = 3;
          *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0xe8 + iVar5 * 0x130) = 1;
          if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) == 1) {
            *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar5 * 0x130) = 0;
          }
          iVar2 = FUN_004032c8(0x1e);
          FUN_00647c48(iVar2 + 10,iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    uVar3 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
    *(undefined4 *)PTR_DAT_0066b4f8 = uVar3;
    *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_1 * 0x2f8) = 0;
    *(int *)(PTR_DAT_0066ac78 + 0x13c) = *(int *)(PTR_DAT_0066ac78 + 0x13c) + -1;
    iVar1 = *(int *)PTR_DAT_0066b57c;
    if (0 < iVar1) {
      piVar4 = (int *)(PTR_DAT_0066ac78 + 0x140);
      do {
        if (param_1 == *piVar4) {
          *piVar4 = -1;
        }
        piVar4 = piVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00648ea0();
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) != 0) {
      FUN_006497c8(param_1);
    }
    FUN_00649ad4(param_1);
    iVar1 = FUN_0065639c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
    if (iVar1 == 0) {
      iVar1 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8));
      if (-1 < iVar1) {
        *(undefined1 *)(*(int *)PTR_DAT_0066aca0 + 0x14c + iVar1 * 0x294) = 0;
      }
    }
    if ((PTR_DAT_0066ac78[0x170] != '\0') &&
       (*(int *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_1 * 0x2f8) == 0x1d)) {
      iVar1 = FUN_006563e0(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x40 + param_1 * 0x2f8));
      if (iVar1 == 0) {
        PTR_DAT_0066ae98
        [*(int *)(*(int *)PTR_DAT_0066af70 + 0x40 + param_1 * 0x2f8) * 0x568 + 0x52c] = 0;
      }
    }
  }
  return;
}

