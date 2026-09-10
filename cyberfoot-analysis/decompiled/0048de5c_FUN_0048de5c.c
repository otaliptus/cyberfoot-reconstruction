// Address: 0048de5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0048de80) */

void FUN_0048de5c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = param_1[0x69];
  FUN_0048dbd4(param_1);
  FUN_0048ddc0(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar3 = FUN_0048db44(param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((param_1[0x15] == 0) || (param_1[0x10] == 0)) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  if (param_1[0x15] != 0) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)();
    }
    if (param_1[0x1e] == 3) {
      if (param_1[0x22] == 0) {
        if (param_1[0x17] == 0) {
          param_1[0x19] = 1;
        }
        else {
          param_1[0x1b] = 1;
        }
      }
      else {
        param_1[0x1a] = 1;
      }
    }
    else {
      param_1[0x19] = 1;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x22] = 0;
    }
    if (param_1[0x19] != 0) {
      FUN_00491280(param_1);
      *(int *)(iVar1 + 0x14) = param_1[0x73];
    }
    if ((param_1[0x1b] != 0) || (param_1[0x1a] != 0)) {
      FUN_004924f4(param_1);
      *(int *)(iVar1 + 0x18) = param_1[0x73];
    }
  }
  if (param_1[0x11] == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_00490500(param_1);
      FUN_00494824(param_1);
    }
    else {
      FUN_004900a4(param_1);
    }
    FUN_00493fdc(param_1,param_1[0x1b]);
  }
  FUN_004942c4(param_1);
  if (param_1[0x38] == 0) {
    if (param_1[0x37] == 0) {
      FUN_0048faf8(param_1);
    }
    else {
      FUN_0048ef38(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)();
  }
  if ((*(int *)(param_1[0x6d] + 0x10) == 0) && (param_1[0x10] == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_00493c68(param_1,uVar3);
  if (param_1[0x11] == 0) {
    FUN_00492c0c(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))();
  (**(code **)(param_1[0x6d] + 8))();
  if (((param_1[2] != 0) && (param_1[0x10] == 0)) && (*(int *)(param_1[0x6d] + 0x10) != 0)) {
    if (param_1[0x37] == 0) {
      iVar4 = param_1[9];
    }
    else {
      iVar4 = param_1[9] * 3 + 2;
    }
    iVar2 = param_1[2];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)(iVar2 + 8) = param_1[0x50] * iVar4;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (param_1[0x1b] == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
    }
    *(undefined4 *)(param_1[2] + 0x10) = uVar3;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}

