// Address: 0048dabc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048dabc(int *param_1)

{
  int iVar1;
  
  if (((param_1[5] == 0xcd) || (param_1[5] == 0xce)) && (param_1[0x10] != 0)) {
    (**(code **)(param_1[0x69] + 4))();
    param_1[5] = 0xd0;
  }
  else if (param_1[5] != 0xd0) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  while ((param_1[0x24] <= param_1[0x26] && (*(int *)(param_1[0x6d] + 0x14) == 0))) {
    iVar1 = (**(code **)param_1[0x6d])();
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[5] = 0xcf;
  return 1;
}

