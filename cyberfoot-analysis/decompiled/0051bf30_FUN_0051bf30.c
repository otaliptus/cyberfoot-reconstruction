// Address: 0051bf30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

short FUN_0051bf30(short param_1)

{
  short sVar1;
  
  sVar1 = 0x1f49 - param_1;
  if (param_1 == 0) {
    sVar1 = 1;
  }
  param_1 = param_1 - sVar1;
  if (param_1 < 0) {
    param_1 = param_1 + 0x1f49;
  }
  return param_1;
}

