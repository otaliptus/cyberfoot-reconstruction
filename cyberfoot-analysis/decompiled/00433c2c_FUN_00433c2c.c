// Address: 00433c2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00433c2c(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_18 = &LAB_00433ca2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (DAT_0066c944 == 0) {
    DAT_0066c944 = FUN_00433d44(PTR_DAT_00433b98,1);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FUN_00433db8(DAT_0066c944,param_1,&local_c);
  FUN_00406898(local_8,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00433ca9;
  puStack_18 = (undefined1 *)0x433ca1;
  FUN_00406880(&local_c,uStack_1c,puVar1);
  return;
}

