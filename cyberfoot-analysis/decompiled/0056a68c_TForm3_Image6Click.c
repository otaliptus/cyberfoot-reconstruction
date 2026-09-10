// Address: 0056a68c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Image6Click(int param_1)

{
  int iVar1;
  
  if ((DAT_0067b4c9 == '\0') &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x2f8) + 0x134))(), iVar1 == 0)) {
    return;
  }
  if (DAT_0067b4c9 == '\0') {
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005606b0,PTR_DAT_0066aff8);
    (**(code **)(**(int **)PTR_DAT_0066aff8 + 0xec))();
  }
  else {
    DAT_006d1eec = 1;
    DAT_0067b4c8 = 1;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0055e8ac,PTR_DAT_0066b3ec);
    (**(code **)(**(int **)PTR_DAT_0066b3ec + 0xec))();
  }
  return;
}

