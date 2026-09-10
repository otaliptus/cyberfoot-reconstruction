// Address: 0049aefc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0049aefc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  param_1[0x57] = (int)puVar2;
  *puVar2 = &DAT_0049aef8;
  iVar1 = param_1[10];
  if (iVar1 == 1) {
    uVar3 = 0;
    if (param_1[9] != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      uVar3 = (**(code **)*param_1)();
    }
  }
  else {
    uVar3 = iVar1 - 4;
    if (iVar1 - 2U < 2) {
      if (param_1[9] != 3) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        uVar3 = (**(code **)*param_1)();
      }
    }
    else {
      bVar4 = uVar3 < 2;
      uVar3 = iVar1 - 6;
      if (bVar4) {
        if (param_1[9] != 4) {
          *(undefined4 *)(*param_1 + 0x14) = 9;
          uVar3 = (**(code **)*param_1)();
        }
      }
      else if (param_1[9] < 1) {
        *(undefined4 *)(*param_1 + 0x14) = 9;
        uVar3 = (**(code **)*param_1)();
      }
    }
  }
  switch(param_1[0xf]) {
  default:
    if ((param_1[0xf] != param_1[10]) || (uVar3 = param_1[0xe], uVar3 != param_1[9])) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      uVar3 = (**(code **)*param_1)();
    }
    puVar2[1] = FUN_0049ae84;
    return uVar3;
  case 1:
    break;
  case 2:
    if (param_1[0xe] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 2) {
      puVar2[1] = FUN_0049ae84;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  case 3:
    if (param_1[0xe] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 2) {
      *puVar2 = &UNK_0049aac0;
      puVar2[1] = FUN_0049ab60;
      return uVar3;
    }
    if (param_1[10] == 3) {
      puVar2[1] = FUN_0049ae84;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  case 4:
    if (param_1[0xe] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 4) {
      puVar2[1] = FUN_0049ae84;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  case 5:
    if (param_1[0xe] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 10;
      uVar3 = (**(code **)*param_1)();
    }
    if (param_1[10] == 4) {
      *puVar2 = &UNK_0049aac0;
      puVar2[1] = FUN_0049acf4;
      return uVar3;
    }
    if (param_1[10] == 5) {
      puVar2[1] = FUN_0049ae84;
      return uVar3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    uVar3 = (**(code **)*param_1)();
    return uVar3;
  }
  if (param_1[0xe] != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    uVar3 = (**(code **)*param_1)();
  }
  if (param_1[10] == 1) {
    puVar2[1] = FUN_0049ae38;
    return uVar3;
  }
  if (param_1[10] == 2) {
    *puVar2 = &UNK_0049aac0;
    puVar2[1] = FUN_0049ac68;
    return uVar3;
  }
  if (param_1[10] == 3) {
    puVar2[1] = FUN_0049ae38;
    return uVar3;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1b;
  uVar3 = (**(code **)*param_1)();
  return uVar3;
}

