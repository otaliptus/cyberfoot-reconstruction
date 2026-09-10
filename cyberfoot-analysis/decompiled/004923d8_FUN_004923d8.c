// Address: 004923d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004923d8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = param_1[0x73];
  puVar4 = *(undefined4 **)(iVar1 + 0x18);
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_2 == 0) {
    if (param_1[0x16] == 2) {
      *(code **)(iVar1 + 4) = FUN_00492018;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_00491f4c;
    }
    *(undefined **)(iVar1 + 8) = &DAT_004923d4;
    iVar5 = param_1[0x21];
    if (iVar5 < 1) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x38;
      *(undefined4 *)(iVar2 + 0x18) = 1;
      (**(code **)*param_1)();
    }
    if (0x100 < iVar5) {
      iVar5 = *param_1;
      *(undefined4 *)(iVar5 + 0x14) = 0x39;
      *(undefined4 *)(iVar5 + 0x18) = 0x100;
      (**(code **)*param_1)();
    }
    if (param_1[0x16] == 2) {
      iVar5 = param_1[0x1c] * 6 + 0xc;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,iVar5);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_00497770(*(undefined4 *)(iVar1 + 0x20),iVar5);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_0049231c(param_1);
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(undefined1 **)(iVar1 + 4) = &LAB_00491314;
    *(undefined1 **)(iVar1 + 8) = &LAB_004923b0;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar5 = 0;
    do {
      FUN_00497770(*puVar4,0x1000);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 0x20);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

