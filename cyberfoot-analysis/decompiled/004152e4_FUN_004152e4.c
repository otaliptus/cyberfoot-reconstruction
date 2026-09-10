// Address: 004152e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004152e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puVar1;
  VARIANTARG local_14;
  
  puVar1 = &stack0xfffffffc;
  puStackY_24 = (undefined1 *)0x4152f9;
  VariantInit(&local_14);
  puStackY_24 = &LAB_0041533a;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_00412164(&local_14,param_1);
  (*DAT_0066c818)(&local_14);
  FUN_004153cc(param_2,&local_14);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x415339;
  FUN_00411d38(&local_14,uStackY_28,puVar1);
  return;
}

