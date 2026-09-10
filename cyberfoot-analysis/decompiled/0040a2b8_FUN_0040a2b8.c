// Address: 0040a2b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HANDLE FUN_0040a2b8(undefined4 param_1,uint param_2)

{
  HANDLE pvVar1;
  LPCSTR lpFileName;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  
  pvVar1 = (HANDLE)0xffffffff;
  if (((param_2 & 3) < 3) && ((param_2 & 0xf0) < 0x41)) {
    pvVar1 = (HANDLE)0x0;
    dwFlagsAndAttributes = 0x80;
    dwCreationDisposition = 3;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    dwShareMode = *(DWORD *)(&DAT_00662174 + ((param_2 & 0xf0) >> 4) * 4);
    dwDesiredAccess = *(DWORD *)(&DAT_00662168 + (param_2 & 3) * 4);
    lpFileName = (LPCSTR)FUN_00404da4(param_1);
    pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                         dwCreationDisposition,dwFlagsAndAttributes,pvVar1);
  }
  return pvVar1;
}

