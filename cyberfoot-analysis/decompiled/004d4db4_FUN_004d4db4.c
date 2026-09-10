// Address: 004d4db4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4db4(undefined4 param_1,UINT param_2,undefined4 *param_3)

{
  int cbMultiByte;
  LPCSTR pCVar1;
  int iVar2;
  LPWSTR pWVar3;
  int cchWideChar;
  
  if (param_2 == 65000) {
    FUN_004d4ca4(param_1,param_3);
  }
  else if (param_2 == 0xfde9) {
    FUN_004d459c(param_1,param_3);
  }
  else {
    cbMultiByte = FUN_00404ba4(param_1,param_2,param_3,param_3);
    cchWideChar = 0;
    pWVar3 = (LPWSTR)0x0;
    iVar2 = cbMultiByte;
    pCVar1 = (LPCSTR)FUN_00404da4(param_1);
    iVar2 = MultiByteToWideChar(param_2,0,pCVar1,iVar2,pWVar3,cchWideChar);
    FUN_004055c4(param_3,iVar2);
    pWVar3 = (LPWSTR)FUN_00405250(*param_3);
    pCVar1 = (LPCSTR)FUN_00404da4(param_1);
    MultiByteToWideChar(param_2,0,pCVar1,cbMultiByte,pWVar3,iVar2);
  }
  return;
}

