// Address: 0043b1a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043b1a8(int param_1)

{
  undefined1 *puVar1;
  UINT_PTR UVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0043b227;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  KillTimer(*(HWND *)(param_1 + 0x34),1);
  if (((*(UINT *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x40) != '\0')) &&
     (*(short *)(param_1 + 0x3a) != 0)) {
    UVar2 = SetTimer(*(HWND *)(param_1 + 0x34),1,*(UINT *)(param_1 + 0x30),(TIMERPROC)0x0);
    if (UVar2 == 0) {
      FUN_00406d44(PTR_PTR_0066b75c,&local_8);
      FUN_0040e370(PTR_DAT_0041b680,1,local_8);
      FUN_00404250();
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0043b22e;
  puStack_18 = (undefined1 *)0x43b226;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

