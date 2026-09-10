// Address: 006514e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006514e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_DAT_0066b238;
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + param_1 * 0x2f8);
  if (param_3 < 0xc) {
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + param_2 * 0x130) = 1;
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x7c + param_2 * 0x130) = 1;
    if (param_3 < 0xc) {
      *(int *)(*(int *)puVar2 + iVar1 * 0xf8 + -4 + param_3 * 4) = param_2;
    }
    iVar3 = 1;
    do {
      if (param_2 == *(int *)(*(int *)puVar2 + iVar1 * 0xf8 + 0x3c + iVar3 * 4)) {
        *(undefined4 *)(*(int *)puVar2 + iVar1 * 0xf8 + 0x3c + iVar3 * 4) = 0;
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
  }
  return;
}

