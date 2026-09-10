// Address: 004c4b8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004c4b8c(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  for (param_1 = param_1 + 2; (1 < (int)uVar1 && (*param_1 == 0)); param_1 = param_1 + 1) {
    uVar1 = uVar1 - 2;
  }
  return uVar1;
}

