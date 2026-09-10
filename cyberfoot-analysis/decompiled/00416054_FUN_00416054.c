// Address: 00416054
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00416054(undefined4 param_1,undefined4 param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puVar1;
  _union_2683 local_14;
  
  puVar1 = &stack0xfffffffc;
  puStackY_24 = (undefined1 *)0x416069;
  VariantInit((VARIANTARG *)&local_14.n2);
  puStackY_24 = &LAB_004160be;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_00412164(&local_14,param_2);
  (*DAT_0066c818)(&local_14);
  if (local_14.n2.vt != 0xd) {
    FUN_00411500(CONCAT22(extraout_var,0x101),CONCAT22(extraout_var_00,0xd));
  }
  FUN_00406898(param_1,local_14._8_4_);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x4160bd;
  FUN_00411d38(&local_14,uStackY_28,puVar1);
  return;
}

