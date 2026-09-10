// Address: 0046e6c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046e6c8(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_004739fc(param_1);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x6c) != 0)) {
    ImageList_DragLeave(*(HWND *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

