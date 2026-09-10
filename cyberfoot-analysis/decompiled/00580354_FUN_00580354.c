// Address: 00580354
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580354(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = param_2;
    if (*(char *)(*(int *)(param_1 + 4) + 0x169) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x260) = 3;
    }
    FUN_00584718(*(undefined4 *)(param_1 + 4));
  }
  return;
}

