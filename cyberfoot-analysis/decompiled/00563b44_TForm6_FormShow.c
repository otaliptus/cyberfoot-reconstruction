// Address: 00563b44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm6_FormShow(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  uVar3 = iVar1 - *(int *)(param_1 + 0x48);
  iVar1 = (int)uVar3 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar3 & 1) != 0);
  }
  FUN_00465978(param_1,iVar1);
  uVar3 = iVar2 - *(int *)(param_1 + 0x4c);
  iVar1 = (int)uVar3 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar3 & 1) != 0);
  }
  FUN_0046599c(param_1,iVar1);
  if (*PTR_DAT_0066ad3c == '\0') {
    FUN_00466128(*(undefined4 *)(param_1 + 0x338),1);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x338),0);
  }
  return;
}

