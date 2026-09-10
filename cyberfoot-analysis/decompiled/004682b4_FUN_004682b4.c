// Address: 004682b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004682b4(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 8))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

