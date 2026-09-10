// Address: 004c1ecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004c1ecc(undefined2 *param_1)

{
  ushort uVar1;
  
  if ((ushort)param_1[1] < 0xd) {
    uVar1 = FUN_004bc3f4(*param_1,param_1[1]);
    if (((((ushort)param_1[2] <= uVar1) && ((ushort)param_1[3] < 0x18)) &&
        ((ushort)param_1[4] < 0x3c)) && ((ushort)param_1[5] < 0x3c)) {
      return 1;
    }
  }
  return 0;
}

