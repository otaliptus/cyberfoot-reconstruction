// Address: 0050e530
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050e530(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 700) == '\0') {
    if ((*(byte *)(param_1 + 0x490) & 0x80) == 0) {
      iVar1 = FUN_00465c0c(param_1);
      return iVar1;
    }
    iVar1 = FUN_00465c0c(param_1);
    iVar1 = iVar1 + -0xc;
  }
  else {
    iVar1 = FUN_00465c0c(param_1);
  }
  return iVar1;
}

