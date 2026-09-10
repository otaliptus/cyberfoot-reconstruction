// Address: 004ebc90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ebc90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  puStack_30 = &LAB_004ebd29;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14);
  FUN_0042ac88(uVar1,1);
  FUN_00409dd8(param_2,&local_8);
  uVar5 = 1;
  uVar4 = 2;
  uVar3 = 0;
  FUN_004051d4(&local_1c,local_8);
  uVar2 = 0;
  FUN_004e5898(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 0x208),&local_18,0,local_1c,uVar3,uVar4,
               uVar5);
  FUN_0042ac88(uVar1,0);
  *in_FS_OFFSET = uVar2;
  FUN_00404ff0(&local_1c,uVar2,uVar3,&LAB_004ebd30);
  FUN_004048d4(&local_8);
  return;
}

