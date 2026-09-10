// Address: 0048bbc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048bbc4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))();
    return uVar1;
  }
  if (*(char *)(param_1 + 0x43) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10);
  }
  else {
    FUN_0048b13c(param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  return uVar1;
}

