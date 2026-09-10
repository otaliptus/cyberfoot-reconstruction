// Address: 004ef774
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ef774(int *param_1)

{
  FUN_00467f5c(param_1);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    *(undefined1 *)((int)param_1 + 0x219) = 0;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

