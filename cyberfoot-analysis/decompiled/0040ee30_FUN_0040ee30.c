// Address: 0040ee30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ee30(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00404ba4(param_1);
  iVar4 = 1;
  iVar3 = 1;
  while ((iVar3 < iVar1 && (iVar4 < param_2))) {
    iVar4 = iVar4 + 1;
    uVar2 = (uint)*(byte *)(param_1 + -1 + iVar3);
    if ((*(byte *)((int)&DAT_00662134 + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) == 0) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar3 = FUN_0040efe8(param_1,iVar3);
    }
  }
  if (((iVar4 == param_2) && (iVar3 < iVar1)) &&
     (uVar2 = (uint)*(byte *)(param_1 + -1 + iVar3),
     (*(byte *)((int)&DAT_00662134 + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0)) {
    iVar3 = FUN_0040efe8(param_1,iVar3);
    iVar3 = iVar3 + -1;
  }
  *param_3 = iVar4;
  *param_4 = iVar3;
  return;
}

