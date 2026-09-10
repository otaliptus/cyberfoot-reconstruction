// Address: 0044be34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044be34(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0044bf1a;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puStack_2c = (undefined1 *)0x44be5d;
  local_8 = param_1;
  FUN_0040a668(param_2,&local_10);
  puStack_2c = (undefined1 *)0x44be68;
  FUN_0040f05c(local_10,&local_c);
  puStack_2c = (undefined1 *)0x44be7a;
  FUN_00404e44(&local_c,1,1);
  for (ppuVar3 = (undefined **)PTR_PTR_00662ce8; bVar4 = ppuVar3 == (undefined **)0x0, !bVar4;
      ppuVar3 = (undefined **)ppuVar3[2]) {
    puStack_2c = (undefined1 *)0x44be91;
    FUN_00404cf0(ppuVar3[1],local_c);
    if (bVar4) break;
  }
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR_PTR_00662cdc;
  }
  if (*(int *)(local_8 + 0x18) == 0) {
    puStack_2c = (undefined1 *)0x44beb5;
    uVar2 = FUN_00403a54(*ppuVar3,1);
    *(undefined4 *)(local_8 + 0x18) = uVar2;
  }
  puStack_30 = &LAB_0044bedd;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0041fd48(local_8,param_2);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0044bf21;
  puStack_24 = (undefined1 *)0x44bf19;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

