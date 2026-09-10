// Address: 004b9d5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004b9d5c(uint param_1,char param_2)

{
  bool bVar1;
  
  if ((PTR_DAT_0066b7ac[0xd] == '\0') || (param_2 != '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((param_1 & 2) == 2) {
      param_1 = param_1 & 0xfffffffd;
    }
    else if ((param_1 & 1) != 1) {
      param_1 = param_1 | 2;
    }
  }
  if ((PTR_DAT_0066b7ac[0xd] == '\0') || (param_2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    param_1 = param_1 | 0x20000;
  }
  return param_1;
}

