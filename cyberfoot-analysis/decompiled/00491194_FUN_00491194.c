// Address: 00491194
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00491194(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[0x73];
  param_1[0x22] = *(int *)(iVar3 + 0x10);
  param_1[0x21] = *(int *)(iVar3 + 0x14);
  iVar1 = param_1[0x16];
  if (iVar1 == 0) {
    if (param_1[0x1e] == 3) {
      *(code **)(iVar3 + 4) = FUN_00490cd8;
    }
    else {
      *(code **)(iVar3 + 4) = FUN_00490c38;
    }
  }
  else if (iVar1 == 1) {
    if (param_1[0x1e] == 3) {
      *(code **)(iVar3 + 4) = FUN_00490e80;
    }
    else {
      *(code **)(iVar3 + 4) = FUN_00490d74;
    }
    *(undefined4 *)(iVar3 + 0x30) = 0;
    if (*(int *)(iVar3 + 0x1c) == 0) {
      FUN_004909c0(param_1);
    }
    if (*(int *)(iVar3 + 0x34) == 0) {
      FUN_00490bd0(param_1);
    }
  }
  else if (iVar1 == 2) {
    *(code **)(iVar3 + 4) = FUN_00490f98;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    if (*(int *)(iVar3 + 0x44) == 0) {
      FUN_00491154(param_1);
    }
    iVar1 = param_1[0x1c];
    puVar2 = (undefined4 *)(iVar3 + 0x44);
    for (iVar3 = 0; iVar3 < param_1[0x1e]; iVar3 = iVar3 + 1) {
      FUN_00497770(*puVar2,iVar1 * 2 + 4);
      puVar2 = puVar2 + 1;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)();
  }
  return;
}

