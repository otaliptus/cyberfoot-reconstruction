// Address: 00497780
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497780(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = 1;
    do {
      (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,iVar1);
      iVar1 = iVar1 + -1;
    } while (0 < iVar1);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x130) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}

