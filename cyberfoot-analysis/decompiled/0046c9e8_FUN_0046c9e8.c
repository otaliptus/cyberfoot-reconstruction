// Address: 0046c9e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046c9e8(int param_1)

{
  tagRECT local_14;
  
  FUN_00465ba8(param_1,&local_14);
  InflateRect(&local_14,1,1);
  InvalidateRect(*(HWND *)(*(int *)(param_1 + 0x30) + 0x180),&local_14,-1);
  return;
}

