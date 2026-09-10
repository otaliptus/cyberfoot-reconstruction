// Address: 004e0a50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e0a50(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004e0ad8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*PTR_DAT_0066adfc == '\0') {
    (**(code **)(*param_1 + 0xd4))(param_1,&local_c);
    FUN_004051d4(param_2,local_c);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    uVar2 = (**(code **)(*param_1 + 0xcc))();
    iVar3 = (**(code **)(*param_1 + 0xd0))();
    FUN_004dd724(param_1,&local_8);
    FUN_004053fc(local_8,iVar3 + 1,uVar2,param_2);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004e0adf;
  puStack_1c = (undefined1 *)0x4e0acf;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x4e0ad7;
  FUN_00404ff0(&local_8);
  return;
}

