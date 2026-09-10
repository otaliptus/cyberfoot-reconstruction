// Address: 0060a38c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0060a38c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  while (((*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar1 * 4) < 1 ||
          (*(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + 0x58 + iVar1 * 4) != param_2)) ||
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                   *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar1 * 4) * 0x130) ==
          '\0'))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0xc) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar1 * 4);
}

