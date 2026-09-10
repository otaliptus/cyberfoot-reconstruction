// Address: 0065ecbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065ecbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined1 local_160 [332];
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = 0;
  puStack_170 = (undefined1 *)0x65ecda;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_174 = &LAB_0065ee1f;
  uStack_178 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_178;
  puStack_170 = &stack0xfffffffc;
  FUN_00404ff0(&local_14);
  cVar2 = FUN_0040a43c(local_8);
  if (cVar2 != '\0') {
    FUN_00402edc(local_160,local_8);
    FUN_004033ec(local_160,1);
    FUN_00402964();
    FUN_0040302c(local_160,&local_c,4,0);
    FUN_00402964();
    FUN_004060a8(&DAT_007c9670,PTR_DAT_0065bd7c,1,1);
    local_c = 0;
    do {
      FUN_0040302c(local_160,DAT_007c9670 + local_c * 8,4,0);
      FUN_00402964();
      FUN_0040302c(local_160,&local_10,4,0);
      FUN_00402964();
      FUN_004055c4(DAT_007c9670 + 4 + local_c * 8,local_10);
      if (0 < local_10) {
        uVar4 = 0;
        uVar3 = FUN_00405250(*(undefined4 *)(DAT_007c9670 + 4 + local_c * 8));
        FUN_0040302c(local_160,uVar3,local_10 * 2,uVar4);
        FUN_00402964();
      }
      local_c = local_c + 1;
    } while (local_c != 1);
    FUN_0040304c(local_160);
    FUN_00402964();
    thunk_FUN_0040502c(&local_14,*(undefined4 *)(DAT_007c9670 + 4));
    FUN_0040502c(param_3,local_14);
  }
  puVar1 = puStack_170;
  *in_FS_OFFSET = uStack_178;
  puStack_170 = &LAB_0065ee26;
  puStack_174 = (undefined1 *)0x65ee16;
  FUN_00404ff0(&local_14,uStack_178,puVar1);
  puStack_174 = (undefined1 *)0x65ee1e;
  FUN_004048d4(&local_8);
  return;
}

