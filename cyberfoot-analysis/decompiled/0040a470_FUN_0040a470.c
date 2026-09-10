// Address: 0040a470
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_0040a470(LPWORD param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  _FILETIME local_c;
  
  do {
    if ((*(uint *)(param_1 + 0xc) & *(uint *)(param_1 + 8)) == 0) {
      FileTimeToLocalFileTime((FILETIME *)(param_1 + 0x16),&local_c);
      FileTimeToDosDateTime(&local_c,param_1 + 1,param_1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
      FUN_00404b54(param_1 + 6,param_1 + 0x22,0x104);
      return 0;
    }
    BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 10),(LPWIN32_FIND_DATAA)(param_1 + 0xc));
  } while (BVar1 != 0);
  DVar2 = GetLastError();
  return DVar2;
}

