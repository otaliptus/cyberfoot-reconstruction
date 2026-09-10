// Address: 00497c38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497c38(int *param_1)

{
  switch(param_1[10]) {
  case 0:
    FUN_00497cac(param_1,0);
    return;
  case 1:
    FUN_00497cac(param_1,1);
    return;
  case 2:
    FUN_00497cac(param_1,3);
    return;
  case 3:
    FUN_00497cac(param_1,3);
    return;
  case 4:
    FUN_00497cac(param_1,4);
    return;
  case 5:
    FUN_00497cac(param_1,5);
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)();
    return;
  }
}

