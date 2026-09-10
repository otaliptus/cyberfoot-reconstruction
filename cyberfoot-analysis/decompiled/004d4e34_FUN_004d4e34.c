// Address: 004d4e34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4e34(undefined4 param_1,UINT param_2,undefined4 *param_3)

{
  int cchWideChar;
  LPCWSTR pWVar1;
  int iVar2;
  LPSTR pCVar3;
  int cbMultiByte;
  LPCSTR pCVar4;
  LPBOOL pBVar5;
  
  if (param_2 == 65000) {
    FUN_004d4bb0(param_1,param_3);
  }
  else if (param_2 == 0xfde9) {
    FUN_004d4588(param_1,param_3);
  }
  else {
    cchWideChar = FUN_00405260(param_1,param_2,param_3,param_3);
    pBVar5 = (LPBOOL)0x0;
    pCVar4 = (LPCSTR)0x0;
    cbMultiByte = 0;
    pCVar3 = (LPSTR)0x0;
    iVar2 = cchWideChar;
    pWVar1 = (LPCWSTR)FUN_00405250(param_1);
    iVar2 = WideCharToMultiByte(param_2,0,pWVar1,iVar2,pCVar3,cbMultiByte,pCVar4,pBVar5);
    FUN_00404f30(param_3,iVar2);
    pBVar5 = (LPBOOL)0x0;
    pCVar4 = (LPCSTR)0x0;
    pCVar3 = (LPSTR)FUN_00404da4(*param_3);
    pWVar1 = (LPCWSTR)FUN_00405250(param_1);
    WideCharToMultiByte(param_2,0,pWVar1,cchWideChar,pCVar3,iVar2,pCVar4,pBVar5);
  }
  return;
}

