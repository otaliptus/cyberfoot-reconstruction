// Address: 00479328
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00479328(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x3c))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

