// Address: 005c71f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c71f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x37c));
  if (1 < iVar2 + 1) {
    if (iVar2 + 1 < 5) {
      FUN_005c5d38(param_1,param_2,iVar2,1);
      uVar1 = *(undefined4 *)(param_1 + 0x37c);
      iVar2 = FUN_0054c0f0(uVar1);
      FUN_0054c10c(uVar1,iVar2 + -1);
    }
    else {
      FUN_005c5d38(param_1,param_2,iVar2 + -3,2);
      uVar1 = *(undefined4 *)(param_1 + 0x37c);
      iVar2 = FUN_0054c0f0(uVar1);
      FUN_0054c10c(uVar1,iVar2 + -1);
    }
  }
  return;
}

