// Address: 0040de30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040de30(void)

{
  undefined1 *puVar1;
  LCID LVar2;
  CALID Calendar;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  CALID Calendar_00;
  CALTYPE CVar5;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0040dec7;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar3 = &local_8;
  LVar2 = GetThreadLocale();
  FUN_0040dba8(LVar2,0x100b,&DAT_0040dedc,puVar3);
  Calendar = FUN_0040a034(local_8,1);
  if (Calendar - 3 < 3) {
    CVar5 = 4;
    Calendar_00 = Calendar;
    LVar2 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040dd7c,LVar2,Calendar_00,CVar5);
    iVar4 = 7;
    puVar3 = &DAT_0066c770;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    CVar5 = 3;
    LVar2 = GetThreadLocale();
    EnumCalendarInfoA((CALINFO_ENUMPROCA)&LAB_0040ddb8,LVar2,Calendar,CVar5);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040dece;
  puStack_14 = (undefined1 *)0x40dec6;
  FUN_004048d4(&local_8,uStack_18,puVar1);
  return;
}

