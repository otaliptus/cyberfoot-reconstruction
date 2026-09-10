// Address: 00487c40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487c40(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00487d50;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x487c6a;
  local_8 = param_1;
  uVar3 = FUN_00487bc8(param_1);
  if ((*(char *)(local_8 + 0x88) != '\0') && (*(int *)(local_8 + 0x48) == 0)) {
    puStack_30 = (undefined1 *)0x487c89;
    FUN_00488198(local_8);
  }
  puStack_30 = (undefined1 *)0x487c93;
  FUN_00485bc0(uVar3,&local_14);
  puStack_30 = (undefined1 *)0x487c9e;
  FUN_00463318(local_14,&local_10);
  puStack_30 = (undefined1 *)0x487cab;
  FUN_00487e00(DAT_0066cbf4,local_10);
  local_9 = '\x01';
  puStack_34 = &LAB_00487cf7;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  if (*(short *)(local_8 + 0x102) != 0) {
    puStack_30 = &stack0xfffffffc;
    (**(code **)(local_8 + 0x100))(*(undefined4 *)(local_8 + 0x104),local_8,&local_9);
  }
  if (local_9 != '\0') {
    FUN_00487b64(local_8);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x487d11;
  DVar4 = GetCurrentThreadId();
  if (DVar4 == *(DWORD *)PTR_DAT_0066b7a8) {
    puStack_30 = (undefined1 *)0x487d22;
    cVar2 = FUN_004267a8(0);
    if (cVar2 != '\0') {
      local_9 = '\0';
    }
  }
  if (local_9 != '\0') {
    puStack_30 = (undefined1 *)0x487d35;
    WaitMessage();
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00487d57;
  puStack_28 = (undefined1 *)0x487d4f;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

