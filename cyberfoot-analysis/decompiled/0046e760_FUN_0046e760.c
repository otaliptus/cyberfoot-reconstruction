// Address: 0046e760
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046e760(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_004739fc(param_1);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x6a) == '\0')) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_0046e6c8(param_1);
    ImageList_EndDrag();
    bVar3 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x6a) = 0;
    FUN_0046e5c0(param_1,0xffffffff);
    ShowCursor(-1);
  }
  return bVar3;
}

