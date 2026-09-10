// Address: 00426db4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

DWORD FUN_00426db4(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_30;
  HANDLE local_2c;
  undefined4 local_28;
  tagMSG local_24;
  
  local_2c = *(HANDLE *)(param_1 + 4);
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)PTR_DAT_0066b7a8) {
    DVar1 = 0;
    local_28 = DAT_0066c854;
    do {
      if (DVar1 == 2) {
        PeekMessageA(&local_24,(HWND)0x0,0,0,0);
      }
      DVar1 = MsgWaitForMultipleObjects(2,&local_2c,0,1000,0x40);
      FUN_00426bb0(param_1,DVar1 != 0xffffffff);
      if (DVar1 == 1) {
        FUN_004267a8(0);
      }
    } while (DVar1 != 0);
  }
  else {
    WaitForSingleObject(local_2c,0xffffffff);
  }
  BVar2 = GetExitCodeThread(local_2c,&local_30);
  FUN_00426bb0(param_1,BVar2 != 0);
  return local_30;
}

