// Address: 004c43f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c43f8(undefined4 param_1,byte param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *unaff_ESI;
  byte *pbVar5;
  byte *unaff_EDI;
  
  bVar3 = (byte)((uint)param_3 >> 8);
  for (bVar2 = (byte)param_3; bVar2 < bVar3; bVar2 = bVar2 + 2) {
    if ((byte)(bVar2 + 1) == bVar3) {
      bVar1 = 0;
      bVar4 = param_2;
      pbVar5 = unaff_ESI;
    }
    else {
      pbVar5 = unaff_ESI + 1;
      bVar4 = *unaff_ESI;
      bVar1 = bVar4 >> 4;
    }
    *unaff_EDI = param_2 << 4 | bVar1;
    param_2 = bVar4;
    unaff_ESI = pbVar5;
    unaff_EDI = unaff_EDI + 1;
  }
  return;
}

