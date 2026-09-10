// Address: 00435044
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00435044(int param_1,uint param_2)

{
  *(undefined1 *)(param_1 + 0x1e) = DAT_0043507c;
  if ((param_2 & 1) != 0) {
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
  }
  if ((param_2 & 0x100) != 0) {
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 1;
  }
  if ((param_2 & 0x8000) != 0) {
    *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 4;
  }
  return;
}

