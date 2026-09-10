// Address: 0040b86e
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b86e(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int unaff_EBP;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(unaff_EBP + 8);
  do {
    pcVar3 = pcVar4;
    if (param_3 == 0) {
      return;
    }
    do {
      while( true ) {
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        if ((cVar1 != '\'') && (cVar1 != '\"')) break;
        while( true ) {
          pcVar3 = pcVar4 + 1;
          cVar2 = *pcVar4;
          if (cVar2 == cVar1) break;
          pcVar4 = pcVar3;
          if (cVar2 == '\0') {
            return;
          }
        }
      }
      if (cVar1 == '\0') {
        return;
      }
      pcVar3 = pcVar4;
    } while (cVar1 != ';');
    param_3 = param_3 + -1;
  } while( true );
}

