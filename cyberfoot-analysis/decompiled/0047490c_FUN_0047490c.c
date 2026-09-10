// Address: 0047490c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047490c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 8), -1 < iVar3 + -1)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x4c),iVar2);
      if (param_2 == iVar1) {
        *(undefined4 *)(param_2 + 4) = 0;
        FUN_0041df0c(*(undefined4 *)(param_1 + 0x4c),iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

