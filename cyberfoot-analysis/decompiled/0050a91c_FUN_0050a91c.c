// Address: 0050a91c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050a91c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c [7];
  undefined4 local_20;
  
  puVar3 = local_3c;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_4c = (undefined1 *)0x50a943;
  FUN_0040583c(local_3c,PTR_DAT_00508a00);
  puStack_50 = &LAB_0050a977;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  FUN_0040502c(param_3,local_20);
  puVar1 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0050a97e;
  puStack_50 = (undefined1 *)0x50a976;
  FUN_004056f8(local_3c,PTR_DAT_00508a00,puVar1);
  return;
}

