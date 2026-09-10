// Address: 0050f6c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050f6c0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  (**(code **)(*param_1 + 0x44))(param_1,param_3);
  FUN_0050f004(param_1,auStack_20);
  iVar2 = FUN_0050f404(param_1,1);
  *(int *)(param_3 + 4) = iStack_1c + iVar2;
  iVar2 = param_1[0x136];
  if (iVar2 <= param_2 + -1) {
    iVar4 = ((param_2 + -1) - iVar2) + 1;
    do {
      cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar2);
      if (cVar1 != '\0') {
        iVar3 = FUN_0050f404(param_1,4);
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + iVar3;
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + param_1[300];
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 4) + param_1[300];
  return;
}

