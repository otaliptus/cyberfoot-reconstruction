// Address: 006527f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_006527f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = FUN_004032c8(100);
  if (iVar1 + 1U < 0x10) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130);
  }
  else if (iVar1 - 0xfU < 0x2d) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130) + -1;
  }
  else if (iVar1 - 0x3cU < 0x28) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0066b5b8 + 0x30 + param_1 * 0x130) + 1;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (10 < iVar2) {
    iVar2 = 10;
  }
  return iVar2;
}

