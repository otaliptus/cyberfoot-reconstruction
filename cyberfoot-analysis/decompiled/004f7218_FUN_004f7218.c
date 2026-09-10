// Address: 004f7218
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7218(int *param_1,int param_2)

{
  char cVar1;
  
  param_1[4] = param_2;
  cVar1 = FUN_004f7274(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}

