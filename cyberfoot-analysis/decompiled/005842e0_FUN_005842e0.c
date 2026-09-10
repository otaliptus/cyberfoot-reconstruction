// Address: 005842e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005842e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    cVar1 = FUN_0058436c(param_1);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0x34))
                (*(int **)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x4c));
      (**(code **)(**(int **)(param_1 + 0x1f8) + 0x40))
                (*(int **)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x48));
      if ((*(char *)(param_1 + 0x261) != '\0') && (*(char *)(param_1 + 0x21d) == '\x01')) {
        uVar2 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x2c))();
        (**(code **)(**(int **)(param_1 + 0x1fc) + 0x40))(*(int **)(param_1 + 0x1fc),uVar2);
        uVar2 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x20))();
        (**(code **)(**(int **)(param_1 + 0x1fc) + 0x34))(*(int **)(param_1 + 0x1fc),uVar2);
      }
      FUN_00584438(param_1);
      FUN_00466754(param_1);
    }
  }
  return;
}

