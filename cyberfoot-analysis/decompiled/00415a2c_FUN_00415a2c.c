// Address: 00415a2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00415a2c(undefined2 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  VARIANTARG local_20;
  int *local_10;
  char local_9;
  undefined4 *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_24 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_30 = &LAB_00415ae4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_2;
  local_9 = FUN_00418f24(*param_1,&local_10);
  puVar1 = puStack_2c;
  if (local_9 != '\0') {
    puStack_3c = (undefined1 *)0x415a73;
    VariantInit(&local_20);
    puStack_3c = &LAB_00415ac7;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    (**(code **)(*local_10 + 0x1c))(local_10,&local_20,param_1);
    puVar2 = local_8;
    FUN_00405158(&local_24,local_20.n1._8_4_);
    FUN_004053fc(local_24,1,0x7fffffff,puVar2);
    puVar1 = puStack_3c;
    *in_FS_OFFSET = 8;
    puStack_3c = (undefined1 *)0x415ace;
    uStack_40 = 0x415ac6;
    FUN_00411d38(&local_20,8,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00415aeb;
  puStack_30 = (undefined1 *)0x415ae3;
  FUN_00404ff0(&local_24,uStack_34,puVar1);
  return;
}

