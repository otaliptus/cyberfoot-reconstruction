// Address: 00434978
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char * FUN_00434978(int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = (char *)*param_1;
  if (*param_1 != 0) {
    for (pcVar1 = (char *)*param_1; pcVar2 = pcVar1, *pcVar1 == ' '; pcVar1 = pcVar1 + 1) {
    }
    for (; (*pcVar2 != '\0' && (*pcVar2 != ',')); pcVar2 = pcVar2 + 1) {
    }
    if (*pcVar2 == ',') {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
    }
    *param_1 = (int)pcVar2;
  }
  return pcVar1;
}

