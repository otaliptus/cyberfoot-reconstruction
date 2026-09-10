// Address: 0040e29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040e29c(undefined4 param_1,undefined4 param_2)

{
  DWORD DVar1;
  HANDLE pvVar2;
  HINSTANCE hInstance;
  CHAR *pCVar3;
  undefined *lpBuffer;
  UINT uID;
  DWORD *pDVar4;
  LPOVERLAPPED p_Var5;
  int cchBufferMax;
  DWORD local_444;
  CHAR local_440 [64];
  CHAR local_400 [1024];
  
  FUN_0040e114(param_1,param_2,local_400,0x400);
  pDVar4 = &local_444;
  if (*PTR_DAT_0066b4ac == '\0') {
    cchBufferMax = 0x40;
    pCVar3 = local_440;
    uID = *(UINT *)(PTR_PTR_0066aee4 + 4);
    hInstance = (HINSTANCE)FUN_004062b0(DAT_0066c668);
    LoadStringA(hInstance,uID,pCVar3,cchBufferMax);
    MessageBoxA((HWND)0x0,local_400,local_440,0x2010);
  }
  else {
    FUN_00402f8c(PTR_DAT_0066af8c);
    FUN_00402964();
    CharToOemA(local_400,local_400);
    p_Var5 = (LPOVERLAPPED)0x0;
    DVar1 = FUN_0040a760(local_400);
    pCVar3 = local_400;
    pvVar2 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar2,pCVar3,DVar1,pDVar4,p_Var5);
    pDVar4 = &local_444;
    p_Var5 = (LPOVERLAPPED)0x0;
    DVar1 = 2;
    lpBuffer = &DAT_0040e360;
    pvVar2 = GetStdHandle(0xfffffff4);
    WriteFile(pvVar2,lpBuffer,DVar1,pDVar4,p_Var5);
  }
  return;
}

