// Address: 0040efe8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040efe8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 + 1;
  if ((DAT_0066c750 != '\0') &&
     (uVar2 = (uint)*(byte *)(param_1 + -1 + param_2),
     (*(byte *)((int)&DAT_00662134 + ((int)uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0)) {
    iVar1 = FUN_00404da4(param_1);
    iVar1 = FUN_0040ef84(iVar1 + param_2 + -1);
    iVar1 = iVar1 + param_2;
  }
  return iVar1;
}

