// Address: 004177f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004177f0(uint param_1)

{
  char cVar1;
  
  if (((param_1 & 0xbfff) < 0x16) && (PTR_DAT_0066b438[(param_1 & 0xbfff) * 0xc + 1] != '\0')) {
    return 1;
  }
  cVar1 = FUN_0041744c(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}

