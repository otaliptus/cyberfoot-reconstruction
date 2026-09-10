// Address: 004227f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004227f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  while( true ) {
    puStack_20 = (undefined1 *)0x42281a;
    cVar3 = FUN_00421c30(param_1);
    if (cVar3 != '\0') break;
    puStack_20 = (undefined1 *)0x422812;
    FUN_00422d00(param_1,param_2);
  }
  puStack_20 = (undefined1 *)0x422826;
  FUN_00422b9c(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  puStack_20 = (undefined1 *)0x422843;
  uVar4 = FUN_00403c80(param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  puStack_24 = &LAB_004228ba;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar5 = FUN_00403c80(param_2);
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  }
  while( true ) {
    cVar3 = FUN_00421c30(param_1);
    if (cVar3 != '\0') break;
    FUN_0042254c(param_1,0);
  }
  FUN_00422b9c(param_1);
  *in_FS_OFFSET = uStack_28;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  return;
}

