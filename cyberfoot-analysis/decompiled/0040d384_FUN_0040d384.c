// Address: 0040d384
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040d384(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 7;
  piVar4 = &DAT_0066c754;
  puVar5 = &DAT_0066c770;
  while( true ) {
    if (*piVar4 == 0) {
      return 0;
    }
    uVar1 = FUN_00404da4(param_1);
    uVar2 = FUN_00404da4(*piVar4);
    iVar3 = FUN_0040f0e8(uVar2,uVar1);
    if (iVar3 != 0) break;
    puVar5 = puVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return 0;
    }
  }
  return *puVar5;
}

