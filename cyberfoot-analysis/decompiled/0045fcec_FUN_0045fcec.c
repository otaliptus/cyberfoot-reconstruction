// Address: 0045fcec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045fcec(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0045fda1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004048d4(param_3);
  if ((param_2 == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c),&local_8);
  }
  else {
    FUN_0040496c(&local_8,param_2);
  }
  if ((local_8 == 0) && (DAT_0066cb40 != (int *)0x0)) {
    (**(code **)(*DAT_0066cb40 + 0x20))(DAT_0066cb40,&local_8);
  }
  if (DAT_0066cb40 != (int *)0x0) {
    (**(code **)(*DAT_0066cb40 + 0x1c))(DAT_0066cb40,&local_c);
    FUN_00404c64(&local_8,3);
  }
  FUN_00404928(param_3,local_8);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045fda8;
  puStack_20 = (undefined1 *)0x45fda0;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

