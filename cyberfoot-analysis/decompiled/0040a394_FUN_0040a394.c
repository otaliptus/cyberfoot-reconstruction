// Address: 0040a394
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_0040a394(HANDLE param_1,DWORD param_2,undefined4 param_3,LONG param_4,LONG param_5)

{
  DWORD DVar1;
  LONG local_8;
  
  local_8 = param_5;
  DVar1 = SetFilePointer(param_1,param_4,&local_8,param_2);
  return DVar1;
}

