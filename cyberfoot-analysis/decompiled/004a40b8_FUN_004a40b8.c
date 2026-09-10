// Address: 004a40b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a40b8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x16bc) < 9) {
    if (0 < *(int *)(param_1 + 0x16bc)) {
      iVar1 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar1) = *(undefined1 *)(param_1 + 0x16b8);
    iVar1 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar1) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
  }
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  return;
}

