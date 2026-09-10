// Address: 004864ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004864ac(int param_1)

{
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  if ((*(int *)(param_1 + 0xb8) == 1) && (*(short *)(param_1 + 0xe2) != 0)) {
    (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
  }
  return;
}

