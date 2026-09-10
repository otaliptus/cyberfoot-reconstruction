// Address: 004d5a34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d5a34(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_38 = &LAB_004d5b47;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (**(code **)(*param_1 + 0x14))();
  iVar4 = 0;
  thunk_FUN_0040502c(&local_20,&DAT_004d5b5c);
  if (-1 < local_14 + -1) {
    local_10 = 0;
    iVar5 = local_14;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_24);
      iVar2 = FUN_00405260(local_24);
      iVar3 = FUN_00405260(local_20);
      iVar4 = iVar4 + iVar2 + iVar3;
      local_10 = local_10 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_004050e4(local_c,0,iVar4);
  local_18 = *local_c;
  if (-1 < local_14 + -1) {
    local_10 = 0;
    iVar4 = local_14;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_1c);
      iVar5 = FUN_00405260(local_1c);
      if (iVar5 != 0) {
        FUN_00402a04(local_1c,local_18,iVar5 * 2);
        local_18 = local_18 + iVar5 * 2;
      }
      iVar5 = FUN_00405260(local_20);
      if (iVar5 != 0) {
        FUN_00402a04(local_20,local_18,iVar5 * 2);
        local_18 = local_18 + iVar5 * 2;
      }
      local_10 = local_10 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004d5b4e;
  puStack_38 = (undefined1 *)0x4d5b46;
  FUN_00405008(&local_24,3,puVar1);
  return;
}

