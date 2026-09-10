// Address: 0043df98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043df98(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0xc + (uVar2 & 0x7f) * 4);
    if (iVar1 != -1) {
      FUN_0043dd74(*(undefined4 *)(param_1 + 8),iVar1);
    }
    *(undefined4 *)(param_1 + 0xc + (uVar2 & 0x7f) * 4) = 0xffffffff;
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x04');
  FUN_0043de78(DAT_00662c9c,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

