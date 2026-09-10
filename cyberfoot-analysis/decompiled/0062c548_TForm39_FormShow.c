// Address: 0062c548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm39_FormShow(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = GetSystemMetrics(0);
  GetSystemMetrics(1);
  uVar2 = iVar1 - *(int *)(*(int *)(param_1 + 0x33c) + 0x48);
  iVar1 = (int)uVar2 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
  }
  FUN_00465978(*(int *)(param_1 + 0x33c),iVar1);
  return;
}

