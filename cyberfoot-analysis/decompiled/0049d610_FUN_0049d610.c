// Address: 0049d610
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049d610(int *param_1,char param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_0049d44c(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  puVar1 = (undefined1 *)*param_1;
  *param_1 = *param_1 + 1;
  *puVar1 = 0xff;
  piVar4 = param_1 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar3 = FUN_0049d37c(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  pcVar2 = (char *)*param_1;
  *param_1 = *param_1 + 1;
  *pcVar2 = param_2 + -0x30;
  piVar4 = param_1 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar3 = FUN_0049d37c(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar4 = param_1 + 4;
  for (iVar3 = 0; iVar3 < *(int *)(param_1[8] + 0xf0); iVar3 = iVar3 + 1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  return 1;
}

