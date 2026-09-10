// Address: 0043c980
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043c980(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE local_14;
  ushort local_e;
  HANDLE local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x43c994;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_0043c9f5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0043c554(local_8);
  local_14 = (HANDLE)0x0;
  FUN_0042d8b8(param_2,&local_e,&local_c,&local_14);
  SetClipboardData((uint)local_e,local_c);
  if (local_14 != (HANDLE)0x0) {
    SetClipboardData(9,local_14);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0043c9fc;
  puStack_20 = (undefined1 *)0x43c9f4;
  (**(code **)(*local_8 + 0x14))(local_8,*local_8,puVar1);
  return;
}

