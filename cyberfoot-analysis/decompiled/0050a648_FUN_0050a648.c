// Address: 0050a648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a648(int param_1,char param_2)

{
  *(char *)(param_1 + 0x7f) = param_2;
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x38) != 0)) {
    *(undefined1 *)(param_1 + 0x80) = 1;
    (**(code **)(**(int **)(param_1 + 0x58) + 8))
              (*(int **)(param_1 + 0x58),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x68));
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}

