// Address: 00467df0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467df0(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x5a) != '\0') {
    if (*(int *)(param_2 + 4) == 0) {
      FUN_004663a8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x70));
    }
    else {
      FUN_004663a8(param_1,*(undefined4 *)(param_2 + 8));
    }
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  return;
}

