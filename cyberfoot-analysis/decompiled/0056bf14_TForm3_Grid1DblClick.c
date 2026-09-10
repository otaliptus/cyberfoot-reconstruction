// Address: 0056bf14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Grid1DblClick(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x33c))[0x128] != 1) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x33c) + 0x134))();
    if (0 < iVar1) {
      TForm3_Image11Click(param_1,*(undefined4 *)(param_1 + 0x3e0));
    }
  }
  return;
}

