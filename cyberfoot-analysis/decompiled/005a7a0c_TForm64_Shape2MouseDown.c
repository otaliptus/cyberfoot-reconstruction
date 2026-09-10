// Address: 005a7a0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm64_Shape2MouseDown(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005a7ab0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar4 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c));
  piVar1 = *(int **)(param_1 + 0x324);
  piVar1[0x16] = iVar4;
  cVar3 = (**(code **)(*piVar1 + 0x3c))();
  if (cVar3 != '\0') {
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c),
                 *(undefined4 *)(*(int *)(param_1 + 0x324) + 0x58));
    FUN_00429e74(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x58),&local_8);
    FUN_0064a178("opcoes",&DAT_005a7ac8,local_8);
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xe8) = *(undefined4 *)(*(int *)(param_1 + 0x324) + 0x58);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005a7ab7;
  puStack_18 = (undefined1 *)0x5a7aaf;
  FUN_004048d4(&local_8,uStack_1c,puVar2);
  return;
}

