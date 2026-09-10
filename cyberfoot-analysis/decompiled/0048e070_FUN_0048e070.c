// Address: 0048e070
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048e070(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x69];
  if (*(int *)(iVar1 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      if ((param_1[0x17] == 0) || (param_1[0x1b] == 0)) {
        if (param_1[0x19] == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)();
        }
        else {
          param_1[0x73] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x73] = *(int *)(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x70])();
    (**(code **)(param_1[0x6b] + 8))();
    if (param_1[0x11] == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        (**(code **)param_1[0x72])();
      }
      (**(code **)param_1[0x71])();
      if (param_1[0x15] != 0) {
        (**(code **)param_1[0x73])(param_1,*(undefined4 *)(iVar1 + 8));
      }
      if (*(int *)(iVar1 + 8) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 3;
      }
      (**(code **)param_1[0x6c])(param_1,uVar3);
      (**(code **)param_1[0x6a])(param_1,0);
    }
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x73])(param_1,0);
    (**(code **)param_1[0x6c])(param_1,2);
    (**(code **)param_1[0x6a])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    *(int *)(param_1[2] + 0x10) = iVar2 + *(int *)(iVar1 + 0xc);
    if ((param_1[0x10] != 0) && (*(int *)(param_1[0x6d] + 0x14) == 0)) {
      if (param_1[0x1b] == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      *(int *)(param_1[2] + 0x10) = *(int *)(param_1[2] + 0x10) + iVar1;
    }
  }
  return;
}

