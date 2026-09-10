// Address: 0043800c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043800c(void)

{
  LPCSTR lpString;
  undefined4 uVar1;
  undefined1 local_30 [32];
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;
  
  DAT_0066ca7c = RegisterWindowMessageA("commdlg_help");
  _DAT_0066ca80 = RegisterWindowMessageA("commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_0066c668;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  lpString = (LPCSTR)FUN_0040ade4(local_30,"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_006629c4 = GlobalAddAtomA(lpString);
  return;
}

