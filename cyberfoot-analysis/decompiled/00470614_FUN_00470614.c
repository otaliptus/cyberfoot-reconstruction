// Address: 00470614
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470614(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004706c3;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_2;
  (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),&local_8,4);
  (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),param_1 + 0x10,1);
  (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),param_1 + 0x20,4);
  iVar2 = param_4;
  FUN_0046ec20(param_1,&local_c);
  FUN_0047059c(local_c);
  iVar3 = iVar2;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = param_4;
    FUN_00470614(*(int *)(param_1 + 8),local_8 + 1,iVar2);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00470614(*(int *)(param_1 + 0xc),local_8,iVar3,param_4);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004706ca;
  puStack_1c = (undefined1 *)0x4706c2;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  return;
}

