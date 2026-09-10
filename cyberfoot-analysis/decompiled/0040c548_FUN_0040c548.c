// Address: 0040c548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040c548(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0x100 - *(int *)(param_4 + -0x104);
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  if (iVar1 != 0) {
    FUN_00402a04(param_1,param_4 + -0x100 + *(int *)(param_4 + -0x104),iVar1);
  }
  *(int *)(param_4 + -0x104) = *(int *)(param_4 + -0x104) + iVar1;
  return;
}

