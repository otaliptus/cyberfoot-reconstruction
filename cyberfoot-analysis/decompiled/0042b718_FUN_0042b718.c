// Address: 0042b718
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b718(int param_1)

{
  HGDIOBJ h;
  COLORREF color;
  
  h = (HGDIOBJ)FUN_0042a3b4(*(undefined4 *)(param_1 + 0xc));
  SelectObject(*(HDC *)(param_1 + 4),h);
  color = FUN_00429e64(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 4),color);
  return;
}

