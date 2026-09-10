// Address: 00557a94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00557a94(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  if (((*param_1 <= (float)*param_2) && ((float)*param_2 <= *param_1 + param_1[2])) &&
     (param_1[1] <= (float)param_2[1])) {
    fVar1 = param_1[1] + param_1[3];
    fVar2 = (float)param_2[1];
    if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
      return CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                      (ushort)(fVar2 < fVar1) << 8 |
                                      (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                      (ushort)(fVar2 == fVar1) << 0xe) >> 8),1);
    }
  }
  return 0;
}

