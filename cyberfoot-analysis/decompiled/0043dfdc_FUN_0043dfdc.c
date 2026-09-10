// Address: 0043dfdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043dfdc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(int *)(param_1 + 4)) {
    uVar1 = FUN_00430458(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    FUN_0043df98(param_1);
    if (*(short *)(param_1 + 0x2a) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
    }
  }
  return;
}

