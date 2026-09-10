// Address: 00427134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00427134(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0041e1b8();
    if (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0) {
      FUN_00403a84();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

