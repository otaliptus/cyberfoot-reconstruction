// Address: 0045084c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0045084c(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_00450894;
  if ((param_1 & 1) != 0) {
    bVar1 = DAT_00450894 | 1;
  }
  if ((param_1 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_1 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_1 & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((param_1 & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  return bVar1;
}

