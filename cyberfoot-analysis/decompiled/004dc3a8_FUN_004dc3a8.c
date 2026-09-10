// Address: 004dc3a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dc3a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  WCHAR local_d4 [80];
  tagMENUITEMINFOW local_34;
  
  local_34.cbSize = 0x2c;
  local_34.fMask = 0x10;
  local_34.dwTypeData = local_d4;
  local_34.cch = 0x50;
  BVar1 = GetMenuItemInfoW(*(HMENU *)(param_4 + -4),(uint)*(ushort *)(*(int *)(param_4 + -8) + 0x50)
                           ,0,&local_34);
  if ((BVar1 != 0) && ((local_34.fType & 0x904) == 0)) {
    local_34.dwTypeData = (LPWSTR)FUN_00405250(param_1);
    local_34.cch = FUN_00405260(param_1);
    SetMenuItemInfoW(*(HMENU *)(param_4 + -4),(uint)*(ushort *)(*(int *)(param_4 + -8) + 0x50),0,
                     &local_34);
    FUN_0040f9a0();
  }
  return;
}

