// Address: 004a6db4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6db4(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x14) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14));
  }
  if (*(HDC *)(param_1 + 0x18) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x454) != 0) {
    FUN_0040281c();
  }
  if (*(HGDIOBJ *)(param_1 + 0x1c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x44c) != 0) {
    FUN_0040281c();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  return;
}

