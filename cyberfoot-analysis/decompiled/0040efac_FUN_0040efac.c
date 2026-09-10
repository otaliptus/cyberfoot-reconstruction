// Address: 0040efac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040efac(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 1;
  if ((DAT_0066c750 != '\0') &&
     (uVar3 = (uint)*(byte *)(param_1 + -1 + param_2),
     (*(byte *)((int)&DAT_00662134 + ((int)uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0)) {
    iVar2 = FUN_00404da4(param_1);
    uVar1 = FUN_0040ef84(iVar2 + param_2 + -1);
  }
  return uVar1;
}

