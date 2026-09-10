// Address: 00504280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00504280(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_20 [4];
  int local_1c;
  
  FUN_0050f004(param_1,local_20);
  iVar4 = param_1[0x136];
  if ((local_1c <= param_3) && (iVar5 = local_1c, param_2 < 0xd)) {
    for (; iVar3 = (**(code **)(*param_1 + 0x11c))(), iVar4 <= iVar3 + -1; iVar4 = iVar4 + 1) {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar4);
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*param_1 + 0x120))(param_1,iVar4);
        iVar2 = FUN_0050f404(param_1,2);
        iVar5 = iVar5 + iVar3 + iVar2;
        if ((iVar5 + -3 < param_3) && (param_3 < iVar5 + 1)) {
          return iVar4;
        }
      }
    }
  }
  return -1;
}

