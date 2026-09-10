// Address: 0041ed0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ed0c(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_10 = (undefined1 *)0x41ed28;
    (**(code **)(*param_1 + 0x20))();
    puStack_14 = &LAB_0041ed66;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    while (puVar1 = puStack_10, 0 < *(int *)(param_1[2] + 8)) {
      FUN_0041e104(param_1[2]);
      FUN_00403a84();
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41ed6d;
    puStack_14 = (undefined1 *)0x41ed65;
    (**(code **)(*param_1 + 0x24))(param_1,*param_1,puVar1);
    return;
  }
  return;
}

