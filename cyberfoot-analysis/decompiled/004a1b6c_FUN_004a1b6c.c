// Address: 004a1b6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a1b6c(int param_1)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x34) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

