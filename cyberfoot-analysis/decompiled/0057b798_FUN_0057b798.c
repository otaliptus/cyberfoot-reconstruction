// Address: 0057b798
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057b798(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x28c)) {
    *(char *)(param_1 + 0x28c) = param_2;
    if (param_2 == '\0') {
      if (*(int *)(param_1 + 0x240) != 0) {
        FUN_0043b234(*(int *)(param_1 + 0x240),1);
      }
      if (*(int *)(param_1 + 0x244) != 0) {
        FUN_0043b234(*(int *)(param_1 + 0x244),0);
      }
    }
    else if (param_2 == '\x01') {
      if (*(int *)(param_1 + 0x240) != 0) {
        FUN_0043b234(*(int *)(param_1 + 0x240),0);
      }
      if (*(int *)(param_1 + 0x244) != 0) {
        FUN_0043b234(*(int *)(param_1 + 0x244),1);
      }
    }
    FUN_0057aaa0(param_1);
  }
  return;
}

