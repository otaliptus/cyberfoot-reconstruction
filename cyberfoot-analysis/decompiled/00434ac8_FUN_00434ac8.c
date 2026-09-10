// Address: 00434ac8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00434ac8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uVar2 = 1;
  puStack_1c = &LAB_00434b3b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404adc(&local_8,param_3);
  FUN_00404cf0(*(undefined4 *)(param_1 + 8),local_8);
  if (((bool)uVar2) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_00404adc(&local_c,param_4);
    FUN_00404cf0(*(undefined4 *)(param_1 + 0xc),local_c);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00434b42;
  puStack_1c = (undefined1 *)0x434b3a;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

