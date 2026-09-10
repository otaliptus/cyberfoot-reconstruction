// Address: 00512e2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00512e2c(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  undefined1 local_20 [4];
  int local_1c;
  int iStack_14;
  
  FUN_0050f004(param_1,local_20);
  local_24 = param_1[0x136];
  iVar5 = param_1[0x136];
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (iVar5 <= iVar2 + -1) {
    iVar6 = ((iVar2 + -1) - iVar5) + 1;
    iVar2 = local_1c;
    do {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar5);
      iVar3 = local_24;
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*param_1 + 0x120))(param_1,iVar5);
        iVar4 = FUN_0050f404(param_1,4);
        iVar2 = iVar2 + iVar3 + iVar4;
        FUN_0050f004(param_1,local_20);
        iVar3 = iVar5;
        if (iStack_14 < iVar2) {
          return local_24;
        }
      }
      local_24 = iVar3;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return local_24;
}

