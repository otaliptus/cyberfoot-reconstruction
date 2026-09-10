// Address: 00504314
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00504314(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  int local_1c;
  
  FUN_0050f004(param_1,auStack_20);
  iVar3 = param_1[0x136];
  iVar4 = local_1c;
  if (local_1c <= param_3) {
    for (; iVar2 = (**(code **)(*param_1 + 0x11c))(), iVar3 <= iVar2 + -1; iVar3 = iVar3 + 1) {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar3);
      if (cVar1 != '\0') {
        iVar2 = FUN_0050f404(param_1,1);
        iVar4 = iVar4 + iVar2 + param_1[300];
        if (param_3 <= iVar4) {
          return iVar3;
        }
        iVar2 = FUN_0050f404(param_1,3);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return iVar3;
}

