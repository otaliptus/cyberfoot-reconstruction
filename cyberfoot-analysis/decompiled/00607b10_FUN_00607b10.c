// Address: 00607b10
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00607b10(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int local_14;
  int local_c;
  
  local_14 = -1;
  iVar1 = 0xb;
  do {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar1 * 4);
    if ((0 < iVar2) && (-1 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar2 * 0x130))) {
      unaff_ESI = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar2 * 0x130);
      break;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + unaff_ESI * 0x2f8);
  if (((iVar1 < 1) || (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar1 * 0x130) == '\0')) ||
     (unaff_ESI != *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar1 * 0x130))) {
    iVar1 = FUN_004032c8(10);
    iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + iVar1 * 4);
    iVar2 = 1;
    do {
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                   *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar2 * 4) * 0x130) !=
          '\0') {
        iVar1 = *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar2 * 4);
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xb);
    *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + unaff_ESI * 0x2f8) = iVar1;
  }
  if (0 < iVar1) {
    if (param_2 < *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x28 + iVar1 * 0x130)) {
      local_c = 0xc;
    }
    else {
      local_c = 2;
    }
    iVar2 = FUN_004032c8(100);
    if (iVar2 <= local_c) {
      local_14 = iVar1;
    }
  }
  *param_4 = local_14;
  param_4[1] = -1;
  return;
}

