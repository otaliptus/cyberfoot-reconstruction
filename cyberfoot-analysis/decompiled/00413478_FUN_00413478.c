// Address: 00413478
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00413478(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_1c;
  undefined4 local_c;
  
  puVar1 = &stack0xfffffffc;
  puStackY_28 = (undefined1 *)0x41348a;
  VariantInit(&local_1c);
  puStackY_28 = &LAB_004134cf;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00412164(&local_1c,param_1);
  (*DAT_0066c818)(&local_1c);
  local_c = FUN_00413530(&local_1c);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_28 = (undefined1 *)0x4134ce;
  FUN_00411d38(&local_1c,uStackY_2c,puVar1);
  return;
}

