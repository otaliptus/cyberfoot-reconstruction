// Address: 0040dc58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040dc58(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  LCID local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_0040dd6b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = GetThreadLocale();
  iVar2 = 1;
  puVar3 = &DAT_0066c6ac;
  puVar4 = &DAT_0066c6dc;
  do {
    FUN_0040dc1c(iVar2 + 0x43,iVar2 + -1,&PTR_PTR_006621b0,&local_10,0xb);
    FUN_00404928(puVar3,local_10,&stack0xfffffffc);
    FUN_0040dc1c(iVar2 + 0x37,iVar2 + -1,&PTR_PTR_006621e0,&local_14,0xb);
    FUN_00404928(puVar4,local_14,&stack0xfffffffc);
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 4;
    puVar3 = puVar3 + 4;
  } while (iVar2 != 0xd);
  iVar2 = 1;
  puVar3 = &DAT_0066c70c;
  puVar5 = &DAT_0066c728;
  do {
    local_c = (iVar2 + 5) % 7;
    FUN_0040dc1c(local_c + 0x31,iVar2 + -1,&PTR_PTR_00662210,&local_18,6);
    FUN_00404928(puVar3,local_18,&stack0xfffffffc);
    FUN_0040dc1c(local_c + 0x2a,iVar2 + -1,&PTR_PTR_0066222c,&local_1c,6);
    FUN_00404928(puVar5,local_1c,&stack0xfffffffc);
    puVar1 = puStack_2c;
    iVar2 = iVar2 + 1;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (iVar2 != 8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0040dd72;
  puStack_30 = (undefined1 *)0x40dd6a;
  FUN_004048f8(&local_1c,4,puVar1);
  return;
}

