// Address: 0050dc14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050dc14(void)

{
  char cVar1;
  int iVar2;
  uint extraout_EDX;
  
  iVar2 = FUN_00403e50();
  FUN_0040fe60(iVar2 + 0x4d4);
  *(undefined4 *)(iVar2 + 0x278) = 0;
  FUN_0040fe60(iVar2 + 0x27c);
  FUN_0040fe60(iVar2 + 0x294);
  FUN_0040fe60(iVar2 + 0x2e8);
  FUN_0040fe60(iVar2 + 0x2ec);
  FUN_0040fe60(iVar2 + 0x2f0);
  FUN_0040fe60(iVar2 + 0x494);
  FUN_0040fe60(iVar2 + 0x4c4);
  *(undefined4 *)(iVar2 + 0x2d4) = 0;
  cVar1 = FUN_004e4b0c();
  if (cVar1 != '\0') {
    (**(code **)PTR_DAT_0066b208)();
  }
  FUN_004e89c0(iVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00403e38(iVar2);
  }
  return;
}

