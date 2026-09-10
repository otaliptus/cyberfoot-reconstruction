// Address: 00643740
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00643740(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) {
    if (*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) {
      if (*(int *)(param_2 + 0x14) != *(int *)(param_1 + 0x14)) {
        if (*(int *)(param_1 + 0x14) < *(int *)(param_2 + 0x14)) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = 1;
        }
      }
    }
    else if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

