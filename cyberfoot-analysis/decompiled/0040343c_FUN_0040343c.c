// Address: 0040343c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0040343c(byte *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  
  pbVar7 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
LAB_004034b2:
    uVar2 = 0;
    pbVar7 = pbVar7 + 1;
  }
  else {
    uVar2 = 0;
    pbVar7 = param_1;
    do {
      pbVar6 = pbVar7;
      bVar4 = *pbVar6;
      pbVar7 = pbVar6 + 1;
    } while (bVar4 == 0x20);
    bVar1 = false;
    if (bVar4 == 0x2d) {
      bVar1 = true;
LAB_004034c2:
      bVar4 = *pbVar7;
      pbVar7 = pbVar6 + 2;
    }
    else if (bVar4 == 0x2b) goto LAB_004034c2;
    if (((bVar4 == 0x24) || (bVar4 == 0x78)) || (bVar4 == 0x58)) {
LAB_004034c7:
      bVar4 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar3 = uVar2;
      if (bVar4 != 0) {
        do {
          if (0x60 < bVar4) {
            bVar4 = bVar4 - 0x20;
          }
          bVar5 = bVar4 - 0x30;
          uVar2 = uVar3;
          if (9 < bVar5) {
            if (5 < (byte)(bVar4 + 0xbf)) goto LAB_004034bb;
            bVar5 = bVar4 - 0x37;
          }
          if (0xfffffff < uVar3) goto LAB_004034bb;
          uVar3 = uVar3 * 0x10 + (uint)bVar5;
          bVar4 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar4 != 0);
        if (bVar1) {
          uVar3 = -uVar3;
        }
LAB_00403504:
        iVar8 = 0;
        goto LAB_00403507;
      }
      goto LAB_004034b2;
    }
    if (bVar4 != 0x30) {
      if (bVar4 != 0) goto LAB_0040348e;
      goto LAB_004034bb;
    }
    bVar4 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    if ((bVar4 == 0x78) || (bVar4 == 0x58)) goto LAB_004034c7;
    while (bVar4 != 0) {
LAB_0040348e:
      if ((9 < (byte)(bVar4 - 0x30)) || (0xccccccc < uVar2)) goto LAB_004034bb;
      uVar2 = uVar2 * 10 + (uint)(byte)(bVar4 - 0x30);
      bVar4 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    if (bVar1) {
      uVar3 = -uVar2;
      if ((uVar3 == 0 || 0 < (int)uVar2) || (uVar2 = uVar3, (int)uVar3 < 0)) goto LAB_00403504;
    }
    else {
      uVar3 = uVar2;
      if (-1 < (int)uVar2) goto LAB_00403504;
    }
  }
LAB_004034bb:
  iVar8 = (int)pbVar7 - (int)param_1;
  uVar3 = uVar2;
LAB_00403507:
  *param_2 = iVar8;
  return uVar3;
}

