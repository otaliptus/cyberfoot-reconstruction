// Address: 00580bb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580bb0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x200)) {
    *(int *)(param_1 + 0x200) = param_2;
    if (*(char *)(param_1 + 0x169) == '\0') {
      *(undefined1 *)(param_1 + 0x260) = 3;
    }
    FUN_00466754();
  }
  return;
}

