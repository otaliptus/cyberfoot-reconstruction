// Address: 00520a08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520a08(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_00403a84(*(undefined4 *)(iVar1 + 0xc));
  FUN_00520540(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

