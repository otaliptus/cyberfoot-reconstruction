// Address: 004e8c48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e8c48(int param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  FUN_00467a98(param_1,param_2,param_3,param_4);
  if ((*(byte *)(param_1 + 0x26c) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x250) = DAT_004e8ce8;
    param_4 = param_4 - *(int *)(param_1 + 0x255);
    if (param_4 < -5) {
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfa4);
      *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 1;
    }
    else if (param_4 < 6) {
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfa3);
    }
    else {
      FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0xfa5);
      *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 2;
    }
    FUN_00466414(*(undefined4 *)(param_1 + 0x25c),*(undefined2 *)(*(int *)PTR_DAT_0066b760 + 0x44));
  }
  return;
}

