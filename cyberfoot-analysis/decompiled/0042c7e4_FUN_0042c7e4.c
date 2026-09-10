// Address: 0042c7e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042c7e4(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 local_2c [14];
  ushort local_1e;
  byte local_1c;
  undefined4 local_18;
  int local_c;
  
  FUN_0042c700(param_1,local_2c,param_4);
  if (local_1e < 9) {
    if (local_c == 0) {
      *param_2 = (1 << ((byte)local_1e & 0x1f)) * 4 + 0x28;
    }
    else {
      *param_2 = local_c * 4 + 0x28;
    }
  }
  else {
    *param_2 = 0x28;
    if ((local_1c & 3) != 0) {
      *param_2 = *param_2 + 0xc;
    }
  }
  *param_3 = local_18;
  return;
}

