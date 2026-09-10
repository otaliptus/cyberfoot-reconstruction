// Address: 004789b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004789b4(int *param_1,undefined4 param_2)

{
  undefined1 in_ZF;
  
  FUN_00404cf0(param_1[0xc],param_2);
  if (!(bool)in_ZF) {
    FUN_00404928(param_1 + 0xc,param_2);
    (**(code **)(*param_1 + 0x3c))(param_1,1);
  }
  return;
}

