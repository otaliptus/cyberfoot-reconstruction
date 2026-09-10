// Address: 0045b818
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045b818(int *param_1,LPRECT param_2,uint param_3)

{
  undefined1 *puVar1;
  char cVar2;
  UINT format;
  int iVar3;
  LPCSTR pCVar4;
  HDC pHVar5;
  undefined4 *in_FS_OFFSET;
  LPRECT lprc;
  UINT format_00;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  char *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  puStack_1c = &LAB_0045b96e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_1 + 0x90))(param_1,&local_8);
  if (((param_3 & 0x400) != 0) &&
     ((local_8 == (char *)0x0 ||
      ((((char)param_1[0x5c] != '\0' && (*local_8 == '&')) && (local_8[1] == '\0')))))) {
    FUN_00404bac(&local_8,&DAT_0045b984);
  }
  if ((char)param_1[0x5c] == '\0') {
    param_3 = param_3 | 0x800;
  }
  format = FUN_004684f8(param_1,param_3);
  FUN_0042b4a4(param_1[0x58],param_1[0x1a]);
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 == '\0') {
    OffsetRect(param_2,1,1);
    FUN_0042a3a0(*(undefined4 *)(param_1[0x58] + 0xc),0xff000014);
    lprc = param_2;
    format_00 = format;
    iVar3 = FUN_00404ba4(local_8);
    pCVar4 = (LPCSTR)FUN_00404da4(local_8);
    pHVar5 = (HDC)FUN_0042b5a8(param_1[0x58]);
    DrawTextA(pHVar5,pCVar4,iVar3,lprc,format_00);
    OffsetRect(param_2,-1,-1);
    FUN_0042a3a0(*(undefined4 *)(param_1[0x58] + 0xc),0xff000010);
    iVar3 = FUN_00404ba4(local_8);
    pCVar4 = (LPCSTR)FUN_00404da4(local_8);
    pHVar5 = (HDC)FUN_0042b5a8(param_1[0x58]);
    DrawTextA(pHVar5,pCVar4,iVar3,param_2,format);
  }
  else {
    iVar3 = FUN_00404ba4(local_8);
    pCVar4 = (LPCSTR)FUN_00404da4(local_8);
    pHVar5 = (HDC)FUN_0042b5a8(param_1[0x58]);
    DrawTextA(pHVar5,pCVar4,iVar3,param_2,format);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045b975;
  puStack_1c = (undefined1 *)0x45b96d;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

