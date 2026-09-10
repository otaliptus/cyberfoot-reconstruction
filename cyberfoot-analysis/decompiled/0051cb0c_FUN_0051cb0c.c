// Address: 0051cb0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051cb0c(int param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_0051c830(param_1,*(undefined4 *)(param_1 + 0x6c));
    return;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    if ((*(int *)(param_1 + 0x70) < 2) || (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x6c))) {
      FUN_0051c9d8();
    }
    else {
      FUN_0051ca1c();
    }
  }
  else {
    FUN_0051c93c();
  }
  return;
}

