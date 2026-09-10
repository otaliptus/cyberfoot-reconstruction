// Address: 0048e284
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048e284(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int local_20;
  int *local_18;
  undefined4 *puStack_14;
  
  bVar7 = param_1[100] != 0;
  iVar1 = param_1[0x6f];
  bVar3 = false;
  if (bVar7) {
    if ((param_1[0x65] < param_1[100]) || (0x3f < param_1[0x65])) {
      bVar3 = true;
    }
    if (param_1[0x52] != 1) {
      bVar3 = true;
    }
  }
  else if (param_1[0x65] != 0) {
    bVar3 = true;
  }
  if ((param_1[0x66] != 0) && (param_1[0x66] + -1 != param_1[0x67])) {
    bVar3 = true;
  }
  if (0xd < param_1[0x67]) {
    bVar3 = true;
  }
  if (bVar3) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x10;
    *(int *)(iVar2 + 0x18) = param_1[100];
    *(int *)(iVar2 + 0x1c) = param_1[0x65];
    *(int *)(iVar2 + 0x20) = param_1[0x66];
    *(int *)(iVar2 + 0x24) = param_1[0x67];
    (**(code **)*param_1)();
  }
  local_18 = param_1 + 0x53;
  for (local_20 = 0; local_20 < param_1[0x52]; local_20 = local_20 + 1) {
    iVar2 = *(int *)(*local_18 + 4);
    piVar5 = (int *)(iVar2 * 0x100 + param_1[0x28]);
    if ((bVar7) && (*piVar5 < 0)) {
      iVar6 = *param_1;
      *(undefined4 *)(iVar6 + 0x14) = 0x73;
      *(int *)(iVar6 + 0x18) = iVar2;
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    iVar6 = param_1[100];
    piVar5 = piVar5 + iVar6;
    for (; iVar6 <= param_1[0x65]; iVar6 = iVar6 + 1) {
      if (*piVar5 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar5;
      }
      if (iVar4 != param_1[0x66]) {
        iVar4 = *param_1;
        *(undefined4 *)(iVar4 + 0x14) = 0x73;
        *(int *)(iVar4 + 0x18) = iVar2;
        *(int *)(iVar4 + 0x1c) = iVar6;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      *piVar5 = param_1[0x67];
      piVar5 = piVar5 + 1;
    }
    local_18 = local_18 + 1;
  }
  if (param_1[0x66] == 0) {
    if (bVar7) {
      *(code **)(iVar1 + 4) = FUN_0048e788;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_0048e54c;
    }
  }
  else if (bVar7) {
    *(code **)(iVar1 + 4) = FUN_0048eb0c;
  }
  else {
    *(code **)(iVar1 + 4) = FUN_0048ea14;
  }
  puStack_14 = (undefined4 *)(iVar1 + 0x18);
  piVar5 = param_1 + 0x53;
  for (local_20 = 0; local_20 < param_1[0x52]; local_20 = local_20 + 1) {
    if (bVar7) {
      iVar2 = *(int *)(*piVar5 + 0x18);
      FUN_0048f0e4(param_1,0,iVar2,iVar1 + 0x2c + iVar2 * 4);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x2c + iVar2 * 4);
    }
    else if (param_1[0x66] == 0) {
      iVar2 = *(int *)(*piVar5 + 0x14);
      FUN_0048f0e4(param_1,1,iVar2,iVar1 + 0x2c + iVar2 * 4);
    }
    *puStack_14 = 0;
    puStack_14 = puStack_14 + 1;
    piVar5 = piVar5 + 1;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar1 + 0x28) = param_1[0x45];
  return;
}

