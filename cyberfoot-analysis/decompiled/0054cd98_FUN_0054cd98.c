// Address: 0054cd98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054cd98(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  puStack_14 = (undefined1 *)0x54cdb1;
  local_8 = param_2;
  FUN_00405608(&local_8);
  puStack_18 = &LAB_0054cdf6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0054b340(local_8,&local_c);
  (**(code **)(**(int **)(param_1 + 0x23c) + 0x38))(*(int **)(param_1 + 0x23c),local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0054cdfd;
  puStack_18 = (undefined1 *)0x54cded;
  FUN_004048d4(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x54cdf5;
  FUN_00404ff0(&local_8);
  return;
}

