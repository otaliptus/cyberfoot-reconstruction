// Address: 0041f1b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f1b8(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0041f25f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x41f1e2;
  local_c = param_2;
  local_8 = param_1;
  FUN_0041f308(param_1);
  puStack_30 = &LAB_0041f242;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar3 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar5,&local_10);
      uVar2 = local_10;
      uVar4 = (**(code **)(*local_c + 0x18))(local_c,iVar5);
      (**(code **)(*local_8 + 0x3c))(local_8,uVar2,uVar4);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0041f249;
  puStack_30 = (undefined1 *)0x41f241;
  FUN_0041f3c4(local_8,uStack_34,puVar1);
  return;
}

