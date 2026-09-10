// Address: 0047e86c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047e86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_4 + -5) == '\0') {
    if ((*(char *)(param_4 + -6) != '\0') && (cVar1 = FUN_0047e838(param_1), cVar1 == '\0')) {
      iVar2 = (**(code **)PTR_DAT_0066b008)();
      return -(iVar2 - *(int *)(param_4 + -0xc));
    }
    if ((*(char *)(param_4 + -6) == '\0') && (cVar1 = FUN_0047e838(param_1), cVar1 != '\0')) {
      iVar2 = (**(code **)PTR_DAT_0066b008)();
      iVar2 = iVar2 - *(int *)(param_4 + -0xc);
    }
  }
  return iVar2;
}

