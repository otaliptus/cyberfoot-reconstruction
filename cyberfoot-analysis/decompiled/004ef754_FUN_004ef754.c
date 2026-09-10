// Address: 004ef754
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef754(int *param_1)

{
  FUN_00467f44(param_1);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    *(undefined1 *)((int)param_1 + 0x219) = 1;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

