// Address: 004298a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004298a0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4298b6;
  FUN_0042967c(param_1);
  puStack_1c = &LAB_004298fc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = *(int *)(param_2 + 0x10);
  puStack_18 = &stack0xfffffffc;
  if (param_3 != iVar1) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    *(int *)(param_2 + 0x10) = param_3;
    puStack_18 = &stack0xfffffffc;
    FUN_00403c80(param_2);
    FUN_00429778(param_1,iVar1);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00429903;
  puStack_1c = (undefined1 *)0x4298fb;
  FUN_00429688(param_1,uStack_20,puVar2);
  return;
}

