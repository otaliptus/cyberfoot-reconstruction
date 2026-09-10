// Address: 005bb7b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bb7b8(int *param_1)

{
  char cVar1;
  
  FUN_004272a8(param_1);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    cVar1 = FUN_005bb950(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x3c))();
    }
  }
  return;
}

