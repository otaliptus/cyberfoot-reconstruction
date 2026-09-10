// Address: 00469f58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469f58(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x60] != 0) {
    if ((param_1[0x67] != 0) && (iVar1 = *(int *)(param_1[0x67] + 8), -1 < iVar1 + -1)) {
      iVar2 = 0;
      do {
        FUN_0041e01c(param_1[0x67],iVar2);
        FUN_00469f58();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*param_1 + 0xb0))();
  }
  return;
}

