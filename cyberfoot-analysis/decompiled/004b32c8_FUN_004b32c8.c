// Address: 004b32c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b32c8(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined1 local_9 [4];
  undefined1 local_5;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_004b3359;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
  if (extraout_EDX == 0) {
    if (uVar2 < 5) goto LAB_004b3343;
  }
  else if (extraout_EDX < 1) goto LAB_004b3343;
  FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),local_9,4);
  local_5 = 0;
  FUN_0040a974(local_9,&local_10);
  FUN_00404cf0(local_10,&DAT_004b3370);
  FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
LAB_004b3343:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004b3360;
  puStack_20 = (undefined1 *)0x4b3358;
  FUN_004048d4(&local_10,uStack_24,puVar1);
  return;
}

