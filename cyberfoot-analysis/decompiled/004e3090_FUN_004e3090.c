// Address: 004e3090
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004e3090(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0047e4c0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0047e4c0(param_1);
    if (*(char *)(iVar1 + 0x22e) != '\0') {
      return 1;
    }
  }
  return 0;
}

