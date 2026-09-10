// Address: 00482324
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482324(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x22e);
  FUN_00482224(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}

