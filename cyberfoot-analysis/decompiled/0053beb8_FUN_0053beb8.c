// Address: 0053beb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0053beb8(undefined4 param_1)

{
  undefined1 *puVar1;
  DWORD dwLen;
  LPCVOID lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  CHAR local_114 [256];
  uint local_14;
  LPVOID local_10;
  DWORD local_c;
  undefined4 local_8;
  
  puStack_124 = (undefined1 *)0x53becf;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_128 = &LAB_0053bf64;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puStack_124 = &stack0xfffffffc;
  FUN_0040a7f8(local_114,local_8);
  dwLen = GetFileVersionInfoSizeA(local_114,&local_c);
  if (0 < (int)dwLen) {
    lpData = (LPCVOID)FUN_004027fc(dwLen);
    GetFileVersionInfoA(local_114,local_c,dwLen,lpData);
    VerQueryValueA(lpData,"\\",&local_10,&local_14);
    FUN_0040281c(lpData);
  }
  puVar1 = puStack_124;
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0053bf6b;
  puStack_128 = (undefined1 *)0x53bf63;
  FUN_004048d4(&local_8,uStack_12c,puVar1);
  return;
}

