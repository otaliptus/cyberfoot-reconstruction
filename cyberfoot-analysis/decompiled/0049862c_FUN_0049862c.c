// Address: 0049862c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049862c(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1[5] == 0x65) || (param_1[5] == 0x66)) {
    if ((uint)param_1[0x37] < (uint)param_1[8]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x43;
      (**(code **)*param_1)();
    }
    (**(code **)(param_1[0x52] + 8))();
  }
  else if (param_1[5] != 0x67) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  while (*(int *)(param_1[0x52] + 0x10) == 0) {
    (**(code **)param_1[0x52])();
    for (uVar2 = 0; uVar2 < (uint)param_1[0x3b]; uVar2 = uVar2 + 1) {
      iVar1 = param_1[2];
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 4) = uVar2;
        *(int *)(iVar1 + 8) = param_1[0x3b];
        (**(code **)param_1[2])();
      }
      iVar1 = (**(code **)(param_1[0x55] + 4))(param_1,0);
      if (iVar1 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x18;
        (**(code **)*param_1)();
      }
    }
    (**(code **)(param_1[0x52] + 8))();
  }
  (**(code **)(param_1[0x56] + 0xc))();
  (**(code **)(param_1[6] + 0x10))();
  FUN_00497780(param_1);
  return;
}

