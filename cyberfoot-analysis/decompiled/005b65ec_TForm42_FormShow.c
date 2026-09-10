// Address: 005b65ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm42_FormShow(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  uVar3 = iVar1 - *(int *)(param_1 + 0x48);
  iVar4 = (int)uVar3 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
  }
  FUN_00465978(param_1,iVar4);
  uVar3 = iVar2 - *(int *)(param_1 + 0x4c);
  iVar4 = (int)uVar3 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
  }
  FUN_0046599c(param_1,iVar4);
  uVar3 = iVar1 - *(int *)(*(int *)(param_1 + 0x2f8) + 0x48);
  iVar1 = (int)uVar3 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar3 & 1) != 0);
  }
  FUN_00465978(*(int *)(param_1 + 0x2f8),iVar1);
  uVar3 = iVar2 - *(int *)(*(int *)(param_1 + 0x2f8) + 0x4c);
  iVar1 = (int)uVar3 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar3 & 1) != 0);
  }
  FUN_0046599c(*(int *)(param_1 + 0x2f8),iVar1);
  return;
}

