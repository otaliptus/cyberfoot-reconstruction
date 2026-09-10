// Address: 0048cea0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048cea0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0xe;
    *(int *)(iVar4 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  if (param_2 == 1) {
    for (iVar4 = *(int *)(iVar1 + 0x44); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      if (*(int *)(iVar4 + 0x28) != 0) {
        *(undefined4 *)(iVar4 + 0x28) = 0;
        (**(code **)(iVar4 + 0x38))(param_1,iVar4 + 0x30);
      }
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    for (iVar4 = *(int *)(iVar1 + 0x48); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      if (*(int *)(iVar4 + 0x28) != 0) {
        *(undefined4 *)(iVar4 + 0x28) = 0;
        (**(code **)(iVar4 + 0x38))(param_1,iVar4 + 0x30);
      }
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x3c + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x3c + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    iVar4 = puVar2[1] + puVar2[2] + 0xc;
    FUN_0048d0f0(param_1,puVar2,iVar4);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - iVar4;
    puVar2 = puVar3;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x34 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x34 + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar2;
    iVar4 = puVar2[1] + puVar2[2] + 0xc;
    FUN_0048d0e0(param_1,puVar2,iVar4);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - iVar4;
    puVar2 = puVar3;
  }
  return;
}

