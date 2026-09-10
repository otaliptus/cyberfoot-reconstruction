// Address: 0046571c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046571c(int *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)param_1 + 0x5b);
  if (param_2 != bVar1) {
    *(byte *)((int)param_1 + 0x5b) = param_2;
    FUN_0046555c(param_1,(&DAT_00662fa4)[param_2]);
    if (((*(byte *)(param_1 + 7) & 1) == 0) &&
       (((((*(byte *)(param_1 + 7) & 0x10) == 0 || (param_1[0xc] != 0)) && (param_2 != 6)) &&
        (bVar1 != 6)))) {
      if (((((byte)(bVar1 - 1) < 2 == (byte)(param_2 - 3) < 2) && (bVar1 != 0)) && (bVar1 != 5)) &&
         ((param_2 != 0 && (param_2 != 5)))) {
        (**(code **)(*param_1 + 0x84))
                  (param_1,param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13]);
      }
      else {
        FUN_00403c80(param_1);
      }
    }
  }
  FUN_00403c80(param_1);
  return;
}

