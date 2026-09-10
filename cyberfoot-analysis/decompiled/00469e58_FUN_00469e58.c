// Address: 00469e58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00469e58(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0041e078(*(undefined4 *)(param_1 + 0x19c),param_2);
  iVar1 = iVar1 + 1;
  iVar3 = *(int *)(*(int *)(param_1 + 0x19c) + 8) + -1;
  if (iVar1 <= iVar3) {
    iVar3 = (iVar3 - iVar1) + 1;
    do {
      iVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x19c),iVar1);
      if (*(int *)(iVar2 + 0x180) != 0) {
        return *(int *)(iVar2 + 0x180);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

