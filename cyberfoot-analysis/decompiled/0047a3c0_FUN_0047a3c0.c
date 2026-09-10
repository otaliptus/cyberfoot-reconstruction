// Address: 0047a3c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047a3c0(int *param_1)

{
  char cVar1;
  HMENU hmenu;
  BOOL BVar2;
  uint uVar3;
  tagMENUITEMINFOA tStack_88;
  CHAR aCStack_58 [80];
  
  if ((PTR_DAT_0066b7ac[0xd] != '\0') && (param_1[0xe] != 0)) {
    hmenu = (HMENU)(**(code **)(*param_1 + 0x34))();
    tStack_88.cbSize = 0x2c;
    tStack_88.fMask = 0x10;
    tStack_88.dwTypeData = aCStack_58;
    tStack_88.cch = 0x50;
    BVar2 = GetMenuItemInfoA(hmenu,0,-1,&tStack_88);
    if (BVar2 != 0) {
      cVar1 = FUN_0047a744(param_1);
      if ((bool)cVar1 != ((tStack_88.fType & 0x6000) != 0)) {
        uVar3 = FUN_0047a744(param_1);
        tStack_88.fType = (uVar3 & 0x7f) * 0x6000 | tStack_88.fType & 0xffff9fff;
        tStack_88.fMask = 0x10;
        BVar2 = SetMenuItemInfoA(hmenu,0,-1,&tStack_88);
        if (BVar2 != 0) {
          DrawMenuBar((HWND)param_1[0xe]);
        }
      }
    }
  }
  return;
}

