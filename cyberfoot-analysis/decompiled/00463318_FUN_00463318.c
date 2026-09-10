// Address: 00463318
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00463318(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f024(&DAT_00463358,param_1);
  if (iVar1 == 0) {
    FUN_00404928(param_2,param_1);
  }
  else {
    FUN_00404e04(param_1,iVar1 + 1,0x7fffffff,param_2);
  }
  return;
}

