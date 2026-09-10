// Address: 004f9c30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f9c30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x16e];
  if ((param_2 != iVar2) && (-1 < param_2)) {
    if (iVar2 < param_2) {
      (**(code **)(*param_1 + 0x1d0))(param_1,param_2 - iVar2);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x11c))();
      if (iVar2 < iVar1) {
        if (param_2 + 1 <= param_1[0x16e]) {
          iVar2 = (param_1[0x16e] - (param_2 + 1)) + 1;
          do {
            (**(code **)(*param_1 + 0x1e4))(param_1,0);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x11c))();
        if (param_2 + 1 <= iVar2) {
          iVar2 = (iVar2 - (param_2 + 1)) + 1;
          do {
            (**(code **)(*param_1 + 0x1e4))(param_1,0);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    param_1[0x16e] = param_2;
    (**(code **)(*param_1 + 0x7c))();
  }
  return;
}

