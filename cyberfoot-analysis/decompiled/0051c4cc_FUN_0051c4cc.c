// Address: 0051c4cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051c4cc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    *(uint *)(param_1 + 0x30) =
         param_2 << ((byte)iVar1 & 0x1f) |
         *(uint *)(&DAT_00669d60 + iVar1 * 4) & *(uint *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c);
  while (7 < *(int *)(param_1 + 0x34)) {
    FUN_0051c440(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x30));
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 8;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -8;
  }
  if (param_2 == *(short *)(param_1 + 0x48)) {
    while (0 < *(int *)(param_1 + 0x34)) {
      FUN_0051c440(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x30));
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 8;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -8;
    }
  }
  return;
}

