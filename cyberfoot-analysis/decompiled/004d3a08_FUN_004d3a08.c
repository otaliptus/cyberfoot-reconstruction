// Address: 004d3a08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_004d3a08(WCHAR param_1)

{
  UINT CodePage;
  DWORD dwFlags;
  WCHAR *lpWideCharStr;
  int cchWideChar;
  LPSTR lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  int *lpUsedDefaultChar;
  WCHAR local_8 [2];
  int local_4;
  
  lpUsedDefaultChar = &local_4;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0;
  lpMultiByteStr = (LPSTR)0x0;
  cchWideChar = 1;
  lpWideCharStr = local_8;
  dwFlags = 0;
  local_8[0] = param_1;
  CodePage = FUN_004d4444();
  WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                      lpDefaultChar,lpUsedDefaultChar);
  return local_4 == 0;
}

