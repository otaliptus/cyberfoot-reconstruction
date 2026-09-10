// Address: 00423edc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00423edc(undefined4 param_1,int param_2)

{
  undefined1 auStack_108 [256];
  
  while (0 < param_2) {
    if (param_2 < 0x101) {
      FUN_00421f98(param_1,auStack_108,param_2);
      param_2 = 0;
    }
    else {
      FUN_00421f98(param_1,auStack_108,0x100);
      param_2 = param_2 + -0x100;
    }
  }
  return;
}

