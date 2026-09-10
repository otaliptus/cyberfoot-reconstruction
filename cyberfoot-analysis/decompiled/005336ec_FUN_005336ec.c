// Address: 005336ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005336ec(int *param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    if ((*(int *)(param_1[0x90] + 0x34) != 0x1fffffff) && (0 < *(int *)(param_1[0x90] + 0x20))) {
      (**(code **)(*param_1 + 0x7c))();
    }
  }
  else {
    (**(code **)(*param_1 + 0x7c))();
  }
  FUN_0046aedc(param_1,param_2);
  return;
}

