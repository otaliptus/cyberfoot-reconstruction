// Address: 0041f3d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f3d8(int *param_1,int *param_2)

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
  puStack_2c = &LAB_0041f46d;
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
        FUN_00404cf0(uVar2,local_18);
        if (!(bool)uVar5) goto LAB_0041f452;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        uVar5 = iVar3 == 0;
      } while (!(bool)uVar5);
    }
    local_d = 1;
  }
LAB_0041f452:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0041f474;
  puStack_2c = (undefined1 *)0x41f46c;
  FUN_004048f8(&local_18,2,puVar1);
  return;
}

