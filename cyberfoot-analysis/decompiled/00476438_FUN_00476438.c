// Address: 00476438
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00476438(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  iVar1 = FUN_00404ba4(*param_1);
  iVar2 = FUN_00404ba4(param_2);
  if (iVar2 <= iVar1) {
    uVar3 = FUN_00404ba4(param_2);
    uVar4 = FUN_00404da4(param_2);
    uVar5 = FUN_00404da4(*param_1);
    iVar1 = FUN_00409800(uVar5,uVar4,uVar3);
    if (iVar1 == 0) {
      uVar6 = 1;
      uVar3 = FUN_00404ba4(param_2);
      FUN_00404e44(param_1,1,uVar3);
    }
  }
  return uVar6;
}

