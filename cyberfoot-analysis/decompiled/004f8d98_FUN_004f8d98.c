// Address: 004f8d98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f8d98(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_004f8d14(param_1,param_2);
  if (0 < iVar1) {
    iVar1 = FUN_004f5b28(param_1[0x166],param_2);
    iVar1 = *(int *)(iVar1 + 0x18);
    if ((iVar1 != 0) && (iVar2 = (**(code **)(*param_1 + 0x11c))(), -1 < iVar2 + -1)) {
      iVar4 = 0;
      do {
        iVar3 = FUN_004f5b28(param_1[0x166],iVar4);
        if (iVar1 == iVar3) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return -1;
}

