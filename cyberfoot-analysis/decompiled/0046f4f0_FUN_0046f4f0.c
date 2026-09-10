// Address: 0046f4f0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046f4f0(int param_1,int param_2,int param_3,char param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_0046e944(PTR_LAB_00462a54,1,param_1);
  *(undefined1 *)(iVar1 + 0x10) = param_5;
  if (param_3 == 0) {
    FUN_0046eeb8(iVar1,*(undefined4 *)(param_1 + 0x68));
    uVar2 = FUN_0046ee90(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined1 *)(param_1 + 0x48) = param_5;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x3fe00000;
    if (param_4 == '\0') {
      *(int *)(iVar1 + 8) = param_2;
      iVar4 = *(int *)(param_1 + 100);
      *(int *)(iVar4 + 0x14) = iVar1;
      *(int *)(iVar4 + 0x18) = param_2;
      *(int *)(param_2 + 0xc) = iVar4;
      *(int *)(param_2 + 0x14) = iVar1;
      *(int *)(param_1 + 100) = iVar1;
      FUN_0046f244(param_1,*(undefined4 *)(iVar1 + 8));
      uVar3 = FUN_0046ee90(*(undefined4 *)(param_1 + 100));
      iVar4 = (int)uVar3 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
      }
      *(int *)(param_1 + 0x4c) = iVar4;
      FUN_0046f244(param_1,*(undefined4 *)(iVar1 + 8));
      uVar3 = FUN_0046ee90(*(undefined4 *)(param_1 + 100));
      iVar4 = (int)uVar3 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
      }
      FUN_0046eeb8(param_2,iVar4);
    }
    else {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 100);
      iVar4 = *(int *)(param_1 + 100);
      *(int *)(iVar4 + 0x14) = iVar1;
      *(int *)(iVar4 + 0xc) = param_2;
      *(int *)(param_2 + 0x18) = iVar4;
      *(int *)(param_2 + 0x14) = iVar1;
      *(int *)(param_1 + 100) = iVar1;
      FUN_0046f244(param_1,*(undefined4 *)(iVar1 + 8));
    }
    FUN_0046f244(param_1,0);
  }
  else {
    uVar2 = FUN_0046ee90(param_3);
    FUN_0046eeb8(iVar1,uVar2);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    iVar4 = *(int *)(param_3 + 0x18);
    *(int *)(iVar1 + 0x18) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0xc) = iVar1;
    }
    iVar4 = *(int *)(param_3 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x18) = iVar1;
    }
    if (param_3 == *(int *)(*(int *)(iVar1 + 0x14) + 8)) {
      *(int *)(*(int *)(iVar1 + 0x14) + 8) = iVar1;
    }
    *(int *)(param_2 + 0x14) = iVar1;
    *(int *)(param_3 + 0x14) = iVar1;
    if (param_4 == '\0') {
      *(int *)(iVar1 + 8) = param_2;
      *(int *)(param_3 + 0x18) = param_2;
      *(undefined4 *)(param_3 + 0xc) = 0;
      *(int *)(param_2 + 0xc) = param_3;
    }
    else {
      *(int *)(iVar1 + 8) = param_3;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(int *)(param_3 + 0xc) = param_2;
      *(int *)(param_2 + 0x18) = param_3;
    }
  }
  FUN_0046eb78(iVar1);
  FUN_0046ef08(iVar1);
  FUN_0046f244(param_1,0);
  return;
}

