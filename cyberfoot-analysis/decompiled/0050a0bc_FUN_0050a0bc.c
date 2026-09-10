// Address: 0050a0bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a0bc(void)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = FUN_00403e50();
  if (*(int *)(iVar1 + 0x38) != 0) {
    FUN_0050b40c(*(int *)(iVar1 + 0x38),iVar1);
  }
  FUN_0040fe60(iVar1 + 0x50);
  FUN_0040fe60(iVar1 + 0x58);
  FUN_0040fe60(iVar1 + 0x5c);
  FUN_0040fe60(iVar1 + 0x60);
  FUN_0040fe60(iVar1 + 0x90);
  if (*(int *)(iVar1 + 0x48) != 0) {
    FUN_0040fe60(iVar1 + 0x48);
  }
  if (*(int *)(iVar1 + 0x84) != 0) {
    FUN_0040fe60(iVar1 + 0x84);
  }
  FUN_0050a388(iVar1);
  FUN_00426ea4(iVar1,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar1);
  }
  return;
}

