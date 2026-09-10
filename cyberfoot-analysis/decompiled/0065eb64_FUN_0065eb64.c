// Address: 0065eb64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0065eb64(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uStack_174;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  undefined1 local_15c [332];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_16c = (undefined1 *)0x65eb7b;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puVar1 = PTR_DAT_0066b170;
  puStack_170 = &LAB_0065ecad;
  uStack_174 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_174;
  puStack_16c = &stack0xfffffffc;
  cVar3 = FUN_0040a43c(local_8);
  if (cVar3 != '\0') {
    FUN_00402edc(local_15c,local_8);
    FUN_004033ec(local_15c,1);
    FUN_00402964();
    FUN_0040302c(local_15c,&local_c,4,0);
    FUN_00402964();
    FUN_004060a8(puVar1,PTR_DAT_00489080,1,local_c);
    iVar4 = FUN_00405ef4(*(undefined4 *)puVar1);
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      local_c = 0;
      do {
        FUN_0040302c(local_15c,*(int *)puVar1 + local_c * 8,4,0);
        FUN_00402964();
        FUN_0040302c(local_15c,&local_10,4,0);
        FUN_00402964();
        FUN_004055c4(*(int *)puVar1 + 4 + local_c * 8,local_10);
        if (0 < local_10) {
          uVar6 = 0;
          uVar5 = FUN_00405250(*(undefined4 *)(*(int *)puVar1 + 4 + local_c * 8));
          FUN_0040302c(local_15c,uVar5,local_10 * 2,uVar6);
          FUN_00402964();
        }
        local_c = local_c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0040304c(local_15c);
    FUN_00402964();
  }
  puVar2 = puStack_16c;
  *in_FS_OFFSET = uStack_174;
  puStack_16c = &LAB_0065ecb4;
  puStack_170 = (undefined1 *)0x65ecac;
  FUN_004048d4(&local_8,uStack_174,puVar2);
  return;
}

