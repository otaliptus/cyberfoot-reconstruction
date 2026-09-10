// Address: 00405b9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00405b9c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00404ba4(param_1);
  uVar2 = FUN_00404da4(param_1);
  iVar3 = FUN_00404a14(param_2,param_3 + -1,uVar2,uVar1);
  *(undefined2 *)(param_2 + iVar3 * 2) = 0;
  return param_2;
}

