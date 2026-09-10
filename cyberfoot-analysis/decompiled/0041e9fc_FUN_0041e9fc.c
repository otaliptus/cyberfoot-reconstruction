// Address: 0041e9fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e9fc(void)

{
  int *piVar1;
  uint extraout_EDX;
  
  piVar1 = (int *)FUN_00403e50();
  (**(code **)(*piVar1 + 0x10))(piVar1,0);
  FUN_0041e640(piVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(piVar1);
  }
  return;
}

