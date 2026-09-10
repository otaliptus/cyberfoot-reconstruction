// Address: 0041ccb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0041ccb8(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0xc),iVar4);
      cVar1 = thunk_FUN_00403cb4(param_2,uVar2);
      if (cVar1 != '\0') {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

