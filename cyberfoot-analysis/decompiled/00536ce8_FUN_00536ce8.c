// Address: 00536ce8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00536ce8(int param_1,byte param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  byte local_9;
  int local_8;
  
  local_14 = 0;
  puStack_24 = (undefined1 *)0x536d07;
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_28 = &LAB_00536d98;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_004048d4(local_10);
  iVar3 = FUN_00404ba4(local_8);
  if (0 < iVar3) {
    iVar4 = 1;
    do {
      cVar1 = *(char *)(local_8 + -1 + iVar4);
      if ((cVar1 == '\r') || (cVar1 == '\n')) {
        if ((cVar1 == '\r' & local_9) != 0) {
          FUN_00404bac(local_10,&DAT_00536db0);
        }
      }
      else {
        FUN_00404abc(&local_14,cVar1);
        FUN_00404bac(local_10,local_14);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00536d9f;
  puStack_28 = (undefined1 *)0x536d8f;
  FUN_004048d4(&local_14,uStack_2c,puVar2);
  puStack_28 = (undefined1 *)0x536d97;
  FUN_004048d4(&local_8);
  return;
}

