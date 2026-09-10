// Address: 0040eaf8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040eaf8(void)

{
  if (DAT_0066c798 != (int *)0x0) {
    *(undefined1 *)(DAT_0066c798 + 3) = 1;
    (**(code **)(*DAT_0066c798 + -8))();
    DAT_0066c798 = (int *)0x0;
  }
  if (DAT_0066c79c != 0) {
    *(undefined1 *)(DAT_0066c79c + 0xc) = 1;
    FUN_00403a84(DAT_0066c79c);
    DAT_0066c79c = 0;
  }
  *(undefined4 *)PTR_DAT_0066ad28 = 0;
  *(undefined4 *)PTR_DAT_0066aff4 = 0;
  *(undefined4 *)PTR_DAT_0066aeb4 = 0;
  *(undefined4 *)PTR_DAT_0066afc0 = 0;
  *(undefined4 *)PTR_DAT_0066b00c = 0;
  *(undefined4 *)PTR_DAT_0066b38c = 0;
  return;
}

