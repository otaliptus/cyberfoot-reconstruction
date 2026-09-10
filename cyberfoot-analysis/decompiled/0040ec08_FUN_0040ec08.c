// Address: 0040ec08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ec08(undefined4 param_1)

{
  undefined1 *puVar1;
  LPCSTR pCVar2;
  DWORD dwLen;
  LPVOID lpData;
  BOOL BVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  DWORD *lpdwHandle;
  undefined1 *puVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  uint local_1c;
  LPVOID local_18;
  LPVOID local_14;
  DWORD local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  local_c = 0;
  puStack_28 = &LAB_0040ecde;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = 0xffffffff;
  FUN_0040496c(&local_c,param_1);
  thunk_FUN_00404db0(&local_c);
  lpdwHandle = &local_10;
  pCVar2 = (LPCSTR)FUN_00404da4(local_c);
  uStack_38 = 0x40ec4f;
  dwLen = GetFileVersionInfoSizeA(pCVar2,lpdwHandle);
  puVar1 = puStack_24;
  if (dwLen != 0) {
    lpData = (LPVOID)FUN_004027fc(dwLen);
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    local_14 = lpData;
    pCVar2 = (LPCSTR)FUN_00404da4(local_c);
    BVar3 = GetFileVersionInfoA(pCVar2,local_10,dwLen,lpData);
    if (BVar3 != 0) {
      BVar3 = VerQueryValueA(local_14,"\\",&local_18,&local_1c);
      if (BVar3 != 0) {
        local_8 = *(undefined4 *)((int)local_18 + 8);
      }
    }
    *in_FS_OFFSET = uStack_38;
    FUN_0040281c(local_14,uStack_38,puVar4);
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0040ece5;
  puStack_28 = (undefined1 *)0x40ecdd;
  FUN_004048d4(&local_c,uStack_2c,puVar1);
  return;
}

