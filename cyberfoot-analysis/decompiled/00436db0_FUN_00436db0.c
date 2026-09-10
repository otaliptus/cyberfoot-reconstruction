// Address: 00436db0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00436db0(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if (*(int *)(iVar1 + 0x40) != 0) {
    FUN_00427f80();
  }
  FUN_00426ea4(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

