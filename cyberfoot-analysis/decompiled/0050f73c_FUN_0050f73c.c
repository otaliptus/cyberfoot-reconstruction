// Address: 0050f73c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050f73c(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  int local_1c;
  
  FUN_0050f004(param_1,auStack_20);
  iVar5 = param_1[0x136];
  if (iVar5 <= param_2 + -1) {
    iVar4 = ((param_2 + -1) - iVar5) + 1;
    do {
      cVar2 = (**(code **)(*param_1 + 300))(param_1,iVar5);
      if (cVar2 != '\0') {
        iVar1 = param_1[300];
        iVar3 = FUN_0050f404(param_1,4);
        local_1c = local_1c + iVar1 + iVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return local_1c;
}

