// Address: 0049993c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049993c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x52];
  iVar2 = *(int *)(iVar1 + 0x14);
  if (iVar2 == 0) {
    FUN_004996a0(param_1);
    FUN_00499790(param_1);
    if (param_1[0x2b] == 0) {
      (**(code **)param_1[0x57])();
      (**(code **)param_1[0x58])();
      (**(code **)param_1[0x54])(param_1,0);
    }
    (**(code **)param_1[0x59])();
    (**(code **)param_1[0x5a])(param_1,param_1[0x2d]);
    if (*(int *)(iVar1 + 0x1c) < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
    (**(code **)param_1[0x55])(param_1,uVar3);
    (**(code **)param_1[0x53])(param_1,0);
    if (param_1[0x2d] == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  else {
    if (iVar2 == 1) {
      FUN_004996a0(param_1);
      FUN_00499790(param_1);
      if (((param_1[0x4e] != 0) || (param_1[0x50] == 0)) || (param_1[0x2c] != 0)) {
        (**(code **)param_1[0x5a])(param_1,1);
        (**(code **)param_1[0x55])(param_1,2);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        goto LAB_00499ab1;
      }
      *(undefined4 *)(iVar1 + 0x14) = 2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    }
    else if (iVar2 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)();
      goto LAB_00499ab1;
    }
    if (param_1[0x2d] == 0) {
      FUN_004996a0(param_1);
      FUN_00499790(param_1);
    }
    (**(code **)param_1[0x5a])(param_1,0);
    (**(code **)param_1[0x55])(param_1,2);
    if (*(int *)(iVar1 + 0x20) == 0) {
      (**(code **)(param_1[0x56] + 4))();
    }
    (**(code **)(param_1[0x56] + 8))();
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
LAB_00499ab1:
  *(uint *)(iVar1 + 0x10) = (uint)(*(int *)(iVar1 + 0x1c) + -1 == *(int *)(iVar1 + 0x18));
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x1c);
  }
  return;
}

