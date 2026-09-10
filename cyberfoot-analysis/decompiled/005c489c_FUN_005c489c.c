// Address: 005c489c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c489c(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_005c4906;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = 1;
  do {
    FUN_00409dd8(iVar3,&local_c);
    FUN_00404bf0(&local_8,&LAB_005c491c,local_c);
    uVar2 = FUN_00427360(DAT_006d2b98,local_8);
    FUN_0043aa68(uVar2,0);
    puVar1 = puStack_14;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x11);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005c490d;
  puStack_18 = (undefined1 *)0x5c4905;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

