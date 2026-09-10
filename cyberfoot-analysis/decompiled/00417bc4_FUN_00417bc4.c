// Address: 00417bc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_00417bc4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\0';
  iVar2 = FUN_00405ef4(*param_1);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      if (*(int *)(*param_1 + iVar3 * 4) != 0) {
        cVar4 = '\x01';
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (cVar4 != '\0') {
    iVar2 = FUN_00405ef4(*param_1);
    if (-1 < iVar2) {
      if (*(int *)(*param_1 + iVar2 * 4) == 0) {
        for (; *(int *)(*param_1 + iVar2 * 4) == 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(param_2 + iVar2 * 4);
        }
        piVar1 = (int *)(*param_1 + iVar2 * 4);
        *piVar1 = *piVar1 + -1;
      }
      else {
        piVar1 = (int *)(*param_1 + iVar2 * 4);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return cVar4;
}

