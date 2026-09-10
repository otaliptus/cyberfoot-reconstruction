// Address: 0046cd74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046cd74(int param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0046cdd8;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if ((param_2 != *(byte *)(param_1 + 0x1a7)) &&
     (*(byte *)(param_1 + 0x1a7) = param_2, puVar1 = &stack0xfffffffc,
     ((*(byte *)(param_1 + 0x1c) & 0x10) == 0 & param_2) != 0)) {
    FUN_00403c80(param_1,&local_8);
    FUN_00406898(param_1 + 0x17c,local_8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046cddf;
  puStack_18 = (undefined1 *)0x46cdd7;
  FUN_00406880(&local_8,uStack_1c,puVar1);
  return;
}

