// Address: 0054b400
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054b400(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  puStack_24 = (undefined1 *)0x54b41f;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_28 = &LAB_0054b4b1;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00404ff0(&local_10);
  uVar2 = FUN_00404ba4(local_8);
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  if (0 < iVar4) {
    iVar3 = 1;
    do {
      FUN_00405118(&local_14,
                   (ushort)*(byte *)(local_8 + -1 + iVar3 * 2) +
                   (*(byte *)(local_8 + -2 + iVar3 * 2) - 1) * 0x100);
      FUN_0040526c(&local_10,local_14);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0040502c(local_c,local_10);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0054b4b8;
  puStack_28 = (undefined1 *)0x54b4a8;
  FUN_00405008(&local_14,2,puVar1);
  puStack_28 = (undefined1 *)0x54b4b0;
  FUN_004048d4(&local_8);
  return;
}

