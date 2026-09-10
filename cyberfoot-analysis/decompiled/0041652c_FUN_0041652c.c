// Address: 0041652c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041652c(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0xd;
  FUN_00406898(param_1 + 4,param_2);
  return;
}

