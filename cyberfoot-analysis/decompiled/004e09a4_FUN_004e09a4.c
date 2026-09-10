// Address: 004e09a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e09a4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_004e0a40;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (*PTR_DAT_0066adfc == '\0') {
    iVar2 = FUN_004e07f8(param_1);
    puVar4 = &local_c;
    FUN_004dd724(param_1,&local_10);
    FUN_004053fc(local_10,iVar2 + 1,param_2,puVar4);
    FUN_00404b6c(&local_8,local_c);
    uVar3 = FUN_00404ba4(local_8);
    (**(code **)(*param_1 + 0xd8))(param_1,uVar3);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0xd8))(param_1,param_2);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004e0a47;
  puStack_24 = (undefined1 *)0x4e0a37;
  FUN_00405008(&local_10,2,puVar1);
  puStack_24 = (undefined1 *)0x4e0a3f;
  FUN_004048d4(&local_8);
  return;
}

