// Address: 0040afdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040afdc(short *param_1,int param_2,short *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *extraout_ECX;
  short *extraout_ECX_00;
  short *extraout_ECX_01;
  short *psVar4;
  short *psVar5;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  psVar3 = param_3 + param_6;
  psVar9 = param_1;
LAB_0040b008:
  if (param_2 != 0) {
    do {
      if (param_3 == psVar3) break;
      psVar5 = param_3 + (uint)bVar11 * -2 + 1;
      sVar1 = *param_3;
      param_3 = psVar5;
      if (sVar1 == 0x25) {
        if (psVar5 == psVar3) break;
        param_3 = psVar5 + (uint)bVar11 * -2 + 1;
        sVar1 = *psVar5;
        if (sVar1 != 0x25) goto code_r0x0040b035;
      }
      psVar5 = psVar9 + (uint)bVar11 * -2 + 1;
      *psVar9 = sVar1;
      param_2 = param_2 + -1;
      psVar9 = psVar5;
      if (param_2 == 0) break;
    } while( true );
  }
LAB_0040b01d:
  FUN_0040b384((uint)((int)psVar9 - (int)param_1) >> 1);
  return;
code_r0x0040b035:
  psVar5 = param_3 + -2;
  while( true ) {
    psVar7 = param_3;
    sVar2 = sVar1;
    if (sVar1 == 0x2d) {
      if (param_3 == psVar3) goto LAB_0040b01d;
      psVar7 = param_3 + (uint)bVar11 * -2 + 1;
      sVar2 = *param_3;
    }
    sVar2 = FUN_0040b0ca(sVar2);
    psVar3 = extraout_ECX;
    if (sVar2 != 0x3a) break;
    if (psVar7 == extraout_ECX) goto LAB_0040b01d;
    param_3 = psVar7 + (uint)bVar11 * -2 + 1;
    sVar1 = *psVar7;
  }
  psVar6 = extraout_EDX;
  param_3 = psVar7;
  if (sVar2 == 0x2e) {
    if (psVar7 == extraout_ECX) goto LAB_0040b01d;
    param_3 = psVar7 + (uint)bVar11 * -2 + 1;
    FUN_0040b0ca(*psVar7);
    psVar3 = extraout_ECX_00;
    psVar6 = extraout_EDX_00;
  }
  FUN_0040b11c();
  psVar7 = (short *)((int)psVar5 - (int)extraout_ECX_01);
  if (psVar5 < extraout_ECX_01) {
    psVar7 = (short *)0x0;
  }
  psVar5 = extraout_ECX_01;
  psVar8 = param_3;
  if (sVar1 == 0x2d) {
    bVar10 = psVar6 < extraout_ECX_01;
    psVar6 = (short *)((int)psVar6 - (int)extraout_ECX_01);
    psVar4 = extraout_ECX_01;
    if (bVar10) {
      psVar4 = (short *)((int)extraout_ECX_01 + (int)psVar6);
      psVar6 = (short *)0x0;
    }
    for (; psVar5 = (short *)0x0, psVar4 != (short *)0x0; psVar4 = (short *)((int)psVar4 + -1)) {
      *psVar9 = *psVar8;
      psVar8 = psVar8 + (uint)bVar11 * -2 + 1;
      psVar9 = psVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  psVar4 = (short *)((int)psVar6 - (int)psVar7);
  if (psVar6 < psVar7) {
    psVar7 = (short *)((int)psVar7 + (int)psVar4);
    psVar4 = (short *)0x0;
  }
  for (; psVar7 != (short *)0x0; psVar7 = (short *)((int)psVar7 + -1)) {
    *psVar9 = 0x20;
    psVar9 = psVar9 + (uint)bVar11 * -2 + 1;
  }
  param_2 = (int)psVar4 - (int)psVar5;
  if (psVar4 < psVar5) {
    psVar5 = (short *)((int)psVar5 + param_2);
    param_2 = 0;
  }
  for (; psVar5 != (short *)0x0; psVar5 = (short *)((int)psVar5 + -1)) {
    *psVar9 = *psVar8;
    psVar8 = psVar8 + (uint)bVar11 * -2 + 1;
    psVar9 = psVar9 + (uint)bVar11 * -2 + 1;
  }
  goto LAB_0040b008;
}

