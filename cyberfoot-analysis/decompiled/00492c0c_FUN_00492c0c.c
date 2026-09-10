// Address: 00492c0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00492c0c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_1c;
  int iStack_14;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x6a] = (int)puVar1;
  *puVar1 = &LAB_004929e4;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  if (*(int *)(param_1[0x71] + 8) == 0) {
    iStack_14 = param_1[0x4f];
  }
  else {
    if (param_1[0x4f] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)();
    }
    FUN_00492614(param_1);
    iStack_14 = param_1[0x4f] + 2;
  }
  iStack_1c = 0;
  iVar3 = param_1[0x36];
  puVar1 = puVar1 + 2;
  for (; iStack_1c < param_1[9]; iStack_1c = iStack_1c + 1) {
    uVar2 = (**(code **)(param_1[1] + 8))
                      (param_1,1,*(int *)(iVar3 + 0x1c) * *(int *)(iVar3 + 0x24),
                       ((*(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 0x24)) / param_1[0x4f]) *
                       iStack_14);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 0x54;
  }
  return;
}

