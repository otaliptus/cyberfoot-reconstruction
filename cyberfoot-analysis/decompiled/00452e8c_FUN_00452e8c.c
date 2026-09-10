// Address: 00452e8c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00452e8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0041edb0(*(undefined4 *)(param_1 + 0x23c));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_0044db94(*(undefined4 *)(param_1 + 0x23c),iVar3);
      if (param_2 == *(int *)(iVar2 + 0x28)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

