// Address: 004e07f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e07f8(int *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_004e0889;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*PTR_DAT_0066adfc == '\0') {
    puVar3 = &local_c;
    uVar2 = (**(code **)(*param_1 + 0xd0))();
    FUN_00466208(param_1,&local_10);
    FUN_00404e04(local_10,1,uVar2,puVar3);
    FUN_004051d4(&local_8,local_c);
    FUN_00405260(local_8);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xd0))();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004e0890;
  puStack_1c = (undefined1 *)0x4e0880;
  FUN_004048f8(&local_10,2,puVar1);
  puStack_1c = (undefined1 *)0x4e0888;
  FUN_00404ff0(&local_8);
  return;
}

