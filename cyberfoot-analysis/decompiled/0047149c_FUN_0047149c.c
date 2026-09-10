// Address: 0047149c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047149c(int param_1,int param_2)

{
  LRESULT LVar1;
  
  if (param_2 == 0) {
    FUN_00471400(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_0047141c(param_1);
      return;
    }
    FUN_0047144c(param_1);
  }
  else if ((param_2 == 0x68) && (*(char *)(param_1 + 0x20) != '\0')) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x18),*(UINT *)(param_1 + 0x14),0,0);
      *(LRESULT *)(param_1 + 0x10) = LVar1;
    }
    else {
      SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
    }
  }
  return;
}

