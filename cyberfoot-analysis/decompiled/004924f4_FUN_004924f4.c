// Address: 004924f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004924f4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x73] = (int)puVar2;
  *puVar2 = FUN_004923d8;
  puVar2[3] = &LAB_004924e4;
  puVar2[8] = 0;
  puVar2[10] = 0;
  if (param_1[0x1e] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)();
  }
  uVar3 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar2[6] = uVar3;
  iVar4 = 0;
  do {
    uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(puVar2[6] + iVar4 * 4) = uVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  puVar2[7] = 1;
  if (param_1[0x1b] == 0) {
    puVar2[4] = 0;
  }
  else {
    iVar4 = param_1[0x18];
    if (iVar4 < 8) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x38;
      *(undefined4 *)(iVar1 + 0x18) = 8;
      (**(code **)*param_1)();
    }
    if (0x100 < iVar4) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x39;
      *(undefined4 *)(iVar1 + 0x18) = 0x100;
      (**(code **)*param_1)();
    }
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,iVar4,3);
    puVar2[4] = uVar3;
    puVar2[5] = iVar4;
  }
  if (param_1[0x16] != 0) {
    param_1[0x16] = 2;
  }
  if (param_1[0x16] == 2) {
    uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,param_1[0x1c] * 6 + 0xc);
    puVar2[8] = uVar3;
    FUN_0049231c(param_1);
  }
  return;
}

