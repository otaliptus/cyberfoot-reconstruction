// Address: 00545088
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00545088(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;
  
  puStack_10 = (undefined1 *)0x54509a;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_14 = &LAB_005450d6;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0040502c(param_1 + 0x66,local_8);
  (**(code **)(*param_1 + 0x98))();
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005450dd;
  puStack_14 = (undefined1 *)0x5450d5;
  FUN_00404ff0(&local_8,uStack_18,puVar1);
  return;
}

