// Address: 0040a668
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040a668(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040a5ac(&DAT_0040a6ac,param_1);
  if ((iVar1 < 1) || (*(char *)(param_1 + -1 + iVar1) != '.')) {
    FUN_004048d4(param_2);
  }
  else {
    FUN_00404e04(param_1,iVar1,0x7fffffff,param_2);
  }
  return;
}

