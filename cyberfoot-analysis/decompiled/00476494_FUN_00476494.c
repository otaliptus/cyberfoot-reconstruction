// Address: 00476494
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00476494(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  puStack_1c = (undefined1 *)0x4764ad;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_20 = &LAB_0047656f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  do {
    do {
      cVar2 = FUN_00476438(&local_8,DAT_00663144);
    } while (cVar2 != '\0');
    cVar2 = FUN_00476438(&local_8,&DAT_00476588);
  } while (((cVar2 != '\0') || (cVar2 = FUN_00476438(&local_8,DAT_00663148), cVar2 != '\0')) ||
          (cVar2 = FUN_00476438(&local_8,DAT_0066314c), cVar2 != '\0'));
  if (local_8 != 0) {
    sVar4 = 8;
    do {
      FUN_00476234(sVar4,&local_c);
      iVar3 = FUN_00409790(local_8,local_c);
      if (iVar3 == 0) break;
      sVar4 = sVar4 + 1;
    } while (sVar4 != 0x256);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00476576;
  puStack_20 = (undefined1 *)0x47656e;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

