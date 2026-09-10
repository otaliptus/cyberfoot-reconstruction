// Address: 004881c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004881c0(char *param_1,int param_2,char param_3)

{
  char cVar1;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (param_3 == cVar1);
  return param_2;
}

