// Address: 0044a68c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

LRESULT FUN_0044a68c(int param_1)

{
  char cVar1;
  HWND pHVar2;
  LRESULT LVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 == '\0') {
    LVar3 = *(LRESULT *)(param_1 + 0x214);
  }
  else {
    if (*(char *)(param_1 + 0x208) == '\0') {
      LVar6 = 0;
      WVar5 = 0;
      UVar4 = 0x403;
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      LVar3 = SendMessageA(pHVar2,UVar4,WVar5,LVar6);
      return LVar3;
    }
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x408;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    LVar3 = SendMessageA(pHVar2,UVar4,WVar5,LVar6);
  }
  return LVar3;
}

