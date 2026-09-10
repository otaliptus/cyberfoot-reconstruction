// Address: 00412420
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00412420(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_14;
  
  puVar1 = &stack0xfffffffc;
  puStackY_28 = (undefined1 *)0x412438;
  VariantInit(&local_14);
  puStackY_28 = &LAB_0041247c;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00412164(&local_14,param_2);
  (*DAT_0066c818)(&local_14);
  FUN_004126a8(param_1,&local_14,param_3);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_28 = (undefined1 *)0x41247b;
  FUN_00411d38(&local_14,uStackY_2c,puVar1);
  return;
}

