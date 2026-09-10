// Address: 0046e904
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046e904(int param_1)

{
  char cVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    cVar1 = FUN_0046e998(param_1);
    if (cVar1 != '\0') break;
    param_1 = *(int *)(param_1 + 0xc);
  }
  return param_1;
}

