// Address: 00416a24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_00416a24(undefined4 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
            longlong param_5)

{
  undefined4 uVar1;
  undefined3 uVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((float10)param_4 <= (float10)param_5) {
    fVar3 = (float10)param_5;
    fVar4 = (float10)param_4;
    uVar2 = (undefined3)
            (CONCAT22((short)((uint)param_1 >> 0x10),
                      (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                      (ushort)(fVar4 == fVar3) << 0xe) >> 8);
    if (fVar4 < fVar3 == 0) {
      uVar1 = CONCAT31(uVar2,1);
    }
    else {
      uVar1 = CONCAT31(uVar2,2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

