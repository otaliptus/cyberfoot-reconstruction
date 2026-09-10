// Address: 0061dec8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0061dec8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_2 == *(int *)(*(int *)PTR_DAT_0066afa0 + param_1 * 0x48)) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + param_1 * 0x48);
  }
  else if (param_2 == *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + param_1 * 0x48)) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0066afa0 + param_1 * 0x48);
  }
  if (iVar1 != -1) {
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2) {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x214 + iVar1 * 0x2f8) = 0;
      if (*(int *)(PTR_DAT_0066ac78 + 0x110) == 1) {
        FUN_006490a8(iVar1,0,2,0xffffffff);
      }
      else {
        FUN_006490a8(iVar1,*(int *)(PTR_DAT_0066ac78 + 0x110),2,0xffffffff);
      }
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x217 + iVar1 * 0x2f8) = 0;
      FUN_006490a8(iVar1,*(undefined4 *)(PTR_DAT_0066ac78 + 0x194),4,0xffffffff);
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) {
      *(undefined1 *)(*(int *)PTR_DAT_0066af70 + 0x218 + iVar1 * 0x2f8) = 0;
      FUN_006490a8(iVar1,*(undefined4 *)(PTR_DAT_0066ac78 + 0x1a0),6,0xffffffff);
    }
  }
  return;
}

