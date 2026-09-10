// Address: 0043ca04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043ca04(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  HANDLE local_14;
  ushort local_e;
  HANDLE local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x43ca18;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x18))();
  puStack_20 = &LAB_0043ca79;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0043c554(local_8);
  local_14 = (HANDLE)0x0;
  (**(code **)(*param_2 + 0x60))(param_2,&local_e,&local_c);
  SetClipboardData((uint)local_e,local_c);
  if (local_14 != (HANDLE)0x0) {
    SetClipboardData(9,local_14);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)&local_14;
  puStack_20 = &LAB_0043ca80;
  iStack_24 = 0x43ca78;
  (**(code **)(*local_8 + 0x14))(local_8,*local_8,puVar1);
  return;
}

