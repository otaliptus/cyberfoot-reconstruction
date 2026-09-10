// Address: 0040b954
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040b954(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  byte *pbVar7;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar8;
  
  bVar10 = 0;
  if (*(char *)(unaff_EBP + -0x11) == '\0') {
    iVar4 = (int)*(short *)(unaff_EBP + -0x30);
    if (iVar4 <= *(int *)(unaff_EBP + -0x18)) {
      iVar4 = *(int *)(unaff_EBP + -0x18);
    }
    iVar6 = (int)*(short *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x18);
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x18);
    iVar6 = 0;
  }
  *(int *)(unaff_EBP + -0x44) = iVar4;
  *(int *)(unaff_EBP + -0x48) = iVar6;
  pbVar8 = *(byte **)(unaff_EBP + -0x34);
  pbVar9 = *(byte **)(unaff_EBP + -4);
  iVar4 = unaff_EBP + -0x2d;
  if ((*(char *)(unaff_EBP + -0x2e) != '\0') && (pbVar8 == *(byte **)(unaff_EBP + 8))) {
    *pbVar9 = 0x2d;
    pbVar9 = pbVar9 + 1;
  }
LAB_0040b991:
  do {
    while( true ) {
      do {
        while( true ) {
          pbVar7 = pbVar8 + (uint)bVar10 * -2 + 1;
          bVar1 = *pbVar8;
          pbVar8 = pbVar7;
          if ((bVar1 != 0x23) && (bVar1 != 0x30)) break;
          FUN_0040ba0f();
        }
      } while ((bVar1 == 0x2e) || (bVar1 == 0x2c));
      if ((bVar1 != 0x27) && (bVar1 != 0x22)) break;
      while( true ) {
        bVar2 = *pbVar7;
        pbVar8 = pbVar7 + (uint)bVar10 * -2 + 1;
        if (bVar2 == bVar1) break;
        if (bVar2 == 0) goto LAB_0040ba09;
        *pbVar9 = bVar2;
        pbVar7 = pbVar7 + (uint)bVar10 * -2 + 1;
        pbVar9 = pbVar9 + (uint)bVar10 * -2 + 1;
      }
    }
    if ((bVar1 == 0x45) || (bVar1 == 0x65)) {
      bVar2 = *pbVar7;
      uVar3 = CONCAT11(bVar2,bVar1);
      if (bVar2 == 0x2b) break;
      if (bVar2 == 0x2d) {
        uVar3 = (ushort)bVar1;
        break;
      }
    }
    else if ((bVar1 == 0x3b) || (uVar3 = (ushort)bVar1, bVar1 == 0)) {
LAB_0040ba09:
      return (int)pbVar9 - *(int *)(unaff_EBP + -4);
    }
    *pbVar9 = (byte)uVar3;
    pbVar9 = pbVar9 + (uint)bVar10 * -2 + 1;
  } while( true );
  uVar5 = 0xffffffff;
  do {
    uVar5 = uVar5 + 1;
    pbVar7 = pbVar7 + 1;
  } while (*pbVar7 == 0x30);
  if (3 < uVar5) {
    uVar5 = 4;
  }
  FUN_0040b474(uVar3,(int)*(short *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x18),uVar5,iVar4);
  pbVar8 = pbVar7;
  goto LAB_0040b991;
}

