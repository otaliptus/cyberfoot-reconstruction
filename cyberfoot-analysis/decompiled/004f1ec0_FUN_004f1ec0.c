// Address: 004f1ec0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1ec0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int *in_FS_OFFSET;
  undefined1 uVar4;
  int *in_stack_ffffffcc;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  uVar4 = 1;
  puStack_28 = &LAB_004f1fdf;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_2c;
  FUN_00466208(param_1,&local_14);
  FUN_00404cf0(local_14,*(undefined4 *)(param_1 + 0x268));
  if ((bool)uVar4) {
    in_stack_ffffffcc = (int *)0x0;
    FUN_004f2074(param_1);
    local_c = 0;
    local_8 = 0;
  }
  else {
    FUN_00466208(param_1,&local_18);
    if (local_18 == 0) {
      local_c = *(undefined4 *)(param_1 + 0x260);
      local_8 = *(undefined4 *)(param_1 + 0x264);
    }
    else {
      uVar3 = (uint)((*(byte *)(param_1 + 0x26c) & 4) != 0);
      in_stack_ffffffcc = &local_10;
      FUN_00466208(param_1,&local_1c);
      FUN_004f1cdc(param_1,local_1c,(*(byte *)(param_1 + 0x26c) & 2) != 0,in_stack_ffffffcc,uVar3);
      if (local_10 == 0) {
        FUN_0040bdc0(&local_10);
      }
      cVar2 = FUN_0040bf44(local_10,&local_c);
      if (cVar2 == '\0') {
        local_c = *(undefined4 *)(param_1 + 0x280);
        local_8 = *(undefined4 *)(param_1 + 0x284);
      }
      else {
        FUN_004f1bbc(param_1,&local_c);
        *(undefined4 *)(param_1 + 0x280) = local_c;
        *(undefined4 *)(param_1 + 0x284) = local_8;
      }
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = (int)in_stack_ffffffcc;
  puStack_2c = &LAB_004f1fe6;
  FUN_004048f8(&local_1c,3,puVar1);
  FUN_004048d4(&local_10);
  return;
}

