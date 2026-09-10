// Address: 00409400
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00409400(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_3 = (short)(param_1 / (param_2 & 0xffff));
  *param_4 = (short)(param_1 % (param_2 & 0xffff));
  return;
}

