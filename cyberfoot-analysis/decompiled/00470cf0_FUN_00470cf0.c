// Address: 00470cf0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470cf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if ((iVar2 != 0) && (iVar2 != *(int *)(*(int *)(param_4 + -4) + 100))) {
    iVar2 = FUN_0046e97c(iVar2);
    if (iVar2 == 1) {
      FUN_00470cf0(*(undefined4 *)(param_1 + 0x14));
    }
  }
  iVar2 = FUN_0046e97c(*(undefined4 *)(param_1 + 0x14));
  if ((iVar2 == 1) || (*(int *)(param_1 + 0x24) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x18) + *(int *)(*(int *)(param_4 + -4) + 0xc) + 0xe;
    iVar3 = FUN_0046ef74(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_0046ef68(param_1);
      if (iVar3 != 0) {
        FUN_0046ef68(param_1);
        iVar3 = FUN_0046ee90();
        if (iVar3 - *(int *)(param_1 + 0x24) < iVar2) {
          bVar1 = true;
        }
        else {
          iVar2 = FUN_0046e9cc(param_1);
          FUN_0046eeb8(param_1,iVar2 + *(int *)(param_1 + 0x24));
          FUN_0046ef68(param_1);
          FUN_0046ef08();
        }
      }
    }
    else {
      uVar4 = FUN_0046ef74(param_1);
      iVar3 = FUN_0046ee90(uVar4);
      iVar5 = FUN_0046e9cc(uVar4);
      if ((iVar3 - iVar5) - *(int *)(param_1 + 0x24) < iVar2) {
        bVar1 = true;
      }
      else {
        iVar2 = FUN_0046ee90(uVar4);
        FUN_0046eeb8(uVar4,iVar2 - *(int *)(param_1 + 0x24));
        iVar2 = FUN_0046ee90(uVar4);
        FUN_0046eeb8(param_1,iVar2 + *(int *)(param_1 + 0x24));
        FUN_0046ef74(param_1);
        FUN_0046ef08();
      }
    }
  }
  if (bVar1) {
    FUN_0046eb78(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0046f244(*(undefined4 *)(param_4 + -4),*(undefined4 *)(param_1 + 0x14));
  return;
}

