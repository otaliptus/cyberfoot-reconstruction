// Address: 0042ebb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042ebb0(int param_1,undefined4 param_2)

{
  UINT nSize;
  LPBYTE lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x28) != 0) {
    nSize = GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x28) + 8),0,(LPBYTE)0x0);
    if (nSize != 0) {
      lpData = (LPBYTE)FUN_004027fc(nSize);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x28) + 8),nSize,lpData);
      FUN_00420b38(param_2,lpData,nSize);
      *in_FS_OFFSET = uVar1;
      FUN_0040281c(lpData,nSize,puVar2);
      return;
    }
  }
  return;
}

