// Address: 00422198
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00422198(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0042747c(param_1);
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_00427450(param_1,iVar4);
      if ((*(byte *)(iVar2 + 0x24) & 4) != 0) {
        iVar2 = FUN_00405eec(*(undefined4 *)(param_4 + -4));
        FUN_004060a8(param_4 + -4,PTR_DAT_00422138,1,iVar2 + 1);
        uVar3 = FUN_00427450(param_1,iVar4);
        iVar2 = FUN_00405eec(*(undefined4 *)(param_4 + -4));
        *(undefined4 *)(*(int *)(param_4 + -4) + -4 + iVar2 * 4) = uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

