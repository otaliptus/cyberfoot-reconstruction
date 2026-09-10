// Address: 00607ac0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00607ac0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  do {
    iVar2 = iVar1;
    if (param_2 == *(int *)(*(int *)PTR_DAT_0066b238 + param_1 * 0xf8 + -4 + iVar1 * 4)) break;
    iVar1 = iVar1 + 1;
    iVar2 = -1;
  } while (iVar1 != 0xc);
  if (0 < iVar2) {
    *(undefined1 *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + param_2 * 0x130) = 0;
    FUN_00642c6c();
  }
  return;
}

