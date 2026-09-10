// Address: 0050f5f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0050f5f8(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  
  FUN_0050f004(param_1,local_1c);
  local_20 = FUN_0050f404(param_1,1);
  local_20 = local_18 + local_20;
  iVar4 = param_1[0x136];
  if (iVar4 <= param_2 + -1) {
    iVar5 = ((param_2 + -1) - iVar4) + 1;
    do {
      iVar2 = (**(code **)(*param_1 + 0x11c))();
      if (iVar4 < iVar2) {
        cVar1 = (**(code **)(*param_1 + 300))(param_1,iVar4);
        if (cVar1 == '\0') {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0x120))(param_1,iVar4);
        }
      }
      else {
        iVar2 = param_1[0x127];
      }
      if (0 < iVar2) {
        iVar3 = FUN_0050f404(param_1,4);
        local_20 = local_20 + iVar2 + iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return local_20;
}

