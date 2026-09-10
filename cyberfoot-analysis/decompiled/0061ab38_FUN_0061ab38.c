// Address: 0061ab38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061ab38(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066b5b8;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b5b8);
  iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x3c) + *(int *)(PTR_DAT_0066ac78 + 0x40) + -1;
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
    if (0 < iVar2) {
      iVar3 = 1;
      do {
        if (((-1 < *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130)) &&
            (*(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130) <= iVar4)) &&
           (*(char *)(*(int *)puVar1 + 0x120 + iVar3 * 0x130) == '\0')) {
          if (*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130) < 0x20) {
            FUN_0061ad68(param_1,iVar3);
          }
          else {
            FUN_00618310(param_1,iVar3);
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) && (iVar2 = iVar2 + -1, 0 < iVar2)) {
    iVar3 = 1;
    do {
      if ((((-1 < *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130)) &&
           (*(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130) <= iVar4)) &&
          (*(char *)(*(int *)puVar1 + 0x120 + iVar3 * 0x130) == '\0')) &&
         (0 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c +
                      *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130) * 0x2f8))) {
        if (*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130) < 0x20) {
          FUN_0061ad68(param_1,iVar3);
        }
        else {
          FUN_00618310(param_1,iVar3);
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00405ef4(*(undefined4 *)puVar1);
  if (0 < iVar2) {
    iVar3 = 1;
    do {
      if (((-1 < *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130)) &&
          (*(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130) <= iVar4)) &&
         ((*(char *)(*(int *)puVar1 + 0x120 + iVar3 * 0x130) != '\0' &&
          (*(int *)(*(int *)puVar1 + 0x18 + iVar3 * 0x130) < 0x15)))) {
        FUN_0061b518(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

