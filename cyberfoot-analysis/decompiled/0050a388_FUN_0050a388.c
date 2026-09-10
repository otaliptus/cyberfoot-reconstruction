// Address: 0050a388
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a388(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 8) + -1;
    if (-1 < iVar2) {
      do {
        uVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x78),iVar2);
        FUN_0040281c(uVar1,8);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    FUN_0040fe60(param_1 + 0x78);
  }
  return;
}

