// Address: 004032a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004032a8(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 >> 2;
  if (-1 < iVar1) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
      param_1 = param_1 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return;
}

