// Address: 00440c90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00440c90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00440cdf;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040d11c(&local_8,param_2,param_3,param_4,param_5);
  uVar2 = local_8;
  (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uVar2;
  puStack_1c = &LAB_00440ce6;
  uStack_20 = 0x440cde;
  FUN_004048d4(&local_8,uVar2,puVar1);
  return;
}

