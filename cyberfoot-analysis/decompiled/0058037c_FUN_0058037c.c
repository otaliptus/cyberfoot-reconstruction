// Address: 0058037c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0058037c(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  if (*(float *)(param_1 + 0x1c) != param_4) {
    *(float *)(param_1 + 0x1c) = param_4;
    if (*(char *)(*(int *)(param_1 + 4) + 0x169) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x260) = 3;
    }
    FUN_00584718(*(undefined4 *)(param_1 + 4));
  }
  return;
}

