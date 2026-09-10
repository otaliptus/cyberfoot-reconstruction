// Address: 0062d9a0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm92_grClick(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0062da37;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x31c) + 200))();
  if (cVar2 == '\0') {
    thunk_FUN_0040502c(&local_8,&DAT_0062da50);
  }
  else {
    thunk_FUN_0040502c(&local_8,&DAT_0062da48);
  }
  FUN_00404b6c(&local_c,local_8);
  FUN_0064a178("opcoes",&DAT_0062da5c,local_c);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x31c) + 200))();
  puVar1 = puStack_14;
  *PTR_DAT_0066b144 = uVar3;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0062da3e;
  puStack_18 = (undefined1 *)0x62da2e;
  FUN_004048d4(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x62da36;
  FUN_00404ff0(&local_8);
  return;
}

