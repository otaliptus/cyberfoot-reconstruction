// Address: 00412164
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00412164(ushort *param_1,ushort *param_2)

{
  if (param_1 != param_2) {
    if ((*param_2 & 0xbfe8) == 0) {
      if ((*param_1 & 0xbfe8) != 0) {
        FUN_00411cbc(param_1);
      }
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    }
    else {
      FUN_004120b8(param_1,param_2);
    }
  }
  return;
}

