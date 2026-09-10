// Address: 004fb520
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004fb520(char param_1,byte param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((9 < (byte)(param_1 - 0x30U)) &&
      (((param_2 & 4) == 0 || ((param_1 != '+' && (param_1 != '-')))))) &&
     (((param_2 & 2) == 0 || (param_1 != *PTR_DAT_0066b70c)))) {
    uVar1 = 0;
  }
  return uVar1;
}

