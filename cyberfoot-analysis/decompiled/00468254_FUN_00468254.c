// Address: 00468254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00468254(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x38))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

