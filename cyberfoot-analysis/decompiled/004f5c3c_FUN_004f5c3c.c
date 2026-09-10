// Address: 004f5c3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f5c3c(undefined4 param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004f5c98;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  (**(code **)(*param_2 + 0x18))(param_2,&local_8);
  uVar2 = local_8;
  (**(code **)(*param_3 + 0x18))(param_3,&local_c);
  FUN_00405378(uVar2,local_c);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f5c9f;
  puStack_1c = (undefined1 *)0x4f5c97;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

