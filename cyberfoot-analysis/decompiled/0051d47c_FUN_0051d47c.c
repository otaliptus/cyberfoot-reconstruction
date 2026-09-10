// Address: 0051d47c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051d47c(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0xc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

