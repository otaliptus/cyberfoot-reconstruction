// Address: 0050ebdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050ebdc(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xb8]) {
    *(char *)(param_1 + 0xb8) = param_2;
    if (param_2 == '\0') {
      (**(code **)(*param_1 + 0x1e8))();
    }
    else {
      (**(code **)(*param_1 + 0x1ac))(param_1,param_1[0x13f],0);
    }
    FUN_005111dc(param_1,5);
    FUN_005111dc(param_1,4);
    FUN_00513cd0(param_1);
  }
  return;
}

