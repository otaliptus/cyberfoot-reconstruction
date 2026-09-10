// Address: 00513cd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00513cd0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((char)param_1[0xb8] != '\0') {
    FUN_005111dc(param_1,5);
  }
  iVar2 = FUN_0050ae9c(param_1[0x135]);
  if ((0 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x11c))(), 0 < iVar2)) {
    if ((*(byte *)((int)param_1 + 0x491) & 0x40) == 0) {
      uVar5 = (**(code **)(*param_1 + 0x138))();
      (**(code **)(*param_1 + 0x200))(param_1,param_1[0x128],uVar5);
    }
    else {
      iVar2 = param_1[0x136];
      iVar3 = (**(code **)(*param_1 + 0x11c))();
      if (iVar2 <= iVar3 + -1) {
        iVar3 = ((iVar3 + -1) - iVar2) + 1;
        do {
          cVar1 = (**(code **)(*param_1 + 0x130))(param_1,iVar2);
          if (cVar1 != '\0') {
            FUN_005118f0(param_1,iVar2,0);
          }
          iVar4 = FUN_0050f794(param_1,0);
          if (iVar4 + param_1[0x136] < iVar2) {
            return;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

