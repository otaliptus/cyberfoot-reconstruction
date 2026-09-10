// Address: 0041636c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041636c(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  *param_1 = 4;
  return;
}

