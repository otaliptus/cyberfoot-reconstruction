// Address: 005bcfa4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bcfa4(void)

{
  if (DAT_006d2b54 == (HMODULE)0x0) {
    DAT_006d2b54 = (HMODULE)FUN_0040ff80("olepro32.dll",0x8000);
    if (DAT_006d2b54 != (HMODULE)0x0) {
      _DAT_006d2b58 = GetProcAddress(DAT_006d2b54,"OleCreatePropertyFrame");
      _DAT_006d2b5c = GetProcAddress(DAT_006d2b54,"OleCreateFontIndirect");
      DAT_006d2b60 = GetProcAddress(DAT_006d2b54,"OleCreatePictureIndirect");
      DAT_006d2b64 = GetProcAddress(DAT_006d2b54,"OleLoadPicture");
    }
  }
  return;
}

