// Address: 004c5368
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c5368(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((('\0' < *(char *)(param_4 + -9)) &&
      (*(int *)(param_4 + -0x10) == (int)*(char *)(param_4 + -9))) ||
     ((*(int *)(param_4 + -0x10) == 0 && (*(char *)(param_4 + 0xc) != '\0')))) {
    if (*(int *)(param_4 + -8) == 0) {
      FUN_004c534c(0x30);
    }
    FUN_004c534c(*(undefined1 *)(param_4 + -0x11));
  }
  if (((char)param_1 != '\0') || (0 < *(int *)(param_4 + -8))) {
    FUN_004c534c(param_1 + 0x30);
  }
  *(int *)(param_4 + -0x10) = *(int *)(param_4 + -0x10) + 1;
  return;
}

