// Address: 0064184c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm13_btjogarClick(void)

{
  if ((*(int *)(PTR_DAT_0066ac78 + 0xd0) == 1) || (*(int *)(PTR_DAT_0066ac78 + 0xd0) == 2)) {
    if (PTR_DAT_0066ac78[0x8c] == '\0') {
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005b5078,PTR_DAT_0066b104);
      (**(code **)(**(int **)PTR_DAT_0066b104 + 0xec))();
    }
    FUN_0064af08();
    *(undefined4 *)PTR_DAT_0066ad34 = 0;
  }
  *PTR_DAT_0066ae3c = 0;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005e493c,PTR_DAT_0066afdc);
  (**(code **)(**(int **)PTR_DAT_0066afdc + 0xec))();
  return;
}

