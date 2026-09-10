// Address: 0063ef2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_Sedemitir1Click(undefined4 param_1)

{
  DAT_006d52d8 = '\0';
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005c8284,PTR_DAT_0066b000);
  (**(code **)(**(int **)PTR_DAT_0066b000 + 0xec))();
  if (DAT_006d52d8 != '\0') {
    DAT_006d52d8 = '\0';
    *PTR_DAT_0066af2c = 1;
    *(undefined4 *)PTR_DAT_0066b48c = *(undefined4 *)(PTR_DAT_0066ac78 + 8);
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_00641f38,PTR_DAT_0066b04c);
    (**(code **)(**(int **)PTR_DAT_0066b04c + 0xec))();
    *(int *)PTR_DAT_0066ae48 = *(int *)PTR_DAT_0066ae48 + -1;
    FUN_00636068(param_1);
  }
  return;
}

