// Address: 0048c924
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048c924(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  local_14 = 0;
  iVar4 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar4 = piVar2[3] * piVar2[2] + iVar4;
      local_14 = piVar2[1] * piVar2[2] + local_14;
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar4 = piVar2[3] * piVar2[2] * 0x80 + iVar4;
      local_14 = piVar2[1] * piVar2[2] * 0x80 + local_14;
    }
  }
  if (0 < iVar4) {
    iVar3 = FUN_0048d0f8(param_1,iVar4,local_14,*(undefined4 *)(iVar1 + 0x4c));
    if (iVar3 < local_14) {
      iVar3 = iVar3 / iVar4;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = iVar3 * piVar2[3];
          FUN_0048d104(param_1,piVar2 + 0xc,piVar2[1] * piVar2[2]);
          piVar2[10] = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_0048c69c(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[9] = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = iVar3 * piVar2[3];
          FUN_0048d104(param_1,piVar2 + 0xc,piVar2[1] * piVar2[2] * 0x80);
          piVar2[10] = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_0048c770(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[9] = 0;
      }
    }
  }
  return;
}

