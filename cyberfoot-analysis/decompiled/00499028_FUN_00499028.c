// Address: 00499028
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499028(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_004988fc(param_1,0xd8);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x44);
  do {
    if (*piVar2 != 0) {
      FUN_00498948(param_1,iVar1);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 4);
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x54);
    do {
      if (*piVar2 != 0) {
        FUN_00498a2c(param_1,iVar1,0);
      }
      if (piVar2[4] != 0) {
        FUN_00498a2c(param_1,iVar1,1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 4);
  }
  FUN_004988fc(param_1,0xd9);
  return;
}

