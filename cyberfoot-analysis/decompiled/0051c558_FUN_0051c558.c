// Address: 0051c558
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0051c558(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  if (*(int *)(param_1 + 0x50) < 1) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x54) = 4;
      }
    }
    else if (iVar1 == 1) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 8;
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x54) = 2;
      }
    }
    else if (iVar1 == 2) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 4;
      if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        *(undefined4 *)(param_1 + 0x54) = 1;
      }
    }
    else if (iVar1 == 3) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 2;
    }
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x54)) {
      return 0;
    }
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x28);
  }
  return 1;
}

