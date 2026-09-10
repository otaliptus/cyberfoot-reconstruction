// Address: 00584a04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584a04(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    cVar1 = FUN_0058436c(param_1);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0x34))
                (*(int **)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x4c));
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0x40))
                (*(int **)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x48));
      if (*(char *)(param_1 + 600) == '\0') {
        FUN_00584a90(param_1);
      }
      else {
        FUN_00584e08(param_1);
      }
      if (*(char *)(param_1 + 0x261) != '\0') {
        if (*(char *)(param_1 + 0x21d) == '\x01') {
          FUN_00585920(param_1);
        }
        else {
          FUN_00585454(param_1);
        }
      }
      FUN_0042ae64(*(undefined4 *)(param_1 + 0x160),0,0,*(undefined4 *)(param_1 + 0x1f8));
    }
  }
  return;
}

