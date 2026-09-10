// Address: 0056a3ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm3_Image1MouseDown(void)

{
  if (DAT_0067b4c9 == '\0') {
    DAT_0067b4c8 = 1;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0055f858,PTR_DAT_0066b558);
    (**(code **)(**(int **)PTR_DAT_0066b558 + 0xec))();
  }
  else {
    DAT_006d1eec = 1;
    DAT_0067b4c8 = 1;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_0055e8ac,PTR_DAT_0066b3ec);
    (**(code **)(**(int **)PTR_DAT_0066b3ec + 0xec))();
  }
  return;
}

