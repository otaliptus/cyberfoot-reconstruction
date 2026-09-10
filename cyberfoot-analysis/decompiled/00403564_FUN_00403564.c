// Address: 00403564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403564(uint param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  param_2 = param_2 & 0xff;
  uVar5 = param_1 >> 8 & 0xff;
  for (uVar3 = uVar5; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  if (uVar5 * 8 <= param_2) {
    param_2 = uVar5 * 8 - 1;
  }
  if ((param_1 & 0xff) <= param_2) {
    bVar1 = -1 << ((byte)param_1 & 7);
    uVar3 = (param_1 & 0xff) >> 3;
    bVar2 = 0xff >> (~(byte)param_2 & 7);
    pbVar6 = param_3 + (uVar3 - uVar5);
    iVar4 = (param_2 >> 3) - uVar3;
    if (iVar4 == 0) {
      *pbVar6 = bVar1 & bVar2;
    }
    else {
      *pbVar6 = bVar1;
      while( true ) {
        pbVar6 = pbVar6 + 1;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        *pbVar6 = 0xff;
      }
      *pbVar6 = bVar2;
    }
  }
  return;
}

