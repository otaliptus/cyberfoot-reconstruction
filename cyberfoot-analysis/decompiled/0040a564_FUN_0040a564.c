// Address: 0040a564
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0040a564(undefined4 param_1)

{
  LPCSTR lpFileName;
  BOOL BVar1;
  
  lpFileName = (LPCSTR)FUN_00404da4(param_1);
  BVar1 = DeleteFileA(lpFileName);
  return BVar1 != 0;
}

