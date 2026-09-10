// Address: 0044e25c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0044e25c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (*(char *)(iVar4 + 0x244) == '\0') {
    cVar1 = FUN_0046cde4(iVar4);
    if (cVar1 != '\0') {
      uVar2 = FUN_0044e73c(param_1);
      uVar3 = FUN_0046cae0(iVar4);
      iVar4 = FUN_00432eb8(uVar3,uVar2);
      return iVar4 != 0;
    }
  }
  return (bool)*(undefined1 *)(param_1 + 0x2a);
}

