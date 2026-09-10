// Address: 00411e88
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00411e88(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  piVar1 = (int *)(param_4 + -0x100 + param_1 * 4);
  *piVar1 = *piVar1 + 1;
  iVar2 = *(int *)(param_4 + -0x2fc + param_1 * 8);
  if (iVar2 + *(int *)(param_4 + -0x300 + param_1 * 8) <= *(int *)(param_4 + -0x100 + param_1 * 4))
  {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      *(int *)(param_4 + -0x100 + param_1 * 4) = iVar2;
      uVar3 = FUN_00411e88(param_1 + -1,param_4,iVar2,param_4);
    }
  }
  return uVar3;
}

