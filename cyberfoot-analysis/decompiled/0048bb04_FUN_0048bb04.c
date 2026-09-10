// Address: 0048bb04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048bb04(int param_1)

{
  char cVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x28) + 8) != 0) {
    return 0;
  }
  if ((*(int **)(param_1 + 0x2c) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

