// Address: 006520d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006520d0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0066b5b8;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b5b8);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if ((((-1 < *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130)) &&
           (param_1 == *(int *)(*(int *)puVar1 + 0x20 + iVar3 * 0x130))) &&
          (*(int *)(*(int *)puVar1 + 0x50 + iVar3 * 0x130) == 1)) &&
         (*(char *)(*(int *)puVar1 + 0x120 + iVar3 * 0x130) == '\0')) {
        *(int *)(*(int *)PTR_DAT_0066af70 + 0xa4 + param_1 * 0x2f8) = iVar3;
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

