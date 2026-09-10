// Address: 004d4ca4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d4ca4(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_004d4da7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_1 == 0) {
    puStack_20 = &stack0xfffffffc;
    FUN_00404ff0(param_2);
  }
  else {
    uVar2 = FUN_00404ba4(param_1);
    FUN_004055c4(param_2,uVar2);
    local_8 = FUN_00404da4(param_1);
    iVar3 = FUN_00404ba4(param_1);
    local_c = FUN_00405250(*param_2);
    iVar4 = FUN_00405260(*param_2);
    iVar3 = FUN_004d49c0(&local_8,param_1 + iVar3,&local_c,*param_2 + iVar4 * 2);
    if (iVar3 == 1) {
      FUN_00406d44(&PTR_DAT_004d4ba8,&local_10);
      FUN_0040e370(PTR_DAT_004d3454,1,local_10);
      FUN_00404250();
    }
    else if (iVar3 == 2) {
      FUN_00406d44(&PTR_DAT_004d4ba0,&local_14);
      FUN_0040e370(PTR_DAT_004d34b4,1,local_14);
      FUN_00404250();
    }
    iVar3 = FUN_00405250(*param_2);
    iVar4 = local_c - iVar3 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((local_c - iVar3 & 1U) != 0);
    }
    FUN_004055c4(param_2,iVar4);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d4dae;
  puStack_24 = (undefined1 *)0x4d4da6;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

