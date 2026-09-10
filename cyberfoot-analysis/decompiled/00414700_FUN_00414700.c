// Address: 00414700
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00414700(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_1c;
  double local_c;
  
  puVar1 = &stack0xfffffffc;
  puStackY_28 = (undefined1 *)0x414712;
  VariantInit(&local_1c);
  puStackY_28 = &LAB_00414755;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00412164(&local_1c,param_1);
  (*DAT_0066c818)(&local_1c);
  FUN_004147b0(&local_1c);
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStackY_2c;
  puStackY_28 = (undefined1 *)0x414754;
  FUN_00411d38(&local_1c,uStackY_2c,puVar1);
  return;
}

