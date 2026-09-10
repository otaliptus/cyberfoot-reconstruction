// Address: 0049a308
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049a308(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x55];
  *(undefined4 *)(iVar1 + 8) = 0;
  FUN_0049a2bc(param_1);
  if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x40) != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
    }
    *(code **)(iVar1 + 4) = FUN_0049a39c;
  }
  else if (param_2 == 2) {
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
    }
    *(code **)(iVar1 + 4) = FUN_0049a830;
  }
  else if (param_2 == 3) {
    if (*(int *)(iVar1 + 0x40) == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 4;
      (**(code **)*param_1)();
    }
    *(code **)(iVar1 + 4) = FUN_0049a5ac;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  return;
}

