// Address: 0042155c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0042155c(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x14);
  for (pcVar3 = pcVar2; (*pcVar3 != '\0' && (*pcVar3 != '.')); pcVar3 = pcVar3 + 1) {
  }
  cVar1 = *pcVar3;
  if (cVar1 != '\0') {
    FUN_004049c4(param_1 + 0x10,pcVar2,(int)pcVar3 - (int)pcVar2);
    FUN_00404e44(param_1 + 0x14,1,((int)pcVar3 - (int)pcVar2) + 1);
  }
  return cVar1 != '\0';
}

