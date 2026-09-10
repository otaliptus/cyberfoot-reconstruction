// Address: 004046b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004046b4(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  HANDLE pvVar1;
  char *lpBuffer;
  undefined *lpBuffer_00;
  DWORD DVar2;
  DWORD *lpNumberOfBytesWritten;
  DWORD *lpNumberOfBytesWritten_00;
  LPOVERLAPPED p_Var3;
  DWORD local_4;
  
  local_4 = param_3;
  if (DAT_0066c04c != '\0') {
    if ((DAT_0066c220 == -0x284e) && (DAT_0066c228 != 0)) {
      (*DAT_0066c238)(&DAT_0066c21c);
    }
    lpNumberOfBytesWritten = &local_4;
    lpNumberOfBytesWritten_00 = &local_4;
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 0x1e;
    lpBuffer = s_Runtime_error_at_00000000_00662094;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer,DVar2,lpNumberOfBytesWritten,p_Var3);
    p_Var3 = (LPOVERLAPPED)0x0;
    DVar2 = 2;
    lpBuffer_00 = &DAT_0040473c;
    pvVar1 = GetStdHandle(0xfffffff5);
    WriteFile(pvVar1,lpBuffer_00,DVar2,lpNumberOfBytesWritten_00,p_Var3);
    return;
  }
  if (DAT_00662034 == '\0') {
    MessageBoxA((HWND)0x0,s_Runtime_error_at_00000000_00662094,s_Error_0066208c,0);
  }
  return;
}

