// Address: 0041d1e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d1e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar4);
      iVar1 = FUN_0041e078(*(undefined4 *)(iVar1 + 0xc),param_2);
      if (-1 < iVar1) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = FUN_0041cb9c(PTR_DAT_0041ca10,1,param_2);
  FUN_0041dec0(*(undefined4 *)(param_1 + 4),uVar2);
  return;
}

