// Address: 00405128
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405128(undefined4 param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 4) {
      if (pcVar2[1] == '\0') {
LAB_00405149:
        pcVar2 = pcVar2 + 1;
        break;
      }
      if (pcVar2[2] == '\0') {
LAB_00405148:
        pcVar2 = pcVar2 + 1;
        goto LAB_00405149;
      }
      if (pcVar2[3] == '\0') {
        pcVar2 = pcVar2 + 1;
        goto LAB_00405148;
      }
    }
    iVar1 = (int)pcVar2 - (int)param_2;
  }
  FUN_00405058(param_1,param_2,iVar1);
  return;
}

