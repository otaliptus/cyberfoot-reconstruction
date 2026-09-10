// Address: 005f16b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm77_FormShow(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = GetSystemMetrics(0);
  GetSystemMetrics(1);
  uVar2 = iVar1 - *(int *)(*(int *)(param_1 + 0x2f8) + 0x48);
  iVar1 = (int)uVar2 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
  }
  FUN_00465978(*(int *)(param_1 + 0x2f8),iVar1);
  return;
}

