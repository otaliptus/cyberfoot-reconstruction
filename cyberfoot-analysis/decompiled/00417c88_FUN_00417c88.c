// Address: 00417c88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00417c88(char *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if ((param_1 != (char *)0x0) && (*param_1 == '\x11')) {
    iVar1 = *(int *)(param_1 + (byte)param_1[1] + 10);
    if (iVar1 == 0x48) {
      iVar1 = 0x100;
    }
  }
  if ((((iVar1 < 2) || (iVar1 == 0xe)) || (iVar1 == 0xf)) || ((0x14 < iVar1 && (iVar1 != 0x100)))) {
    FUN_004114ac();
  }
  return iVar1;
}

