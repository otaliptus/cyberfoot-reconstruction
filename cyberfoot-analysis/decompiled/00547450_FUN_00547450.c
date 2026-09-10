// Address: 00547450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00547450(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = (undefined1 *)0x547466;
  local_8 = param_1;
  FUN_00405608(&local_8);
  puStack_24 = &LAB_005474f7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_004053fc(local_8,2,2,&local_c);
  FUN_005473bc(local_c);
  FUN_004053fc(local_8,4,2,&local_10);
  FUN_005473bc(local_10);
  FUN_004053fc(local_8,6,2,&local_14);
  FUN_005473bc(local_14);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005474fe;
  puStack_24 = (undefined1 *)0x5474f6;
  FUN_00405008(&local_14,4,puVar1);
  return;
}

