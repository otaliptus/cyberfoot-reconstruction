// Address: 004a633c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a633c(int param_1,uint param_2)

{
  if (param_2 <= *(int *)(param_1 + 8) - 1U) {
    return *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4);
  }
  return 0;
}

