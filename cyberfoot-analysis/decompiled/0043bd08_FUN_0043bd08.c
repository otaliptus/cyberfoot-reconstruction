// Address: 0043bd08
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043bd08(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x43bd21;
    param_1 = FUN_00403de8();
    local_5 = extraout_DL;
  }
  puStack_30 = &LAB_0043bdf4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0046e7a8(param_1,0);
  FUN_004659c4(param_1,0x96);
  FUN_004659e8(param_1,0x96);
  uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  uVar2 = FUN_0043ba00(PTR_PTR_0043b900,1,uVar2,param_1);
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  FUN_00406d44(PTR_PTR_0066b798,&local_c);
  (**(code **)(**(int **)(param_1 + 0x214) + 0x38))(*(int **)(param_1 + 0x214),local_c);
  FUN_0043bf7c(param_1,0);
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfe;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_0043be1c;
  if (DAT_00662a9c == '\0') {
    local_10 = PTR_PTR_00439aa8;
    FUN_0041d5d0(&local_10,0);
    DAT_00662a9c = '\x01';
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0043bdfb;
  puStack_30 = (undefined1 *)0x43bdf3;
  FUN_004048d4(&local_c,uStack_34,puVar1);
  return;
}

