// Address: 00449a78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00449a78(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar1 = FUN_00449900(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_00449978(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

