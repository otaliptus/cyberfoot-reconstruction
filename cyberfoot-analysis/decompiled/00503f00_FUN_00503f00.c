// Address: 00503f00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00503f00(void)

{
  int iVar1;
  int iVar2;
  uint extraout_EDX;
  
  iVar2 = FUN_00403e50();
  iVar1 = *(int *)(iVar2 + 0x4d4);
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  FUN_0040fe60(iVar2 + 0x50c);
  FUN_0040fe60(iVar2 + 0x510);
  FUN_0040fe60(iVar2 + 0x588);
  FUN_004e2eac(iVar2 + 0x58c);
  *(undefined4 *)(iVar2 + 0x58c) = 0;
  FUN_0050dc14(iVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar2);
  }
  return;
}

