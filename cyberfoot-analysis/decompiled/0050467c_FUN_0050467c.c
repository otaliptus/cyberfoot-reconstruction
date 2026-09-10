// Address: 0050467c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050467c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  int local_1c;
  int local_14;
  
  FUN_0050f004(param_1,auStack_20);
  iVar3 = param_1[0x136];
  iVar4 = local_1c;
  while( true ) {
    FUN_0050f004(param_1,auStack_20);
    if (local_14 < iVar4) {
      return iVar4;
    }
    iVar2 = (**(code **)(*param_1 + 0x11c))();
    if (iVar2 <= iVar3) break;
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,iVar3);
    iVar1 = FUN_0050f404(param_1,3);
    iVar4 = iVar4 + iVar2 + iVar1;
    iVar3 = iVar3 + 1;
  }
  return iVar4;
}

