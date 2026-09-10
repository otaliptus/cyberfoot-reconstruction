// Address: 004864d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004864d8(int param_1)

{
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
  if ((*(int *)(param_1 + 0xb8) == 0) && (*(short *)(param_1 + 0xea) != 0)) {
    (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1);
  }
  return;
}

