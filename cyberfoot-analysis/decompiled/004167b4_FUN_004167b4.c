// Address: 004167b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004167b4(short *param_1,short *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  undefined1 *puStackY_48;
  undefined1 *puVar1;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puVar2;
  VARIANTARG local_25;
  VARIANTARG local_15;
  undefined1 local_5;
  
  puVar2 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  puStack_3c = (undefined1 *)0x4167cc;
  VariantInit(&local_15);
  puStack_3c = &LAB_00416877;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  FUN_00412164(&local_15,param_1);
  if (*param_1 == 0x101) {
    (*DAT_0066c818)(&local_15);
  }
  if (*param_2 == 0x101) {
    puStackY_48 = (undefined1 *)0x416804;
    VariantInit(&local_25);
    puStackY_48 = &LAB_0041684b;
    uStackY_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_4c;
    FUN_00412164(&local_25,param_2);
    (*DAT_0066c818)(&local_25);
    local_5 = FUN_00417068(&local_15,&local_25,param_3);
    *in_FS_OFFSET = uStackY_4c;
    puStackY_48 = (undefined1 *)0x41684a;
    FUN_00411d38(&local_25,uStackY_4c,puVar1);
    return;
  }
  local_5 = FUN_00417068(&local_15,param_2,param_3);
  *in_FS_OFFSET = uStack_40;
  puStack_3c = (undefined1 *)0x416876;
  FUN_00411d38(&local_15,uStack_40,puVar2);
  return;
}

