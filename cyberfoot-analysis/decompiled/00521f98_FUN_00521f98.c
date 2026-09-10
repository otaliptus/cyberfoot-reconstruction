// Address: 00521f98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00521f98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  if (param_4._2_2_ != 0) {
    iVar1 = *(int *)(param_6 + -4);
    *(undefined4 *)(iVar1 + 0x90) = param_4;
    *(undefined4 *)(iVar1 + 0x94) = param_5;
    puStack_c = &LAB_00522001;
    uStack_10 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_10;
    FUN_005218dc(*(undefined4 *)(param_6 + -4),param_5,param_3,&LAB_005219c4,
                 *(undefined4 *)(param_6 + -4));
    *in_FS_OFFSET = uStack_10;
    iVar1 = *(int *)(param_6 + -4);
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    return;
  }
  return;
}

