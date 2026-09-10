// Address: 004035bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004035bc(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  
  param_3 = param_3 & 0xff;
  do {
    if (param_3 == 0) {
      return;
    }
    param_3 = param_3 - 1;
    cVar2 = *param_2;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 == cVar2);
  return;
}

