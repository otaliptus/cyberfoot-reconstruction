// Address: 004052cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004052cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00405260(param_2);
  iVar2 = FUN_00405260(param_3);
  if ((iVar1 != 0) || (iVar2 != 0)) {
    iVar3 = FUN_00404fc8(iVar2 + iVar1);
    FUN_00402a04(param_2,iVar3,iVar1 * 2);
    FUN_00402a04(param_3,iVar3 + iVar1 * 2,iVar2 * 2);
    FUN_00404fe0(param_1,iVar3);
  }
  return;
}

