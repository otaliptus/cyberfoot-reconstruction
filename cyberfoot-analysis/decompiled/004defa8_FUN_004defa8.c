// Address: 004defa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004defa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004df026;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (*PTR_DAT_0066adfc != '\0') {
    cVar2 = FUN_004dea44(param_5);
    puVar1 = puStack_1c;
    if (cVar2 != '\0') {
      FUN_004dea9c(param_5,&local_c);
      FUN_004def4c(param_1,param_2,local_c,param_4);
      goto LAB_004df010;
    }
  }
  puStack_1c = puVar1;
  FUN_0046e368(param_1,param_2,local_8,param_4,param_5);
LAB_004df010:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004df02d;
  puStack_20 = (undefined1 *)0x4df025;
  FUN_00404ff0(&local_c,uStack_24,puVar1);
  return;
}

