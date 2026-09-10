// Address: 0043c71c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c71c(int *param_1,undefined4 param_2)

{
  HANDLE hMem;
  LPVOID pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  (**(code **)(*param_1 + 0x18))();
  hMem = GetClipboardData(1);
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (hMem == (HANDLE)0x0) {
    FUN_004048d4(param_2);
  }
  else {
    pvVar1 = GlobalLock(hMem);
    FUN_00404adc(param_2,pvVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  if (hMem != (HANDLE)0x0) {
    uStack_1c = 0x43c785;
    GlobalUnlock(hMem);
  }
  (**(code **)(*param_1 + 0x14))();
  return;
}

