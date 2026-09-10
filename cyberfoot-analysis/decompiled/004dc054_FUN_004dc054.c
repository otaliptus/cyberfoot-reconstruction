// Address: 004dc054
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dc054(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  uVar4 = 1;
  puStack_28 = &LAB_004dc11e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00404b6c(&local_8,*(undefined4 *)(param_1 + 0xb4));
  FUN_00404cf0(local_8,*(undefined4 *)(param_1 + 0x30));
  if (!(bool)uVar4) {
    FUN_004051d4(&local_c,*(undefined4 *)(param_1 + 0x30));
    uVar2 = local_c;
    FUN_00404b6c(&local_14,*(undefined4 *)(param_1 + 0xb4));
    FUN_004051d4(&local_10,local_14);
    cVar3 = FUN_004dbc6c(local_10,uVar2);
    if (cVar3 != '\0') {
      FUN_004051d4(&local_18,*(undefined4 *)(param_1 + 0x30));
      FUN_004dbd04(local_18,param_1 + 0xb4);
    }
  }
  FUN_004d83a8(param_1 + 0xb4,*(undefined4 *)(param_1 + 0x30),param_2);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004dc125;
  puStack_28 = (undefined1 *)0x4dc100;
  FUN_00404ff0(&local_18,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x4dc108;
  FUN_004048d4(&local_14);
  puStack_28 = (undefined1 *)0x4dc115;
  FUN_00405008(&local_10,2);
  puStack_28 = (undefined1 *)0x4dc11d;
  FUN_004048d4(&local_8);
  return;
}

