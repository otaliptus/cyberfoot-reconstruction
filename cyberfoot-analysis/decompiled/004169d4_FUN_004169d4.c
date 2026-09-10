// Address: 004169d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_004169d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  undefined4 uVar1;
  undefined3 uVar2;
  
  if (param_4 <= param_5) {
    uVar2 = (undefined3)
            (CONCAT22((short)((uint)param_1 >> 0x10),
                      (ushort)(param_5 < param_4) << 8 |
                      (ushort)(NAN(param_5) || NAN(param_4)) << 10 |
                      (ushort)(param_5 == param_4) << 0xe) >> 8);
    if (param_5 < param_4 == 0 && (param_5 == param_4) == 0) {
      uVar1 = CONCAT31(uVar2,2);
    }
    else {
      uVar1 = CONCAT31(uVar2,1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

