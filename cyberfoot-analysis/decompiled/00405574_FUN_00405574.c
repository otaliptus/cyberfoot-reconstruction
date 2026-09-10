// Address: 00405574
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00405574(short *param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  bool bVar7;
  
  if (param_1 != (short *)0x0) {
    if (param_2 == (short *)0x0) {
      return 0;
    }
    iVar4 = (*(uint *)(param_1 + -2) >> 1) - 1;
    if (-1 < iVar4) {
      iVar2 = (*(uint *)(param_2 + -2) >> 1) - iVar4;
      bVar7 = iVar2 == 0;
      psVar5 = param_2;
      if (!bVar7 && iVar4 <= (int)(*(uint *)(param_2 + -2) >> 1)) {
LAB_0040559b:
        do {
          if (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            psVar1 = psVar5 + 1;
            bVar7 = *param_1 == *psVar5;
            psVar5 = psVar1;
            if (!bVar7) goto LAB_0040559b;
          }
          iVar3 = iVar4;
          psVar6 = psVar5;
          psVar1 = param_1;
          if (!bVar7) {
            return 0;
          }
          do {
            if (iVar3 == 0) break;
            bVar7 = psVar1[1] == *psVar6;
            iVar3 = iVar3 + -1;
            psVar6 = psVar6 + 1;
            psVar1 = psVar1 + 1;
          } while (bVar7);
          if (bVar7) {
            return (uint)((int)psVar5 - (int)param_2) >> 1;
          }
        } while( true );
      }
    }
  }
  return 0;
}

