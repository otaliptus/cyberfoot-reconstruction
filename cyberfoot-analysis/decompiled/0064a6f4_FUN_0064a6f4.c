// Address: 0064a6f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064a6f4(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  puStack_20 = (undefined1 *)0x64a70d;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_24 = &LAB_0064a7aa;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar3 = FUN_00404ba4(local_8);
  if (0 < iVar3) {
    iVar5 = 1;
    do {
      FUN_00404abc(&local_c,*(undefined1 *)(local_8 + -1 + iVar5));
      iVar4 = FUN_00404ee8(local_c,&DAT_0064a7c0);
      if (iVar4 != 0) {
        FUN_00404abc(&local_10,*(undefined1 *)(local_8 + -1 + iVar5));
        iVar4 = FUN_00404ee8(local_10,&DAT_0064a7c0);
        uVar1 = (&DAT_0064a7e3)[iVar4];
        iVar4 = thunk_FUN_00404db0(&local_8);
        *(undefined1 *)(iVar4 + -1 + iVar5) = uVar1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00404928(param_2,local_8);
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0064a7b1;
  puStack_24 = (undefined1 *)0x64a7a9;
  FUN_004048f8(&local_10,3,puVar2);
  return;
}

