// Address: 005595ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005595ec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_5c = &LAB_00559709;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = param_2;
  FUN_004048d4(param_2);
  local_28 = FUN_0042fcb8(PTR_PTR_00429378,1);
  FUN_00430280(local_28);
  uVar2 = FUN_0042b5a8();
  uVar2 = FUN_004af018(PTR_DAT_004ae274,1,uVar2);
  iVar1 = *(int *)(param_1 + 0xa8);
  FUN_0040709c(0,0,0,local_48,0);
  uVar4 = 0;
  uVar3 = 2;
  FUN_00557074(uVar2,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),2,
               *(undefined4 *)(param_1 + 0xa4),0,local_38,local_24,local_20,local_1c,local_18,
               &local_14,&local_10,&local_c,*(undefined4 *)(iVar1 + 0x18),0x1fffffff,0x1fffffff,
               *(undefined4 *)(iVar1 + 8),0,0x3ff00000,1,0,0,0,0,1,0,*(undefined4 *)(iVar1 + 0xc),
               0xffffffff,0xffffffff,0,0,*(undefined4 *)(param_1 + 0xa0),local_48);
  FUN_00404928(local_8,local_10);
  FUN_00403a84(uVar2);
  FUN_00403a84(local_28);
  *in_FS_OFFSET = uVar3;
  FUN_004048f8(&local_14,3,uVar4,&LAB_00559710);
  return;
}

