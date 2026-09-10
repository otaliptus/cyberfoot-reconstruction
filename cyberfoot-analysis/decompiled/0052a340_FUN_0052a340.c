// Address: 0052a340
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052a340(int param_1,int *param_2,LPRECT param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_00407174(*param_2,param_2[1],param_2[2] - *param_2,param_3,param_2[3] - param_2[1]);
  param_3->right = param_3->right + -1;
  param_3->bottom = param_3->bottom + -1;
  if (*(int *)(*(int *)(param_1 + 4) + 4) != 0x1fffffff) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x38);
    if (iVar1 == 1) {
      iVar1 = 1;
    }
    else {
      uVar2 = iVar1 + 1;
      iVar1 = (int)uVar2 >> 1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
      }
    }
    InflateRect(param_3,-iVar1,-iVar1);
  }
  return;
}

