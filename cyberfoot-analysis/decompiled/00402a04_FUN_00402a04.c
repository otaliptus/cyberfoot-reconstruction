// Address: 00402a04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00402a04(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = (int)param_3 >> 2;
  if (param_1 < param_2) {
    param_1 = (undefined4 *)((param_3 - 4) + (int)param_1);
    param_2 = (undefined4 *)((param_3 - 4) + (int)param_2);
    if (-1 < iVar1) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *param_1;
        param_1 = param_1 + -1;
        param_2 = param_2 + -1;
      }
      puVar2 = (undefined1 *)((int)param_1 + 3);
      puVar3 = (undefined1 *)((int)param_2 + 3);
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + -1;
        puVar3 = puVar3 + -1;
      }
    }
  }
  else if ((param_2 != param_1) && (-1 < iVar1)) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    return;
  }
  return;
}

