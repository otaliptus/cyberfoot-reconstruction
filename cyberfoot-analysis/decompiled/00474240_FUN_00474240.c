// Address: 00474240
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00474240(int param_1,undefined4 param_2)

{
  char cVar1;
  COLORREF clrBk;
  
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x44) = param_2;
  }
  else {
    clrBk = FUN_004737f8(param_2);
    ImageList_SetBkColor(*(HIMAGELIST *)(param_1 + 0x3c),clrBk);
  }
  FUN_00403c80(param_1);
  return;
}

