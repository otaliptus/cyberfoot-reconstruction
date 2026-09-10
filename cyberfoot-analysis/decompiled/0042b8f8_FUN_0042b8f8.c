// Address: 0042b8f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b8f8(void)

{
  undefined1 *puVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  undefined4 local_108;
  CHAR local_104 [256];
  
  puStack_110 = &stack0xfffffffc;
  local_108 = 0;
  puStack_114 = &LAB_0042b994;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  DVar2 = GetLastError();
  if (DVar2 != 0) {
    DVar2 = FormatMessageA(0x1000,(LPCVOID)0x0,DVar2,0x400,local_104,0x100,(va_list *)0x0);
    if (DVar2 != 0) {
      FUN_00404b54(&local_108,local_104,0x100);
      FUN_0040e370(PTR_DAT_0041b680,1,local_108);
      FUN_00404250();
      goto LAB_0042b97b;
    }
  }
  FUN_0042b8a4();
LAB_0042b97b:
  puVar1 = puStack_110;
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_0042b99b;
  puStack_114 = (undefined1 *)0x42b993;
  FUN_004048d4(&local_108,uStack_118,puVar1);
  return;
}

