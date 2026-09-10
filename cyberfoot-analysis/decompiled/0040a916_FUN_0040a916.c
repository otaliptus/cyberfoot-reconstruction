// Address: 0040a916
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char * FUN_0040a916(char *param_1,char param_2)

{
  while( true ) {
    if (param_2 == *param_1) {
      return param_1;
    }
    if (*param_1 == '\0') break;
    param_1 = param_1 + 1;
  }
  return (char *)0x0;
}

