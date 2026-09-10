// Address: 0048c408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048c408(int *param_1)

{
  int iVar1;
  
  if (((param_1[5] == 0xcd) || (param_1[5] == 0xce)) && (param_1[0x10] == 0)) {
    if ((uint)param_1[0x23] < (uint)param_1[0x1d]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x43;
      (**(code **)*param_1)();
    }
    (**(code **)(param_1[0x69] + 4))();
    param_1[5] = 0xd2;
  }
  else if (param_1[5] == 0xcf) {
    param_1[5] = 0xd2;
  }
  else if (param_1[5] != 0xd2) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  do {
    if (*(int *)(param_1[0x6d] + 0x14) != 0) {
      (**(code **)(param_1[6] + 0x18))();
      FUN_00497780(param_1);
      return 1;
    }
    iVar1 = (**(code **)param_1[0x6d])();
  } while (iVar1 != 0);
  return 0;
}

