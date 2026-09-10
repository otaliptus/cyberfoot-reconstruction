// Address: 00640a7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00640a7c(void)

{
  *(undefined4 *)PTR_DAT_0066b31c = 1;
  if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) < 3) {
    *(undefined4 *)PTR_DAT_0066b31c = 1;
  }
  else {
    *(undefined4 *)PTR_DAT_0066b31c = 2;
  }
  if (4 < *(int *)(PTR_DAT_0066ac78 + 0x13c)) {
    *(undefined4 *)PTR_DAT_0066b31c = 1;
  }
  *(undefined4 *)PTR_DAT_0066b2a8 = 8;
  FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005d0d3c,PTR_DAT_0066b4cc);
  (**(code **)(**(int **)PTR_DAT_0066b4cc + 0xec))();
  return;
}

