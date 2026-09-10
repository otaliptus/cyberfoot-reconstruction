// Address: 004996a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004996a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_1[0x2a] == 0) {
    if (4 < param_1[0xe]) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x1a;
      *(int *)(iVar1 + 0x18) = param_1[0xe];
      *(undefined4 *)(iVar1 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    param_1[0x3c] = param_1[0xe];
    piVar4 = param_1 + 0x3d;
    for (iVar1 = 0; iVar1 < param_1[0xe]; iVar1 = iVar1 + 1) {
      *piVar4 = iVar1 * 0x54 + param_1[0x10];
      piVar4 = piVar4 + 1;
    }
    param_1[0x4e] = 0;
    param_1[0x4f] = 0x3f;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
  }
  else {
    piVar4 = param_1 + 0x3d;
    piVar2 = (int *)(*(int *)(param_1[0x52] + 0x20) * 0x24 + param_1[0x2a]);
    param_1[0x3c] = *piVar2;
    piVar3 = piVar2;
    for (iVar1 = 0; piVar3 = piVar3 + 1, iVar1 < *piVar2; iVar1 = iVar1 + 1) {
      *piVar4 = *piVar3 * 0x54 + param_1[0x10];
      piVar4 = piVar4 + 1;
    }
    param_1[0x4e] = piVar2[5];
    param_1[0x4f] = piVar2[6];
    param_1[0x50] = piVar2[7];
    param_1[0x51] = piVar2[8];
  }
  return;
}

