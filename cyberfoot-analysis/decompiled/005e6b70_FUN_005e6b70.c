// Address: 005e6b70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e6b70(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + param_2 * 0x2f8);
  *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + param_3 * 0x130) = 1;
  *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7c + param_3 * 0x130) = 1;
  if (param_4 < 0xc) {
    *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + param_4 * 4) = param_3;
  }
  iVar2 = 1;
  do {
    if (param_3 == *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x3c + iVar2 * 4)) {
      *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + 0x3c + iVar2 * 4) = 0;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  return;
}

