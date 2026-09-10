// Address: 00408118
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

HWND FUN_00408118(DWORD param_1,LPCSTR param_2,LPCSTR param_3,LPVOID param_4,HINSTANCE param_5,
                 HMENU param_6,HWND param_7,int param_8,int param_9,int param_10,int param_11,
                 DWORD param_12)

{
  undefined4 uVar1;
  HWND pHVar2;
  
  uVar1 = FUN_00402bd4();
  pHVar2 = CreateWindowExA(param_1,param_2,param_3,param_12,param_11,param_10,param_9,param_8,
                           param_7,param_6,param_5,param_4);
  FUN_00402bc4(uVar1);
  return pHVar2;
}

