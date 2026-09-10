// Address: 004e0898
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e0898(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_004e092c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*PTR_DAT_0066adfc == '\0') {
    puVar3 = &local_c;
    FUN_004dd724(param_1,&local_10,param_3,puVar3);
    FUN_004053fc(local_10,1,param_2,puVar3);
    FUN_00404b6c(&local_8,local_c);
    uVar2 = FUN_00404ba4(local_8);
    (**(code **)(*param_1 + 0xdc))(param_1,uVar2);
  }
  else {
    puStack_1c = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xdc))(param_1,param_2);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004e0933;
  puStack_20 = (undefined1 *)0x4e0923;
  FUN_00405008(&local_10,2,puVar1);
  puStack_20 = (undefined1 *)0x4e092b;
  FUN_004048d4(&local_8);
  return;
}

