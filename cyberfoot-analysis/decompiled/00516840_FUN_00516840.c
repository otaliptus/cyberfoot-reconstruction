// Address: 00516840
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00516840(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined4 local_10c;
  undefined4 local_108;
  CHAR local_104 [256];
  
  puStack_114 = &stack0xfffffffc;
  local_10c = 0;
  local_108 = 0;
  puStack_118 = &LAB_0051691f;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  if (param_1 != 0) {
    *in_FS_OFFSET = uStack_11c;
    puStack_114 = &LAB_00516926;
    puStack_118 = (undefined1 *)0x51691e;
    FUN_004048f8(&local_10c,2,&stack0xfffffffc);
    return;
  }
  DVar1 = GetLastError();
  if (DVar1 != 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar1,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar1 != 0) {
      uVar2 = FUN_0051683c();
      FUN_00404b54(&local_108,local_104,0x100,uVar2);
      FUN_0040e370(PTR_DAT_0041b680,1,local_108);
      FUN_00404250();
      return;
    }
  }
  uVar2 = FUN_0051683c();
  FUN_00406d44(PTR_PTR_0066addc,&local_10c);
  FUN_0040e370(PTR_DAT_0041b680,1,local_10c,uVar2);
  FUN_00404250();
  return;
}

