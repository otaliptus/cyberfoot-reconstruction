// Address: 004164f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004164f4(ushort *param_1,undefined4 param_2)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 8;
  FUN_004053fc(param_2,1,0x7fffffff,param_1 + 4);
  return;
}

