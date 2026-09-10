// Address: 004d6e30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d6e30(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined2 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined2 *)0x0;
  local_c = 0;
  puStack_1c = &LAB_004d6eaa;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00423834(param_2,&local_c);
  FUN_004d4ca4(local_c,&local_8);
  bVar2 = true;
  FUN_00405378(local_8);
  if (bVar2) {
    FUN_00419f5c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
  }
  else {
    FUN_00419f5c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d6eb1;
  puStack_1c = (undefined1 *)0x4d6ea1;
  FUN_004048d4(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x4d6ea9;
  FUN_00404ff0(&local_8);
  return;
}

