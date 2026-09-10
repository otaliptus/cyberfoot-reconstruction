// Address: 004985e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004985e4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x44);
  do {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x80) = param_2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x54);
  do {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x114) = param_2;
    }
    if (piVar1[4] != 0) {
      *(undefined4 *)(piVar1[4] + 0x114) = param_2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  return;
}

