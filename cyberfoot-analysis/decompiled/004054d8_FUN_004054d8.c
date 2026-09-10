// Address: 004054d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004054d8(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00405260(param_1);
  if (0 < iVar1) {
    iVar2 = FUN_00405260(*param_2);
    if (param_3 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_3 + -1;
      if (iVar2 < param_3 + -1) {
        iVar4 = iVar2;
      }
    }
    iVar3 = FUN_00404fc8(iVar1 + iVar2);
    if (0 < iVar4) {
      FUN_00402a04(*param_2,iVar3,iVar4 * 2);
    }
    FUN_00402a04(param_1,iVar3 + iVar4 * 2,iVar1 * 2);
    if (iVar4 < iVar2) {
      FUN_00402a04(*param_2 + iVar4 * 2,iVar3 + (iVar1 + iVar4) * 2,(iVar2 - iVar4) * 2);
    }
    FUN_00404fe0(param_2,iVar3);
  }
  return;
}

