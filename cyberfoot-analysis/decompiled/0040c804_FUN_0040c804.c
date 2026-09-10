// Address: 0040c804
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040c804(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  LPCSTR lpFormat;
  LCID Locale;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  CHAR local_118 [256];
  SYSTEMTIME local_18;
  undefined4 local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = 0;
  puStack_128 = &LAB_0040c8e2;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  FUN_004048d4(param_2);
  local_18.wYear = *(WORD *)(param_4 + -0xe);
  local_18.wMonth = *(WORD *)(param_4 + -0x10);
  local_18.wDay = *(WORD *)(param_4 + -0x12);
  if (param_1 < 3) {
    FUN_0040496c(&local_8,&DAT_0040c8f8);
  }
  else {
    FUN_0040496c(&local_8,&DAT_0040c904);
  }
  iVar2 = 0x100;
  lpDateStr = local_118;
  lpFormat = (LPCSTR)FUN_00404da4(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar2 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,iVar2);
  if (iVar2 != 0) {
    FUN_00404b54(param_2,local_118,0x100);
    if ((param_1 == 1) && (*(char *)*param_2 == '0')) {
      puVar3 = param_2;
      iVar2 = FUN_00404ba4(*param_2);
      FUN_00404e04(*param_2,2,iVar2 + -1,puVar3);
    }
  }
  puVar1 = puStack_124;
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0040c8e9;
  puStack_128 = (undefined1 *)0x40c8e1;
  FUN_004048d4(&local_8,uStack_12c,puVar1);
  return;
}

