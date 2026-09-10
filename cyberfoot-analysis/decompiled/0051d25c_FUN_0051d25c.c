// Address: 0051d25c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0051d25c(int param_1)

{
  short sVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    sVar1 = FUN_0051d4c8(param_1,4);
    if (sVar1 != 0) {
      sVar1 = FUN_0051d4c8(param_1,3);
      if (sVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

