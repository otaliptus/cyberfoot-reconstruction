// Address: 00415348
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00415348(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  undefined1 *puStackY_2c;
  VARIANTARG local_20;
  int *local_10;
  char local_9;
  undefined4 *local_8;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  local_8 = param_2;
  uVar2 = FUN_00418f24(*param_1,&local_10);
  local_9 = (char)uVar2;
  if (local_9 != '\0') {
    puStackY_2c = (undefined1 *)0x41537c;
    VariantInit(&local_20);
    puStackY_2c = &LAB_004153bd;
    uStackY_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_30;
    (**(code **)(*local_10 + 0x1c))(local_10,&local_20,param_1);
    FUN_00404928(local_8,local_20.n1._8_4_);
    puVar1 = puStackY_2c;
    *in_FS_OFFSET = 0x100;
    puStackY_2c = (undefined1 *)0x4153c4;
    uStackY_30 = 0x4153bc;
    uVar2 = FUN_00411d38(&local_20,0x100,puVar1);
    return uVar2;
  }
  return uVar2;
}

