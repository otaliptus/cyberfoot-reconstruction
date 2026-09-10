// Address: 0044b930
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0044b930(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar2;
    do {
      if (cVar1 == '\0') {
        *pcVar3 = '\0';
        return (int)pcVar3 - (int)param_1;
      }
      if (cVar1 == '\n') {
        pcVar2 = pcVar3 + 2;
        pcVar3[0] = '\r';
        pcVar3[1] = '\n';
        break;
      }
      *pcVar3 = cVar1;
      pcVar2 = pcVar3 + 1;
      if (cVar1 != '\r') break;
      pcVar2 = pcVar3 + 2;
      pcVar3[1] = '\n';
      pcVar3 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 != '\n');
  } while( true );
}

