// Address: 004792c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004792c8(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x28))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

