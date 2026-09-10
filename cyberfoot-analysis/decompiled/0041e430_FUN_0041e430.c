// Address: 0041e430
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e430(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41e442;
  FUN_0041e41c(param_1);
  puStack_14 = &LAB_0041e473;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0041e1b8(*(undefined4 *)(param_1 + 4),param_2);
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041e47a;
  puStack_14 = (undefined1 *)0x41e472;
  FUN_0041e480(param_1,uStack_18,puVar1);
  return;
}

