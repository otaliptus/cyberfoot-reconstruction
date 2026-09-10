// Address: 0042a8b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042a8b4(int param_1)

{
  undefined1 *puVar1;
  HPEN pHVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  LOGPEN local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_1c = (undefined1 *)0x42a8d3;
    FUN_0042967c(DAT_0066c8e4);
    puStack_20 = &LAB_0042a93a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    if (*(int *)(local_8 + 8) == 0) {
      local_18.lopnStyle = (UINT)*(ushort *)(&DAT_00662910 + (uint)*(byte *)(local_8 + 0x1c) * 2);
      local_18.lopnWidth.x = *(LONG *)(local_8 + 0x18);
      puStack_1c = &stack0xfffffffc;
      local_18.lopnColor = FUN_00429e64(*(undefined4 *)(local_8 + 0x14));
      pHVar2 = CreatePenIndirect(&local_18);
      *(HPEN *)(local_8 + 8) = pHVar2;
    }
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x42a941;
    puStack_20 = (undefined1 *)0x42a939;
    uVar3 = FUN_00429688(DAT_0066c8e4,uStack_24,puVar1);
    return uVar3;
  }
  return *(undefined4 *)(local_8 + 8);
}

