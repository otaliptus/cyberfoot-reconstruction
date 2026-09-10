// Address: 004d35b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d35b4(short *param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  byte bVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  
  iVar5 = FUN_00405260(param_1);
  uVar6 = FUN_004d3548(param_1,param_2);
  FUN_004050e4(param_3,0,uVar6);
  psVar7 = (short *)*param_3;
  psVar4 = param_1;
  do {
    while( true ) {
      psVar3 = psVar4;
      if (param_1 + iVar5 <= psVar3) {
        return;
      }
      sVar1 = *psVar3;
      bVar2 = (byte)param_2;
      if (sVar1 != 10) break;
LAB_004d3606:
      if ((byte)(bVar2 - 1) < 2) {
        *psVar7 = 0xd;
        psVar7 = psVar7 + 1;
      }
      if (bVar2 < 2) {
        *psVar7 = 10;
        psVar7 = psVar7 + 1;
      }
      psVar4 = psVar3 + 1;
    }
    if (sVar1 == 0xd) {
      if ((byte)(bVar2 - 1) < 2) {
        *psVar7 = 0xd;
        psVar7 = psVar7 + 1;
      }
      if (bVar2 < 2) {
        *psVar7 = 10;
        psVar7 = psVar7 + 1;
      }
      psVar4 = psVar3 + 1;
      if (psVar3[1] == 10) {
        psVar4 = psVar3 + 2;
      }
    }
    else {
      if (sVar1 == 0x2028) goto LAB_004d3606;
      *psVar7 = sVar1;
      psVar7 = psVar7 + 1;
      psVar4 = psVar3 + 1;
    }
  } while( true );
}

