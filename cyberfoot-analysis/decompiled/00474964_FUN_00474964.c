// Address: 00474964
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00474964(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar2 = (**(code **)*param_1)();
  iVar3 = (**(code **)*param_2)();
  if (extraout_EDX_00 == extraout_EDX && iVar3 == iVar2) {
    uVar4 = (**(code **)*param_1)();
    cVar1 = FUN_00409658(param_1[1],param_2[1],uVar4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

