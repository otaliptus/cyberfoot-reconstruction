// Address: 0052cfe0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0052cfe0(int param_1,byte param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  byte local_9;
  int local_8;
  
  local_10 = 0;
  puStack_20 = (undefined1 *)0x52cffe;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_24 = &LAB_0052d08e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_004048d4(param_3);
  iVar3 = FUN_00404ba4(local_8);
  if (0 < iVar3) {
    iVar4 = 1;
    do {
      cVar1 = *(char *)(local_8 + -1 + iVar4);
      if ((cVar1 == '\n') || (cVar1 == '\r')) {
        if ((*(char *)(local_8 + -1 + iVar4) == '\r' & local_9) != 0) {
          FUN_00404bac(param_3,&DAT_0052d0a4);
        }
      }
      else {
        FUN_00404abc(&local_10,*(undefined1 *)(local_8 + -1 + iVar4));
        FUN_00404bac(param_3,local_10);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0052d095;
  puStack_24 = (undefined1 *)0x52d085;
  FUN_004048d4(&local_10,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x52d08d;
  FUN_004048d4(&local_8);
  return;
}

