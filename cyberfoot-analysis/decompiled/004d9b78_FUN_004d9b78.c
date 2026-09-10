// Address: 004d9b78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d9b78(char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004d9beb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (param_1 != '\0') {
    uVar2 = FUN_00403c34(param_2,PTR_PTR_00472158);
    FUN_004d9614(uVar2,&local_8);
    uVar2 = local_8;
    FUN_004dd724(param_3,&local_c);
    FUN_00405378(uVar2,local_c);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d9bf2;
  puStack_20 = (undefined1 *)0x4d9bea;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

