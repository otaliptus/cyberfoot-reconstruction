// Address: 004987d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004987d4(int *param_1)

{
  int iVar1;
  
  if (param_1[5] != 100) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(param_1[6] + 8))();
  FUN_004990a0(param_1);
  (**(code **)(param_1[0x56] + 0x10))();
  (**(code **)(param_1[6] + 0x10))();
  return;
}

