// Address: 0041e394
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041e394(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41e3a6;
  FUN_0041e41c(param_1);
  puStack_14 = &LAB_0041e410;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    puStack_10 = &stack0xfffffffc;
    iVar2 = FUN_0041e078(*(undefined4 *)(param_1 + 4),param_2);
    if (iVar2 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_0041dfa8(**(undefined4 **)(param_1 + 4),PTR_PTR_0066b0c4,param_2);
      }
      goto LAB_0041e3fa;
    }
  }
  FUN_0041dec0(*(undefined4 *)(param_1 + 4),param_2);
LAB_0041e3fa:
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041e417;
  puStack_14 = (undefined1 *)0x41e40f;
  FUN_0041e480(param_1,uStack_18,puVar1);
  return;
}

