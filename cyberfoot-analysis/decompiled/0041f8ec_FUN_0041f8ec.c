// Address: 0041f8ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041f8ec(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_0041f964;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar2 + -1) {
    local_c = 0;
    do {
      (**(code **)(*param_1 + 0xc))(param_1,local_c,&local_10);
      iVar3 = (**(code **)(*param_1 + 0x34))(param_1,local_10,local_8);
      if (iVar3 == 0) goto LAB_0041f94e;
      local_c = local_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_c = -1;
LAB_0041f94e:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041f96b;
  puStack_24 = (undefined1 *)0x41f963;
  FUN_004048d4(&local_10,uStack_28,puVar1);
  return;
}

