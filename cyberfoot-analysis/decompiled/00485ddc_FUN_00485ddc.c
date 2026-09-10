// Address: 00485ddc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00485ddc(void)

{
  BOOL BVar1;
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  BVar1 = SystemParametersInfoA(0x48,8,&local_8,0);
  if (BVar1 != 0) {
    return local_4 != 0;
  }
  return false;
}

