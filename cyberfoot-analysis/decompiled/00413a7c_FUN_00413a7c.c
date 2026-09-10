// Address: 00413a7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00413a7c(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puVar1;
  VARIANTARG local_15;
  undefined1 local_5;
  
  puVar1 = &stack0xfffffffc;
  puStackY_24 = (undefined1 *)0x413a8e;
  VariantInit(&local_15);
  puStackY_24 = &LAB_00413ad0;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_00412164(&local_15,param_1);
  (*DAT_0066c818)(&local_15);
  local_5 = FUN_00413b2c(&local_15);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x413acf;
  FUN_00411d38(&local_15,uStackY_28,puVar1);
  return;
}

