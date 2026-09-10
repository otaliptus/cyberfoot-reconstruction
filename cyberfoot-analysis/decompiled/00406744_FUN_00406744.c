// Address: 00406744
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00406744(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_00662040;
  if ((DAT_00662040 != (int *)0x0) && (DAT_00662040[1] == param_1)) {
    DAT_00662040 = (int *)*DAT_00662040;
    FUN_0040281c(piVar2,8);
    return;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (piVar1[1] == param_1)) break;
    piVar2 = (int *)*piVar2;
  }
  *piVar2 = *piVar1;
  FUN_0040281c(piVar1,8);
  return;
}

