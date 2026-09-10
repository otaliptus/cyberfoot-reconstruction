// Address: 0040d2b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040d2b8(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_0040d174(param_1,param_2);
  iVar1 = FUN_00404ba4(param_1);
  if ((*param_2 <= iVar1) && (*(char *)(param_1 + -1 + *param_2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}

