// Address: 0040a3d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0040a3d4(undefined4 param_1)

{
  LPCSTR lpFileName;
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA *lpFindFileData;
  _WIN32_FIND_DATAA local_150;
  _FILETIME local_10;
  undefined4 local_8;
  
  lpFindFileData = &local_150;
  lpFileName = (LPCSTR)FUN_00404da4(param_1);
  hFindFile = FindFirstFileA(lpFileName,lpFindFileData);
  if ((hFindFile != (HANDLE)0xffffffff) &&
     (FindClose(hFindFile), ((byte)local_150.dwFileAttributes & 0x10) == 0)) {
    FileTimeToLocalFileTime(&local_150.ftLastWriteTime,&local_10);
    BVar1 = FileTimeToDosDateTime(&local_10,(LPWORD)((int)&local_8 + 2),(LPWORD)&local_8);
    if (BVar1 != 0) {
      return local_8;
    }
  }
  return 0xffffffff;
}

