// Address: 0040a368
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_0040a368(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_10;
  
  local_10 = param_3;
  BVar1 = WriteFile(param_1,param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}

