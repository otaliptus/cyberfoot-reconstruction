// Address: 004d6eb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d6eb8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004d6f3b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar2 = FUN_00419ee8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_00405118(&local_c,uVar2);
  FUN_00426644(param_2,0x12);
  local_8 = FUN_00405260(local_c);
  FUN_004243ec(param_2,&local_8,4);
  uVar2 = FUN_00405250(local_c);
  FUN_004243ec(param_2,uVar2,local_8 * 2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d6f42;
  puStack_1c = (undefined1 *)0x4d6f3a;
  FUN_00404ff0(&local_c,uStack_20,puVar1);
  return;
}

