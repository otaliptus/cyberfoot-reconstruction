// Address: 005c6efc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005c6efc(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_005c7057;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  DAT_006d2c1c = 1;
  FUN_00466128(*(undefined4 *)(param_1 + 0x328),0);
  (**(code **)(**(int **)(param_1 + 0x37c) + 0xd8))();
  if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
    iVar4 = 1;
    do {
      iVar3 = 1;
      do {
        FUN_00642c50(0xd1,&local_c);
        uVar2 = FUN_0064d61c(iVar3,iVar4);
        FUN_00409dd8(uVar2,&local_14);
        FUN_004051d4(&local_10,local_14);
        FUN_00405330(&local_8,3);
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x37c),local_8);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 10);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
  }
  else {
    iVar4 = 1;
    do {
      iVar3 = 1;
      do {
        FUN_00642c50(0xd1,&local_1c);
        uVar2 = FUN_0064d61c(iVar3,iVar4);
        FUN_00409dd8(uVar2,&local_24);
        FUN_004051d4(&local_20,local_24);
        FUN_00405330(&local_18,3);
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x37c),local_18);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
  }
  FUN_005c6e6c(param_1);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_005c705e;
  puStack_38 = (undefined1 *)0x5c7034;
  FUN_004048d4(&local_24,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x5c7041;
  FUN_00405008(&local_20,3);
  puStack_38 = (undefined1 *)0x5c7049;
  FUN_004048d4(&local_14);
  puStack_38 = (undefined1 *)0x5c7056;
  FUN_00405008(&local_10,3);
  return;
}

