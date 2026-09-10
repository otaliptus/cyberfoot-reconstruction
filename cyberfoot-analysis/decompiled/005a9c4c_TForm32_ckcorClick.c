// Address: 005a9c4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm32_ckcorClick(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x5a9c62;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x328) + 200))();
  PTR_DAT_0066ac78[0xdb] = uVar1;
  puStack_14 = (undefined1 *)0x5a9c7c;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x328) + 200))();
  if (cVar2 == '\0') {
    puStack_14 = (undefined1 *)0x5a9c94;
    FUN_0064a178("opcoes","opcornalista",&DAT_005a9cf8);
  }
  else {
    puStack_14 = (undefined1 *)0x5a9caa;
    FUN_0064a178("opcoes","opcornalista",&DAT_005a9d2c);
  }
  puStack_18 = &LAB_005a9cde;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (*(int *)PTR_DAT_0066ad0c == 0xd) {
    puStack_14 = &stack0xfffffffc;
    FUN_00466754(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x334));
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}

