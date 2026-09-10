// Address: 00414c68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00414c68(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_1c;
  longlong local_c;
  
  puVar1 = &stack0xfffffffc;
  puStackY_28 = (undefined1 *)0x414c7a;
  VariantInit(&local_1c);
  puStackY_28 = &LAB_00414cbd;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00412164(&local_1c,param_1);
  (*DAT_0066c818)(&local_1c);
  FUN_00414d18(&local_1c);
  local_c = (longlong)ROUND(in_ST0);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_28 = (undefined1 *)0x414cbc;
  FUN_00411d38(&local_1c,uStackY_2c,puVar1);
  return;
}

