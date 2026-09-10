// Address: 00429828
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00429828(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x429841;
  FUN_0042967c(param_1);
  puStack_20 = &LAB_00429891;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = *(int *)(param_2 + 0x10);
  puStack_1c = &stack0xfffffffc;
  iVar3 = FUN_00429694(param_1,param_3);
  *(int *)(param_2 + 0x10) = iVar3;
  if (iVar1 != iVar3) {
    FUN_00403c80(param_2);
  }
  FUN_00429778(param_1,iVar1);
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00429898;
  puStack_20 = (undefined1 *)0x429890;
  FUN_00429688(param_1,uStack_24,puVar2);
  return;
}

