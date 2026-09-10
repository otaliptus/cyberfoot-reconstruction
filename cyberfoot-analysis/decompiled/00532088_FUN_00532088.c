// Address: 00532088
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00532088(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff30;
  undefined4 in_stack_ffffff38;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_4c = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_50 = &LAB_005321a0;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_c = param_3;
  local_8 = param_2;
  FUN_004070b8(param_2,param_3,local_40);
  cVar2 = FUN_004070c0(param_1 + 0x21c,local_40);
  if (cVar2 != '\0') {
    uVar3 = FUN_0042b5a8(*(undefined4 *)(param_1 + 0x208));
    uVar3 = FUN_004af018(PTR_DAT_004ae274,1,uVar3);
    iVar1 = *(int *)(param_1 + 0x22c);
    in_stack_ffffff38 = 0;
    in_stack_ffffff30 = 2;
    FUN_005301c0(uVar3,*(undefined4 *)(iVar1 + 100),*(undefined4 *)(iVar1 + 0x48),2,
                 *(undefined4 *)(param_1 + 0x238),0,local_38,local_28,local_24,local_20,local_1c,
                 &local_18,&local_14,&local_10,*(undefined4 *)(iVar1 + 0x58),0x1fffffff,0x1fffffff,
                 *(undefined4 *)(iVar1 + 0x5c),0,0x3ff00000,1,0,0,0,0,0,1,
                 *(undefined4 *)(iVar1 + 0x60),0xffffffff,0xffffffff,local_c,local_8,
                 *(undefined4 *)(param_1 + 0x23c),param_1 + 0x21c);
    FUN_00403a84(uVar3);
  }
  FUN_00404928(param_4,local_10);
  *in_FS_OFFSET = in_stack_ffffff30;
  FUN_004048f8(&local_18,3,in_stack_ffffff38,&LAB_005321a7);
  return;
}

