// Address: 004e2a64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e2a64(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004032c8(100);
  if (uVar1 < 0x46) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x220 + param_1 * 0x2f8) = 0;
  }
  else if (uVar1 - 0x46 < 10) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x220 + param_1 * 0x2f8) = 1;
  }
  else if (uVar1 - 0x50 < 0x14) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x220 + param_1 * 0x2f8) = 2;
  }
  uVar1 = FUN_004032c8(100);
  if (uVar1 < 5) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x224 + param_1 * 0x2f8) = 2;
  }
  else if (uVar1 - 5 < 0x41) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x224 + param_1 * 0x2f8) = 0;
  }
  else if (uVar1 - 0x46 < 0x1e) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x224 + param_1 * 0x2f8) = 1;
  }
  uVar1 = FUN_004032c8(100);
  if (uVar1 < 0x46) {
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x228 + param_1 * 0x2f8) = 0;
    return param_1 * 0x5f;
  }
  iVar2 = uVar1 - 100;
  if (uVar1 - 0x46 < 0x1e) {
    iVar2 = param_1 * 0x5f;
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x228 + param_1 * 0x2f8) = 1;
  }
  return iVar2;
}

