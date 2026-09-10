// Address: 004dc29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dc29c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  LPWSTR lpString;
  UINT flags;
  
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntMenus.pas"
                 ,0x297);
  }
  iVar1 = GetMenuStringW(*(HMENU *)(param_4 + -4),(uint)*(ushort *)(*(int *)(param_4 + -8) + 0x50),
                         (LPWSTR)0x0,0,0);
  if (iVar1 == 0) {
    FUN_00404ff0(param_1);
  }
  else {
    iVar1 = iVar1 + 1;
    FUN_004055c4(param_1,iVar1);
    flags = 0;
    lpString = (LPWSTR)FUN_00405250(*param_1);
    iVar1 = GetMenuStringW(*(HMENU *)(param_4 + -4),(uint)*(ushort *)(*(int *)(param_4 + -8) + 0x50)
                           ,lpString,iVar1,flags);
    FUN_004055c4(param_1,iVar1);
  }
  return;
}

