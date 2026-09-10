// Address: 004bca2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004bca2c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_4 + -4);
  iVar1 = iVar4 + *(int *)(param_4 + -8) * param_1;
  iVar2 = param_2 + param_1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((param_2 + param_1 & 1U) != 0);
  }
  iVar3 = iVar2 * *(int *)(param_4 + -8) + iVar4;
  iVar4 = iVar4 + *(int *)(param_4 + -8) * param_2;
  iVar2 = (**(code **)(param_4 + 8))(iVar1,iVar3);
  if (0 < iVar2) {
    FUN_004bc9f4(iVar3,iVar3);
  }
  iVar2 = (**(code **)(param_4 + 8))(iVar3,iVar4);
  if (0 < iVar2) {
    FUN_004bc9f4(iVar3,iVar4);
  }
  iVar4 = (**(code **)(param_4 + 8))(iVar1,iVar3);
  if (0 < iVar4) {
    FUN_004bc9f4(iVar1,iVar3);
  }
  return;
}

