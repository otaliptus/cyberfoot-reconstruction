// Address: 00499790
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00499790(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piStack_10;
  
  if (param_1[0x3c] == 1) {
    iVar2 = param_1[0x3d];
    param_1[0x41] = *(int *)(iVar2 + 0x1c);
    param_1[0x42] = *(int *)(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 0x3c) = 1;
    *(undefined4 *)(iVar2 + 0x40) = 8;
    *(undefined4 *)(iVar2 + 0x44) = 1;
    uVar3 = *(uint *)(iVar2 + 0x20) % *(uint *)(iVar2 + 0xc);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(iVar2 + 0xc);
    }
    *(uint *)(iVar2 + 0x48) = uVar3;
    param_1[0x43] = 1;
    param_1[0x44] = 0;
  }
  else {
    if ((param_1[0x3c] < 1) || (4 < param_1[0x3c])) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x1a;
      *(int *)(iVar2 + 0x18) = param_1[0x3c];
      *(undefined4 *)(iVar2 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    iVar2 = FUN_004976ec(param_1[7],param_1[0x39] << 3);
    param_1[0x41] = iVar2;
    iVar2 = FUN_004976ec(param_1[8],param_1[0x3a] << 3);
    param_1[0x42] = iVar2;
    param_1[0x43] = 0;
    piStack_10 = param_1 + 0x3d;
    for (iVar2 = 0; iVar2 < param_1[0x3c]; iVar2 = iVar2 + 1) {
      iVar4 = *piStack_10;
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar4 + 8);
      *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x34) * *(int *)(iVar4 + 0xc);
      *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x34) << 3;
      uVar3 = *(uint *)(iVar4 + 0x1c) % *(uint *)(iVar4 + 0x34);
      if (uVar3 == 0) {
        uVar3 = *(uint *)(iVar4 + 0x34);
      }
      *(uint *)(iVar4 + 0x44) = uVar3;
      uVar3 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0x38);
      if (uVar3 == 0) {
        uVar3 = *(uint *)(iVar4 + 0x38);
      }
      *(uint *)(iVar4 + 0x48) = uVar3;
      iVar4 = *(int *)(iVar4 + 0x3c);
      if (10 < param_1[0x43] + iVar4) {
        *(undefined4 *)(*param_1 + 0x14) = 0xd;
        (**(code **)*param_1)();
      }
      while( true ) {
        if (iVar4 < 1) break;
        iVar1 = param_1[0x43];
        param_1[0x43] = param_1[0x43] + 1;
        param_1[iVar1 + 0x44] = iVar2;
        iVar4 = iVar4 + -1;
      }
      piStack_10 = piStack_10 + 1;
    }
  }
  if (0 < param_1[0x32]) {
    iVar2 = param_1[0x32] * param_1[0x41];
    if (0xfffe < iVar2) {
      iVar2 = 0xffff;
    }
    param_1[0x31] = iVar2;
  }
  return;
}

