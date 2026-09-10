// Address: 00580280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580280(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = param_2;
    if (*(char *)(*(int *)(param_1 + 4) + 0x169) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x260) = 3;
    }
    FUN_00584718(*(undefined4 *)(param_1 + 4));
  }
  return;
}

