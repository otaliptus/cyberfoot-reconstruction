// Address: 00490500
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00490500(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x72] = (int)puVar2;
  *puVar2 = &DAT_004904fc;
  iVar1 = param_1[10];
  if (iVar1 == 1) {
    uVar3 = 0;
    if (param_1[9] != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else {
    uVar3 = iVar1 - 4;
    if (iVar1 - 2U < 2) {
      if (param_1[9] != 3) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        uVar3 = (**(code **)*param_1)();
      }
    }
    else {
      bVar4 = uVar3 < 2;
      uVar3 = iVar1 - 6;
      if (bVar4) {
        if (param_1[9] != 4) {
          *(undefined4 *)(*param_1 + 0x14) = 10;
          uVar3 = (**(code **)*param_1)();
        }
      }
      else if (param_1[9] < 1) {
        *(undefined4 *)(*param_1 + 0x14) = 10;
        uVar3 = (**(code **)*param_1)();
      }
    }
  }
  iVar1 = param_1[0xb];
  if (iVar1 == 1) {
    param_1[0x1e] = 1;
    if ((param_1[10] == 1) || (param_1[10] == 3)) {
      puVar2[1] = FUN_00490354;
      for (uVar3 = 1; (int)uVar3 < param_1[9]; uVar3 = uVar3 + 1) {
        *(undefined4 *)(param_1[0x36] + 0x30 + uVar3 * 0x54) = 0;
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else if (iVar1 == 2) {
    param_1[0x1e] = 3;
    if (param_1[10] == 3) {
      puVar2[1] = FUN_004901dc;
      uVar3 = FUN_00490124(param_1);
    }
    else if (param_1[10] == 1) {
      puVar2[1] = FUN_00490374;
    }
    else if (param_1[10] == 2) {
      puVar2[1] = FUN_004902e4;
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else if (iVar1 == 4) {
    param_1[0x1e] = 4;
    if (param_1[10] == 5) {
      puVar2[1] = FUN_004903bc;
      uVar3 = FUN_00490124(param_1);
    }
    else if (param_1[10] == 4) {
      puVar2[1] = FUN_004902e4;
    }
    else {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else if (param_1[0xb] == param_1[10]) {
    uVar3 = param_1[9];
    param_1[0x1e] = uVar3;
    puVar2[1] = FUN_004902e4;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
  }
  if (param_1[0x15] == 0) {
    param_1[0x1f] = param_1[0x1e];
    return uVar3;
  }
  param_1[0x1f] = 1;
  return uVar3;
}

