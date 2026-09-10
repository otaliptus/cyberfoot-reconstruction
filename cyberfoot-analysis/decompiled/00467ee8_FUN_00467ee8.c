// Address: 00467ee8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467ee8(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x59) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      FUN_004662fc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x68));
    }
    else {
      FUN_004662fc(param_1,*(undefined4 *)(param_2 + 8));
    }
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  return;
}

