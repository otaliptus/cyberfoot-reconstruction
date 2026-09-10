// Address: 00402108
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00402108(int param_1)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = param_1 + 3;
  }
  param_1 = param_1 >> 2;
  if (param_1 < 0x401) {
    do {
      iVar1 = *(int *)(DAT_0066c624 + -0xc + param_1 * 4);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != 0x401);
  }
  return 0;
}

