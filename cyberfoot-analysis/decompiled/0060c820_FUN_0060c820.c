// Address: 0060c820
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0060c820(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0) || (param_2 != 1)) {
    if ((-1 < param_1) && (param_2 == 2)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if ((param_1 < 0) && (param_2 == 1)) {
    return 1;
  }
  if ((param_1 < 0) && (param_2 == 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

