// Address: 0046eb78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046eb78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0046e97c(param_1);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    iVar1 = FUN_0046ef90(param_1);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      iVar4 = FUN_0046eac8(param_1,1);
    }
    else if (*(char *)(param_1 + 0x10) == '\x02') {
      iVar4 = FUN_0046eac8(param_1,2);
    }
    else {
      iVar4 = 0;
    }
    iVar2 = FUN_0046e97c(param_1);
    for (; iVar1 != 0; iVar1 = FUN_0046ef68(iVar1)) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        FUN_0046eeb8(iVar1,iVar4);
      }
      else {
        iVar3 = FUN_0046e9cc(iVar1);
        FUN_0046eeb8(iVar1,iVar3 + iVar4 / iVar2);
      }
      FUN_0046ed18(iVar1);
    }
  }
  return;
}

