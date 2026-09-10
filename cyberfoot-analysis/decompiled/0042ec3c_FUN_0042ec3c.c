// Address: 0042ec3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042ec3c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 local_26 [2];
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  undefined2 local_12;
  HDC local_10;
  UINT local_c;
  LPBYTE local_8;
  
  puVar5 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_004032a8(local_26,0x16,0);
  iVar1 = *(int *)(param_1 + 0x28);
  local_26[0] = 0x9ac6cdd7;
  local_18 = *(ushort *)(iVar1 + 0x18);
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  iVar2 = MulDiv(*(int *)(iVar1 + 0xc),(uint)local_18,0x9ec);
  local_1c = (undefined2)iVar2;
  iVar2 = MulDiv(*(int *)(iVar1 + 0x10),(uint)local_18,0x9ec);
  local_1a = (undefined2)iVar2;
  local_12 = FUN_0042c6e8(local_26);
  local_10 = GetDC((HWND)0x0);
  *in_FS_OFFSET = &stack0xffffffc4;
  local_c = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),0,(LPBYTE)0x0,8,local_10);
  local_8 = (LPBYTE)FUN_004027fc(local_c);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  UVar3 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),local_c,local_8,8,local_10);
  if (UVar3 < local_c) {
    FUN_0042b8f8();
  }
  FUN_00420b38(param_2,local_26,0x16);
  FUN_00420b38(param_2,local_8,local_c);
  *in_FS_OFFSET = uVar4;
  FUN_0040281c(local_8,local_c,puVar5);
  return;
}

