// Address: 0046f170
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046f170(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_004709f0();
  }
  return;
}

