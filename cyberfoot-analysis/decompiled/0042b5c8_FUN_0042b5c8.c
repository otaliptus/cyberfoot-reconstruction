// Address: 0042b5c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b5c8(int param_1)

{
  if ((*(HDC *)(param_1 + 4) != (HDC)0x0) &&
     (*(byte *)(param_1 + 8) != (~DAT_0042b620 & *(byte *)(param_1 + 8)))) {
    SelectObject(*(HDC *)(param_1 + 4),DAT_0066c8a0);
    SelectObject(*(HDC *)(param_1 + 4),DAT_0066c8a4);
    SelectObject(*(HDC *)(param_1 + 4),DAT_0066c8a8);
    *(byte *)(param_1 + 8) = ~DAT_0042b620 & *(byte *)(param_1 + 8);
  }
  return;
}

