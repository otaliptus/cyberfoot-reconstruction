// Address: 0046c144
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046c144(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x30)) {
      iVar2 = FUN_00403c80(iVar3);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x38) != 0)) &&
         (cVar1 = FUN_00403c80(iVar2,param_2), cVar1 != '\0')) {
        return true;
      }
    }
    iVar3 = FUN_0047e4c0(param_1);
    if ((iVar3 != 0) && (cVar1 = FUN_00403c80(iVar3,param_2), cVar1 != '\0')) {
      return true;
    }
  }
  iVar3 = FUN_004630f0(0xb016,*(undefined2 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  return iVar3 != 0;
}

