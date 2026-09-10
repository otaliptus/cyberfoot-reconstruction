// Address: 004f0024
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f0024(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_0040fe60(iVar1 + 0x270);
  FUN_004eecf0(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

