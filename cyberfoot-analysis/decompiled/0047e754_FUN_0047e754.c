// Address: 0047e754
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e754(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((char)(*(int **)(param_1 + 4))[0x84] != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 200))();
    if (cVar1 == '\0') {
      FUN_0047ee88(param_1,0);
    }
    else {
      iVar2 = FUN_00469730(*(undefined4 *)(param_1 + 4));
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          if (*(char *)(param_1 + 0x18) == '\0') {
            FUN_004696f4(*(undefined4 *)(param_1 + 4),iVar3);
            FUN_0047e680();
          }
          else {
            FUN_004696f4(*(undefined4 *)(param_1 + 4),iVar3);
            FUN_0047e6ec();
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_0047ee88(param_1,*(undefined2 *)(param_1 + 0x1a));
    }
  }
  return;
}

