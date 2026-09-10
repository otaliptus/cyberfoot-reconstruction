// Address: 0059ff3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm20_combopaisChange(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  DAT_006d247c = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
  iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
  if (*(int *)(DAT_006d2480 + iVar1 * 4) == 1) {
    uVar3 = 1;
    uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
    FUN_0059e9d0(param_1,1,uVar2,uVar3);
  }
  else {
    iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
    if (*(int *)(DAT_006d2480 + iVar1 * 4) == 2) {
      uVar3 = 2;
      uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
      FUN_0059e9d0(param_1,1,uVar2,uVar3);
    }
    else {
      iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
      if (*(int *)(DAT_006d2480 + iVar1 * 4) == 3) {
        uVar3 = 3;
        uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
        FUN_0059e9d0(param_1,1,uVar2,uVar3);
      }
      else {
        iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
        if (*(int *)(DAT_006d2480 + iVar1 * 4) == 4) {
          uVar3 = 4;
          uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
          FUN_0059e9d0(param_1,1,uVar2,uVar3);
        }
        else {
          iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x334));
          if (*(int *)(DAT_006d2480 + iVar1 * 4) == 0x16) {
            uVar3 = 0xffffffff;
            uVar2 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x330));
            FUN_0059e9d0(param_1,2,uVar2,uVar3);
          }
        }
      }
    }
  }
  FUN_0059f50c(param_1);
  return;
}

