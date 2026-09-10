// Address: 004d4f44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_004d4f44(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  UINT CodePage;
  DWORD dwFlags;
  LPCSTR lpMultiByteStr;
  int cbMultiByte;
  LPWSTR lpWideCharStr;
  int cchWideChar;
  undefined4 local_4;
  
  lpWideCharStr = (LPWSTR)&local_4;
  if (param_1 < 0x100) {
    local_4._3_1_ = (undefined1)((uint)param_3 >> 0x18);
    local_4._0_3_ = CONCAT12((char)param_1,(WCHAR)param_3);
    cchWideChar = 1;
    cbMultiByte = 1;
    lpMultiByteStr = (LPCSTR)((int)&local_4 + 2);
    dwFlags = 4;
    CodePage = FUN_004d4f30();
    MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar);
  }
  else {
    local_4 = (uint)param_1;
  }
  return local_4 & 0xffff;
}

