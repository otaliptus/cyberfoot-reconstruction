// Address: 0040f024
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040f024(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = FUN_00404da4(param_1);
  iVar2 = FUN_00404da4(param_2);
  iVar3 = FUN_0040f0e8(iVar2,uVar1);
  if (iVar3 != 0) {
    iVar4 = (iVar3 - iVar2) + 1;
  }
  return iVar4;
}

