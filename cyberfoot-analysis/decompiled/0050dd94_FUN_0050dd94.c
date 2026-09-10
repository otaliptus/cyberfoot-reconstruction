// Address: 0050dd94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050dd94(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  local_34 = param_1[0x136];
  iVar5 = 0;
  iVar6 = param_1[0x136];
  iVar3 = (**(code **)(*param_1 + 0x11c))();
  if (iVar6 <= iVar3 + -1) {
    iVar3 = ((iVar3 + -1) - iVar6) + 1;
    do {
      cVar2 = (**(code **)(*param_1 + 300))(param_1,iVar6);
      iVar4 = local_34;
      if (cVar2 != '\0') {
        iVar4 = (**(code **)(*param_1 + 0x120))(param_1,iVar6);
        iVar5 = iVar5 + iVar4 + param_1[0xae];
        FUN_0050f004(param_1,auStack_30);
        iVar1 = iStack_24;
        FUN_0050f004(param_1,auStack_20);
        iVar4 = iVar6;
        if (iVar1 - iStack_1c < iVar5) {
          return local_34;
        }
      }
      local_34 = iVar4;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return local_34;
}

