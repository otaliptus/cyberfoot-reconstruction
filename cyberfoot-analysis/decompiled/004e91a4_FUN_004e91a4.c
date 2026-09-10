// Address: 004e91a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e91a4(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  FUN_0040fe60(iVar1 + 0x238);
  FUN_0040fe60(iVar1 + 0x23c);
  FUN_0040fe60(iVar1 + 0x240);
  FUN_0040fe60(iVar1 + 0x244);
  FUN_004e86cc(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

