// Address: 0040a778
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char * FUN_0040a778(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = -1;
  do {
    pcVar3 = param_1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  return pcVar3 + -1;
}

