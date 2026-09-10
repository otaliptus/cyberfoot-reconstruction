// Address: 00593034
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm47_gridview1CellColoring
               (int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
               undefined4 *param_6,uint param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x11c))();
  if (((int)param_7 < iVar1) && ((param_4 & 8) == 0)) {
    if ((param_7 & 1) == 0) {
      *param_6 = 0xffffff;
    }
    else {
      *param_6 = 0xecffff;
    }
  }
  return;
}

