// Address: 004d0128
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d0128(int *param_1,int param_2)

{
  if ((((*(int *)(param_2 + 4) == param_1[0x8e]) && (param_1 != *(int **)(param_2 + 8))) &&
      (*(char *)((int)*(int **)(param_2 + 8) + 0x233) != '\0')) &&
     (*(char *)((int)param_1 + 0x233) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x233) = 0;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

