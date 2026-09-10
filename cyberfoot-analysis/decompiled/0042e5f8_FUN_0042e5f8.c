// Address: 0042e5f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042e5f8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  HENHMETAFILE pHVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 local_9a [104];
  LONG local_32;
  LONG local_2e;
  undefined4 local_2a;
  int local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  ushort local_18;
  short local_12;
  BYTE *local_10;
  UINT local_c;
  int *local_8;
  
  puStack_ac = (undefined1 *)0x42e613;
  local_c = param_3;
  local_8 = param_2;
  FUN_0042e494(param_1);
  puStack_ac = (undefined1 *)0x42e623;
  (**(code **)(*local_8 + 0xc))(local_8,&local_26,0x16);
  if (local_26 == -0x65393229) {
    puStack_ac = (undefined1 *)0x42e634;
    sVar3 = FUN_0042c6e8(&local_26);
    if (sVar3 == local_12) goto LAB_0042e63f;
  }
  puStack_ac = (undefined1 *)0x42e63f;
  FUN_0042b898();
LAB_0042e63f:
  local_c = local_c - 0x16;
  puStack_ac = (undefined1 *)0x42e64b;
  local_10 = (BYTE *)FUN_004027fc(local_c);
  iVar1 = *(int *)(param_1 + 0x28);
  puStack_b0 = &LAB_0042e767;
  uStack_b4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b4;
  puStack_ac = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,local_10,local_c);
  *(ushort *)(*(int *)(param_1 + 0x28) + 0x18) = local_18;
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  iVar4 = MulDiv((int)local_1c - (int)local_20,0x9ec,(uint)local_18);
  *(int *)(iVar1 + 0xc) = iVar4;
  iVar4 = MulDiv((int)local_1a - (int)local_1e,0x9ec,(uint)local_18);
  *(int *)(iVar1 + 0x10) = iVar4;
  local_9a._100_4_ = 8;
  local_32 = 0;
  local_2e = 0;
  local_2a = 0;
  pHVar5 = SetWinMetaFileBits(local_c,local_10,(HDC)0x0,(METAFILEPICT *)(local_9a + 100));
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar5;
  if (pHVar5 == (HENHMETAFILE)0x0) {
    FUN_0042b898();
  }
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)local_9a);
  local_9a._100_4_ = 8;
  local_32 = local_9a._32_4_;
  local_2e = local_9a._36_4_;
  local_2a = 0;
  DeleteEnhMetaFile(*(HENHMETAFILE *)(iVar1 + 8));
  pHVar5 = SetWinMetaFileBits(local_c,local_10,(HDC)0x0,(METAFILEPICT *)(local_9a + 100));
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar5;
  if (pHVar5 == (HENHMETAFILE)0x0) {
    FUN_0042b898();
  }
  puVar2 = puStack_ac;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *in_FS_OFFSET = uStack_b4;
  puStack_ac = &LAB_0042e76e;
  puStack_b0 = (undefined1 *)0x42e766;
  FUN_0040281c(local_10,local_c,puVar2);
  return;
}

