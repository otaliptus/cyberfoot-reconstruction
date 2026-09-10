// Address: 004789dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004789dc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = FUN_00478b4c(*(int *)(param_1 + 100));
    if (-1 < iVar1 + -1) {
      iVar3 = 0;
      do {
        iVar2 = FUN_00478b5c(*(undefined4 *)(param_1 + 100),iVar3);
        if (((param_1 != iVar2) && (*(char *)(iVar2 + 0x3d) != '\0')) &&
           (*(char *)(iVar2 + 0x3f) == *(char *)(param_1 + 0x3f))) {
          FUN_00478a24(iVar2,0);
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

