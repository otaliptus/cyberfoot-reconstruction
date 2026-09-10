// Address: 0046bcc8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_0046bcc8(int param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = FUN_004654d4(param_1,param_2);
  if (*(char *)(param_1 + 0x57) != '\0') {
    iVar3 = FUN_00469730(param_1);
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        if ((param_2 & bVar1) != 0) {
          return bVar1;
        }
        uVar4 = FUN_004696f4(param_1,iVar3);
        bVar2 = FUN_00403c80(uVar4,param_2);
        bVar1 = bVar1 | bVar2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
  }
  return bVar1;
}

