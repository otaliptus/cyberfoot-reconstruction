// Address: 0051e070
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0051e070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) < 1) {
    iVar1 = FUN_00524230(*(undefined4 *)(param_1 + 4));
    if (*(int *)(iVar1 + 8) != 0) {
      uVar2 = FUN_00524230(*(undefined4 *)(param_1 + 4));
      return uVar2;
    }
  }
  return *(undefined4 *)(param_1 + 0x20);
}

