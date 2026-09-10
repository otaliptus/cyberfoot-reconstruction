// Address: 004aa2cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004aa2cc(int param_1,int param_2)

{
  if (param_2 < 0xffff) {
    *(undefined4 *)(param_1 + 0x130) = 0xffff;
    return;
  }
  *(int *)(param_1 + 0x130) = param_2;
  return;
}

