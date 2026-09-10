// Address: 0064a800
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064a800(int param_1,undefined4 param_2)

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
  puStack_20 = (undefined1 *)0x64a819;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_24 = &LAB_0064a8b6;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar3 = FUN_00404ba4(local_8);
  if (0 < iVar3) {
    iVar5 = 1;
    do {
      FUN_00404abc(&local_c,*(undefined1 *)(local_8 + -1 + iVar5));
      iVar4 = FUN_00404ee8(local_c,"abcdefghijklmnopqrstuvxzyw0123456789");
      if (iVar4 != 0) {
        FUN_00404abc(&local_10,*(undefined1 *)(local_8 + -1 + iVar5));
        iVar4 = FUN_00404ee8(local_10,"abcdefghijklmnopqrstuvxzyw0123456789");
        uVar1 = (&DAT_0064a8fb)[iVar4];
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
  puStack_20 = &LAB_0064a8bd;
  puStack_24 = (undefined1 *)0x64a8b5;
  FUN_004048f8(&local_10,3,puVar2);
  return;
}

