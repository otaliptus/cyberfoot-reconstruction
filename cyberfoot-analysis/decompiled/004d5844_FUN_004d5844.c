// Address: 004d5844
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d5844(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004d58d9;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x14))();
  iVar4 = (**(code **)(*local_c + 0x14))();
  if (iVar3 == iVar4) {
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      uVar5 = true;
      do {
        (**(code **)(*local_8 + 0xc))(local_8,iVar4,&local_14);
        uVar2 = local_14;
        (**(code **)(*local_c + 0xc))(local_c,iVar4,&local_18);
        FUN_00405378(uVar2,local_18);
        if (!(bool)uVar5) goto LAB_004d58be;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        uVar5 = iVar3 == 0;
      } while (!(bool)uVar5);
    }
    local_d = 1;
  }
LAB_004d58be:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004d58e0;
  puStack_2c = (undefined1 *)0x4d58d8;
  FUN_00405008(&local_18,2,puVar1);
  return;
}

