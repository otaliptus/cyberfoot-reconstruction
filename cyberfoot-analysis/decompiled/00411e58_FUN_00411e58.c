// Address: 00411e58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00411e58(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  do {
    iVar2 = *(int *)(param_4 + -0x2fc + param_1 * 8) + *(int *)(param_4 + -0x300 + param_1 * 8);
    bVar1 = *(int *)(param_4 + -0x100 + param_1 * 4) < iVar2;
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
    param_1 = param_1 + -1;
    if (!bVar1) {
      return uVar3;
    }
  } while (-1 < param_1);
  return uVar3;
}

