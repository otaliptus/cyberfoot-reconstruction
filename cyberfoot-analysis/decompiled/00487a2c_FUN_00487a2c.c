// Address: 00487a2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487a2c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00487a84;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00487f78(param_1);
  if (cVar2 != '\0') {
    FUN_004887c4(param_1,&local_8);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xc))(*(int **)(param_1 + 0x4c),param_2,local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00487a8b;
  puStack_1c = (undefined1 *)0x487a83;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

