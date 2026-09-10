// Address: 00416244
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416244(ushort *param_1,undefined4 param_2,char param_3)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  if (DAT_00662458 == '\0') {
    *param_1 = 3;
  }
  else {
    *param_1 = *(ushort *)(&DAT_00662484 + param_3 * 2);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

