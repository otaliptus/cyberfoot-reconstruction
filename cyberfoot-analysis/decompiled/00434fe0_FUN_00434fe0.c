// Address: 00434fe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434fe0(int param_1)

{
  FUN_00434ee8(param_1,1);
  EndPage(*(HDC *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x1d) == '\0') {
    EndDoc(*(HDC *)(param_1 + 0x20));
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

