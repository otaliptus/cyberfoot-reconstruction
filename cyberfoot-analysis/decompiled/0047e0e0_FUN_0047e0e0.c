// Address: 0047e0e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e0e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  undefined4 *in_FS_OFFSET;
  WNDENUMPROC lpfn;
  LPARAM lParam;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  uVar2 = DAT_006631fc;
  uVar1 = DAT_006631f0;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_006631fc = 0;
  puStack_24 = &LAB_0047e183;
  local_28 = *in_FS_OFFSET;
  DAT_006631f0 = param_1;
  *in_FS_OFFSET = &local_28;
  puStack_30 = &LAB_0047e14c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = (WNDENUMPROC)&LAB_0047e090;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  DAT_006631fc = uVar2;
  DAT_006631f0 = uVar1;
  return;
}

