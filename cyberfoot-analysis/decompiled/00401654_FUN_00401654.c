// Address: 00401654
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401654(int param_1,undefined4 *param_2)

{
  char cVar1;
  LPVOID pvVar2;
  SIZE_T dwSize;
  
  if (param_1 < 0x100000) {
    dwSize = 0x100000;
  }
  else {
    dwSize = param_1 + 0xffffU & 0xffff0000;
  }
  param_2[1] = dwSize;
  pvVar2 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    cVar1 = FUN_00401508(&DAT_0066c5ec,param_2);
    if (cVar1 == '\0') {
      VirtualFree((LPVOID)*param_2,0,0x8000);
      *param_2 = 0;
    }
  }
  return;
}

