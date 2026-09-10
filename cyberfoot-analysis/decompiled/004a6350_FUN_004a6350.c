// Address: 004a6350
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6350(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 <= *(int *)(param_1 + 8) - 1U) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4) = param_3;
  }
  return;
}

