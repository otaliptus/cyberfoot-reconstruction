// Address: 00420fc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00420fc0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (((iVar1 < 0) || (param_3 < 0)) || (iVar2 = *(int *)(param_1 + 8) - iVar1, iVar2 < 1)) {
    iVar2 = 0;
  }
  else {
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    FUN_00402a04(*(int *)(param_1 + 4) + iVar1,param_2,iVar2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
  }
  return iVar2;
}

