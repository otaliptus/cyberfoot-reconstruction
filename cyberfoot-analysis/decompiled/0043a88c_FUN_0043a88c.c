// Address: 0043a88c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043a88c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_1c [19];
  undefined1 local_9;
  int local_8;
  
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x160);
    puStack_24 = (undefined1 *)0x43a8b2;
    FUN_0042a968(*(undefined4 *)(iVar1 + 0x10),1);
    puStack_24 = (undefined1 *)0x43a8bc;
    FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),1);
    puStack_24 = *(undefined1 **)(local_8 + 0x48);
    puStack_28 = *(undefined1 **)(local_8 + 0x4c);
    uStack_2c = 0x43a8d5;
    FUN_0042b158(iVar1,0,0);
  }
  local_9 = *(undefined1 *)(local_8 + 0x17c);
  *(undefined1 *)(local_8 + 0x17c) = 1;
  puStack_28 = &LAB_0043a93d;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar2 = *(undefined4 *)(local_8 + 0x160);
  puStack_24 = &stack0xfffffffc;
  FUN_0043a760(local_8,local_1c);
  FUN_0042b20c(uVar2,local_1c,*(undefined4 *)(*(int *)(local_8 + 0x168) + 0xc));
  *in_FS_OFFSET = uStack_2c;
  *(undefined1 *)(local_8 + 0x17c) = local_9;
  return;
}

