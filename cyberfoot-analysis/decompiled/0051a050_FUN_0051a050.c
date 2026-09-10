// Address: 0051a050
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a050(void)

{
  int *piVar1;
  uint extraout_EDX;
  
  piVar1 = (int *)FUN_00403e50();
  FUN_0051a088(piVar1);
  (**(code **)(*piVar1 + 0x1c))();
  FUN_0041e640(piVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(piVar1);
  }
  return;
}

