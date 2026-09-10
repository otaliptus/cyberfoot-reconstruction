// Address: 004db7a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004db7a4(undefined2 param_1,undefined4 param_2)

{
  UINT UVar1;
  WCHAR local_206 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  if (*PTR_DAT_0066adfc == '\0') {
    FUN_00404830("Assertion failure",
                 "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntMenus.pas"
                 ,0xad);
  }
  FUN_00404ff0(param_2);
  UVar1 = MapVirtualKeyW((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextW(UVar1 << 0x10,local_206,0x200);
    FUN_004051b8(param_2,local_206,0x100);
  }
  return;
}

