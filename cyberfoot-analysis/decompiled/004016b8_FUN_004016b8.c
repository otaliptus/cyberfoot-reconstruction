// Address: 004016b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004016b8(LPVOID param_1,int param_2,int *param_3)

{
  char cVar1;
  LPVOID pvVar2;
  uint dwSize;
  
  param_3[1] = 0x100000;
  pvVar2 = VirtualAlloc(param_1,0x100000,0x2000,4);
  *param_3 = (int)pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    dwSize = param_2 + 0xffffU & 0xffff0000;
    param_3[1] = dwSize;
    pvVar2 = VirtualAlloc(param_1,dwSize,0x2000,4);
    *param_3 = (int)pvVar2;
  }
  if (*param_3 != 0) {
    cVar1 = FUN_00401508(&DAT_0066c5ec,param_3);
    if (cVar1 == '\0') {
      VirtualFree((LPVOID)*param_3,0,0x8000);
      *param_3 = 0;
    }
  }
  return;
}

