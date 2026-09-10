// Address: 004992b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004992b8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *local_a58;
  int iStack_a54;
  int local_a4c;
  int *piStack_a3c;
  int aiStack_a38 [10];
  int local_a10 [640];
  
  if (param_1[0x29] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x13;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)();
  }
  local_a58 = (int *)param_1[0x2a];
  if ((local_a58[5] == 0) && (local_a58[6] == 0x3f)) {
    param_1[0x38] = 0;
    piVar6 = aiStack_a38;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
  }
  else {
    param_1[0x38] = 1;
    piVar6 = local_a10;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      iVar7 = 0;
      do {
        *piVar6 = -1;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x40);
    }
  }
  for (iStack_a54 = 1; iStack_a54 <= param_1[0x29]; iStack_a54 = iStack_a54 + 1) {
    iVar7 = *local_a58;
    if ((iVar7 < 1) || (4 < iVar7)) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x1a;
      *(int *)(iVar1 + 0x18) = iVar7;
      *(undefined4 *)(iVar1 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    local_a4c = 0;
    piVar6 = local_a58;
    if (0 < iVar7) {
      do {
        iVar1 = piVar6[1];
        if ((iVar1 < 0) || (param_1[0xe] <= iVar1)) {
          iVar2 = *param_1;
          *(undefined4 *)(iVar2 + 0x14) = 0x13;
          *(int *)(iVar2 + 0x18) = iStack_a54;
          (**(code **)*param_1)();
        }
        if ((0 < local_a4c) && (iVar1 <= *piVar6)) {
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x13;
          *(int *)(iVar1 + 0x18) = iStack_a54;
          (**(code **)*param_1)();
        }
        local_a4c = local_a4c + 1;
        piVar6 = piVar6 + 1;
      } while (local_a4c < iVar7);
    }
    iVar1 = local_a58[5];
    iVar2 = local_a58[6];
    iVar3 = local_a58[7];
    iVar4 = local_a58[8];
    if (param_1[0x38] == 0) {
      if ((((iVar1 != 0) || (iVar2 != 0x3f)) || (iVar3 != 0)) || (iVar4 != 0)) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x11;
        *(int *)(iVar1 + 0x18) = iStack_a54;
        (**(code **)*param_1)();
      }
      local_a4c = 0;
      piVar6 = local_a58;
      if (0 < iVar7) {
        do {
          piVar6 = piVar6 + 1;
          iVar1 = *piVar6;
          if (aiStack_a38[iVar1] != 0) {
            iVar2 = *param_1;
            *(undefined4 *)(iVar2 + 0x14) = 0x13;
            *(int *)(iVar2 + 0x18) = iStack_a54;
            (**(code **)*param_1)();
          }
          aiStack_a38[iVar1] = 1;
          local_a4c = local_a4c + 1;
        } while (local_a4c < iVar7);
      }
    }
    else {
      if (((((iVar1 < 0) || (0x3f < iVar1)) || ((iVar2 < iVar1 || ((0x3f < iVar2 || (iVar3 < 0))))))
          || (10 < iVar3)) || ((iVar4 < 0 || (10 < iVar4)))) {
        iVar8 = *param_1;
        *(undefined4 *)(iVar8 + 0x14) = 0x11;
        *(int *)(iVar8 + 0x18) = iStack_a54;
        (**(code **)*param_1)();
      }
      if (iVar1 == 0) {
        if (iVar2 != 0) {
          iVar8 = *param_1;
          *(undefined4 *)(iVar8 + 0x14) = 0x11;
          *(int *)(iVar8 + 0x18) = iStack_a54;
          (**(code **)*param_1)();
        }
      }
      else if (iVar7 != 1) {
        iVar8 = *param_1;
        *(undefined4 *)(iVar8 + 0x14) = 0x11;
        *(int *)(iVar8 + 0x18) = iStack_a54;
        (**(code **)*param_1)();
      }
      local_a4c = 0;
      piStack_a3c = local_a58;
      if (0 < iVar7) {
        do {
          piStack_a3c = piStack_a3c + 1;
          iVar8 = *piStack_a3c;
          if ((iVar1 != 0) && (local_a10[iVar8 * 0x40] < 0)) {
            iVar5 = *param_1;
            *(undefined4 *)(iVar5 + 0x14) = 0x11;
            *(int *)(iVar5 + 0x18) = iStack_a54;
            (**(code **)*param_1)();
          }
          piVar6 = local_a10 + iVar8 * 0x40 + iVar1;
          for (iVar8 = iVar1; iVar8 <= iVar2; iVar8 = iVar8 + 1) {
            if (*piVar6 < 0) {
              if (iVar3 != 0) {
                iVar5 = *param_1;
                *(undefined4 *)(iVar5 + 0x14) = 0x11;
                *(int *)(iVar5 + 0x18) = iStack_a54;
                (**(code **)*param_1)();
              }
            }
            else if ((iVar3 != *piVar6) || (iVar3 + -1 != iVar4)) {
              iVar5 = *param_1;
              *(undefined4 *)(iVar5 + 0x14) = 0x11;
              *(int *)(iVar5 + 0x18) = iStack_a54;
              (**(code **)*param_1)();
            }
            *piVar6 = iVar4;
            piVar6 = piVar6 + 1;
          }
          local_a4c = local_a4c + 1;
        } while (local_a4c < iVar7);
      }
    }
    local_a58 = local_a58 + 9;
  }
  if (param_1[0x38] == 0) {
    piVar6 = aiStack_a38;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      if (*piVar6 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x2d;
        (**(code **)*param_1)();
      }
      piVar6 = piVar6 + 1;
    }
  }
  else {
    piVar6 = local_a10;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      if (*piVar6 < 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x2d;
        (**(code **)*param_1)();
      }
      piVar6 = piVar6 + 0x40;
    }
  }
  return;
}

