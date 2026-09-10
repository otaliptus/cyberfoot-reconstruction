// Address: 004c2794
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2794(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28 [9];
  
  bVar5 = 0;
  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  puStack_40 = &LAB_004c27ee;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  FUN_00409dd8(param_2,&local_2c);
  FUN_004c2d5c(local_2c,local_28);
  puVar1 = puStack_3c;
  puVar3 = local_28;
  puVar4 = (undefined4 *)(param_1 + 4);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004c27f5;
  puStack_40 = (undefined1 *)0x4c27ed;
  FUN_004048d4(&local_2c,uStack_44,puVar1);
  return;
}

