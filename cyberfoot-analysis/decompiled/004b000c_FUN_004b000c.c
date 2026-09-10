// Address: 004b000c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b000c(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [335];
  undefined1 local_11;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_1a8 = &stack0xfffffffc;
  local_19c = 0;
  local_8 = 0;
  puStack_1ac = &LAB_004b0215;
  uStack_1b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1b0;
  *PTR_DAT_0066b528 = 0;
  FUN_00402edc(local_160,param_1);
  FUN_004033ec(local_160,1);
  iVar2 = FUN_004029e4();
  uVar3 = iVar2 == 0;
  if ((bool)uVar3) {
    FUN_004048d4(&local_8);
    FUN_0040302c(local_160,&local_11,1,local_c);
    FUN_00402964();
    FUN_00404abc(&local_8,local_11);
    FUN_0040302c(local_160,&local_11,1,local_c);
    FUN_00402964();
    FUN_00404abc(&local_19c,local_11);
    FUN_00404bac(&local_8,local_19c);
    FUN_00404cf0(local_8,&DAT_004b022c);
    if ((bool)uVar3) {
      FUN_0040302c(local_160,&local_10,4,local_c);
      FUN_00402964();
      local_16c = local_10;
      FUN_0040302c(local_160,&local_10,4,local_c);
      FUN_00402964();
      local_168 = local_10;
      FUN_0040302c(local_160,&local_10,4,local_c);
      FUN_00402964();
      local_164 = local_10;
      FUN_0040302c(local_160,&local_10,4,local_c);
      FUN_00402964();
      local_198 = local_10;
      FUN_0040302c(local_160,&local_10,4,local_c);
      FUN_00402964();
      local_194 = local_10;
      FUN_0040302c(local_160,&local_10,4,local_c);
      FUN_00402964();
      local_190 = local_10;
      FUN_0040304c(local_160);
      FUN_00402964();
      *param_2 = (undefined2)local_194;
      *param_3 = (undefined2)local_190;
    }
    else {
      FUN_0040304c(local_160);
      FUN_00402964();
    }
  }
  puVar1 = puStack_1a8;
  *in_FS_OFFSET = uStack_1b0;
  puStack_1a8 = &LAB_004b021c;
  puStack_1ac = (undefined1 *)0x4b020c;
  FUN_004048d4(&local_19c,uStack_1b0,puVar1);
  puStack_1ac = (undefined1 *)0x4b0214;
  FUN_004048d4(&local_8);
  return;
}

