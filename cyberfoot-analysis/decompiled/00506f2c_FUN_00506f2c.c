// Address: 00506f2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00506f2c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00467ee8(param_1);
  if (*(char *)(param_1 + 0x59) != '\0') {
    iVar1 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))(*(int **)(param_1 + 0x4d4),iVar3);
        if (*(char *)(iVar2 + 0x7f) != '\0') {
          iVar2 = (**(code **)(**(int **)(param_1 + 0x4d4) + 0x30))
                            (*(int **)(param_1 + 0x4d4),iVar3);
          (**(code **)(**(int **)(iVar2 + 0x58) + 8))
                    (*(int **)(iVar2 + 0x58),*(undefined4 *)(param_1 + 0x68));
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

