// Address: 0046ddc4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046ddc4(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(int *)(param_2 + 4) != 0) {
    puStack_10 = (undefined1 *)0x46dde6;
    FUN_0042b03c(param_1[0x58]);
    puStack_14 = &LAB_0046de5f;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_1c = (undefined1 *)0x46de05;
    puStack_10 = &stack0xfffffffc;
    FUN_0042b628(param_1[0x58],*(undefined4 *)(param_2 + 4));
    puStack_20 = &LAB_0046de3c;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x8c))();
    puVar1 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_0046de43;
    puStack_20 = (undefined1 *)0x46de3b;
    FUN_0042b628(param_1[0x58],0,puVar1);
    return;
  }
  return;
}

