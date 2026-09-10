// Address: 0041cf9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041cf9c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      uVar1 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),iVar4);
      uVar3 = FUN_0041cb2c(PTR_DAT_0041ca10,uVar1,uVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar3;
}

