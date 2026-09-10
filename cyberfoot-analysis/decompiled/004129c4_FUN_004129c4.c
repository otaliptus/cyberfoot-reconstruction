// Address: 004129c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004129c4(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puVar1;
  VARIANTARG local_18;
  undefined4 local_8;
  
  puVar1 = &stack0xfffffffc;
  puStackY_24 = (undefined1 *)0x4129d6;
  VariantInit(&local_18);
  puStackY_24 = &LAB_00412a18;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_00412164(&local_18,param_1);
  (*DAT_0066c818)(&local_18);
  local_8 = FUN_00412a6c(&local_18);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x412a17;
  FUN_00411d38(&local_18,uStackY_28,puVar1);
  return;
}

