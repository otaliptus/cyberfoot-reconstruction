// Address: 0040b659
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b659(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  uint extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int unaff_EBP;
  char *unaff_EDI;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar3 = *(uint *)(unaff_EBP + 8);
  if (0x11 < uVar3) {
    uVar3 = 0x12;
  }
  iVar2 = (int)*(short *)(unaff_EBP + -0x2c);
  if (iVar2 < 1) {
    pcVar5 = unaff_EDI + 1;
    *unaff_EDI = '0';
  }
  else {
    iVar4 = 0;
    if (*(char *)(unaff_EBP + 0x10) != '\x02') {
      iVar4 = (byte)((ushort)(iVar2 + -1) % 3) + 1;
    }
    while( true ) {
      cVar1 = FUN_0040b5ae();
      pcVar5 = unaff_EDI + (uint)bVar7 * -2 + 1;
      *unaff_EDI = cVar1;
      iVar2 = 0;
      uVar3 = extraout_EDX;
      if (extraout_ECX == 1) break;
      iVar4 = iVar4 + -1;
      unaff_EDI = pcVar5;
      if ((iVar4 == 0) && (*(char *)(unaff_EBP + -6) != '\0')) {
        unaff_EDI = pcVar5 + (uint)bVar7 * -2 + 1;
        *pcVar5 = *(char *)(unaff_EBP + -6);
        iVar4 = 3;
      }
    }
  }
  if (uVar3 != 0) {
    pcVar6 = pcVar5;
    if (*(char *)(unaff_EBP + -5) != '\0') {
      pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
      *pcVar5 = *(char *)(unaff_EBP + -5);
    }
    for (; iVar2 != 0; iVar2 = iVar2 + 1) {
      *pcVar6 = '0';
      uVar3 = uVar3 - 1;
      if (uVar3 == 0) {
        return;
      }
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    }
    do {
      cVar1 = FUN_0040b5ae();
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
    } while (extraout_EDX_00 != 1);
  }
  return;
}

