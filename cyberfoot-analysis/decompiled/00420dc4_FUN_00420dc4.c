// Address: 00420dc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00420dc4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0x18))(param_1,0,*param_1,param_4,param_5);
  SetEndOfFile((HANDLE)param_1[1]);
  FUN_0040f9a0();
  return;
}

