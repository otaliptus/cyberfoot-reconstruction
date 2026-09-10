// Address: 00471874
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00471874(void)

{
  FUN_00403a84(*(undefined4 *)PTR_DAT_0066b3ac);
  *(undefined4 *)PTR_DAT_0066b3ac = 0;
  FUN_00403a84(*(undefined4 *)PTR_DAT_0066b760);
  *(undefined4 *)PTR_DAT_0066b760 = 0;
  FUN_00403a84(DAT_0066cb54);
  DAT_0066cb54 = 0;
  FUN_00403a84(DAT_0066cba4);
  GlobalDeleteAtom(DAT_0066cb62);
  FUN_004048d4(&DAT_0066cb68);
  GlobalDeleteAtom(DAT_0066cb60);
  FUN_004048d4(&DAT_0066cb64);
  if (DAT_006630c8 != (HMODULE)0x0) {
    FreeLibrary(DAT_006630c8);
  }
  return;
}

