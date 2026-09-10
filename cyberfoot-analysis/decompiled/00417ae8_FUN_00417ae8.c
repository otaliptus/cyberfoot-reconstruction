// Address: 00417ae8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00417ae8(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 != (char *)0x0 && (*param_1 == '\x11'))) {
    iVar1 = iVar1 + 1;
    param_1 = (char *)FUN_00417acc();
  }
  return iVar1;
}

