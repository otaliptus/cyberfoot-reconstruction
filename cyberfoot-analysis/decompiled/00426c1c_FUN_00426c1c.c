// Address: 00426c1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00426c1c(undefined4 param_1,undefined4 *param_2)

{
  DWORD DVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_10;
  HANDLE local_c;
  undefined4 *local_8;
  
  local_8 = param_2;
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)PTR_DAT_0066b7a8) {
    (*(code *)local_8[2])(local_8[3]);
    return;
  }
  puStack_28 = (undefined1 *)0x426c50;
  local_c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,-1,0,(LPCSTR)0x0);
  *in_FS_OFFSET = &stack0xffffffe0;
  puStack_28 = (undefined1 *)0x426c6b;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
  puStack_28 = &LAB_00426d20;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (DAT_00662654 == 0) {
    DAT_00662654 = FUN_00403a54(PTR_PTR_0041b73c,1);
  }
  local_10 = local_8;
  FUN_0041dec0(DAT_00662654,&local_10);
  FUN_00426784();
  if (DAT_006625c0._2_2_ != 0) {
    (*DAT_006625c0)(DAT_006625c4,*local_10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  WaitForSingleObject(local_c,0xffffffff);
  *in_FS_OFFSET = uStack_38;
  uStack_38 = 0x426d00;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c86c);
  return;
}

