// Address: 004015c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004015c0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int local_18;
  int local_14;
  
  piVar4 = param_1;
  while( true ) {
    uVar1 = *param_2;
    uVar2 = piVar4[2];
    if ((uVar2 <= uVar1) && (uVar1 + param_2[1] <= uVar2 + piVar4[3])) break;
    piVar4 = (int *)*piVar4;
    if (param_1 == piVar4) {
      return 0;
    }
  }
  if (uVar1 == uVar2) {
    piVar4[2] = piVar4[2] + param_2[1];
    piVar4[3] = piVar4[3] - param_2[1];
    if (piVar4[3] == 0) {
      FUN_00401538(piVar4);
    }
  }
  else if (uVar1 + param_2[1] == uVar2 + piVar4[3]) {
    piVar4[3] = piVar4[3] - param_2[1];
  }
  else {
    local_18 = *param_2 + param_2[1];
    local_14 = (piVar4[2] + piVar4[3]) - local_18;
    piVar4[3] = uVar1 - uVar2;
    cVar3 = FUN_00401508(piVar4,&local_18);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  return 1;
}

