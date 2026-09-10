// Address: 0040c69c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040c69c(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  LPCSTR lpFormat;
  LCID Locale;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 local_11c;
  CHAR local_118 [256];
  SYSTEMTIME local_18;
  undefined4 local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_8 = 0;
  puStack_12c = &LAB_0040c7ea;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_004048d4(param_2);
  local_18.wYear = *(WORD *)(param_4 + -0xe);
  local_18.wMonth = *(WORD *)(param_4 + -0x10);
  local_18.wDay = *(WORD *)(param_4 + -0x12);
  FUN_0040496c(&local_8,&DAT_0040c800);
  iVar3 = 0x100;
  lpDateStr = local_118;
  lpFormat = (LPCSTR)FUN_00404da4(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar3 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,iVar3);
  if (iVar3 != 0) {
    FUN_00404b54(param_2,local_118,0x100);
    if (param_1 == 1) {
      if (DAT_0066c748 == 4) {
        if (DAT_0066c74c == 1) {
          uVar2 = FUN_00404ba4(*param_2);
          iVar3 = FUN_0040edb0(*param_2,uVar2);
          if (iVar3 == 4) {
            iVar3 = FUN_0040eec0(*param_2,3);
            FUN_00404adc(&local_11c,local_118 + iVar3 + -1);
            uVar2 = FUN_0040ef24(local_11c,2);
            FUN_004049c4(param_2,local_118 + iVar3 + -1,uVar2);
          }
        }
      }
      else if (DAT_0066c748 == 0x11) {
        puVar4 = param_2;
        uVar2 = FUN_0040ef24(*param_2,1);
        FUN_00404e04(*param_2,1,uVar2,puVar4);
      }
    }
  }
  puVar1 = puStack_128;
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_0040c7f1;
  puStack_12c = (undefined1 *)0x40c7e1;
  FUN_004048d4(&local_11c,uStack_130,puVar1);
  puStack_12c = (undefined1 *)0x40c7e9;
  FUN_004048d4(&local_8);
  return;
}

