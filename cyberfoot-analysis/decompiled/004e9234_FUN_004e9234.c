// Address: 004e9234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e9234(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x244) + 0x3c) == '\0') {
    iVar1 = FUN_00465c0c(param_1);
  }
  else {
    iVar1 = FUN_00465c0c(param_1);
    iVar2 = GetSystemMetrics(2);
    iVar1 = iVar1 - iVar2;
  }
  return iVar1 + -4;
}

