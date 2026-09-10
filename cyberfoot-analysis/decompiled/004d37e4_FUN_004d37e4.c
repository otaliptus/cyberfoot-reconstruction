// Address: 004d37e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d37e4(undefined4 param_1,LPCVOID param_2,DWORD param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  DWORD DVar2;
  LPWSTR lpBuffer;
  LPSTR lpBuffer_00;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  va_list *ppcVar5;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  DWORD local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  DWORD local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_38 = &LAB_004d38f7;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  DVar3 = 0x3200;
  if (param_2 != (LPCVOID)0x0) {
    DVar3 = 0x3a00;
  }
  local_c = param_3;
  local_8 = param_1;
  if (DAT_0067ab28 == '\0') {
    FUN_00404f30(&local_10,0x100);
    ppcVar5 = (va_list *)0x0;
    DVar2 = FUN_00404ba4(local_10);
    lpBuffer_00 = (LPSTR)FUN_00404da4(local_10);
    DVar3 = FormatMessageA(DVar3,param_2,local_c,0,lpBuffer_00,DVar2,ppcVar5);
    FUN_00404f30(&local_10,DVar3);
    FUN_004051d4(param_4,local_10);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_004055c4(param_4,0x100);
    ppcVar5 = (va_list *)0x0;
    DVar2 = FUN_00405260(*param_4);
    lpBuffer = (LPWSTR)FUN_00405250(*param_4);
    DVar3 = FormatMessageW(DVar3,param_2,local_c,0,lpBuffer,DVar2,ppcVar5);
    FUN_004055c4(param_4,DVar3);
  }
  FUN_00409a10(*param_4,&local_14);
  bVar4 = true;
  FUN_00405378(local_14);
  if (bVar4) {
    local_24 = local_c;
    local_20 = 0;
    local_1c = local_8;
    local_18 = 0xf;
    FUN_0040b460(L"Unspecified error (%d) from %s.",&local_24,1,param_4);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004d38fe;
  puStack_38 = (undefined1 *)0x4d38ee;
  FUN_00404ff0(&local_14,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x4d38f6;
  FUN_004048d4(&local_10);
  return;
}

