// Address: 00402b30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00402b30(int param_1,int *param_2)

{
  DWORD DVar1;
  LPSTR pCVar2;
  CHAR local_114 [264];
  
  FUN_004048d4(param_2);
  if (param_1 == 0) {
    DVar1 = GetModuleFileNameA((HMODULE)0x0,local_114,0x105);
    FUN_004049c4(param_2,local_114,DVar1);
  }
  else {
    pCVar2 = GetCommandLineA();
    while( true ) {
      pCVar2 = (LPSTR)FUN_00402a44(pCVar2,param_2);
      if ((param_1 == 0) || (*param_2 == 0)) break;
      param_1 = param_1 + -1;
    }
  }
  return;
}

