// Address: 0055da04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm7_Shape1MouseDown(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0055da81;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piVar1 = *(int **)(param_1 + 0x330);
  piVar1[0x16] = 0xffffff;
  cVar3 = (**(code **)(*piVar1 + 0x3c))();
  if (cVar3 != '\0') {
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x304) + 0x16c),
                 *(undefined4 *)(*(int *)(param_1 + 0x330) + 0x58));
  }
  FUN_00429e74(*(undefined4 *)(*(int *)(param_1 + 0x330) + 0x58),&local_8);
  FUN_00404928(&DAT_0067b400,local_8);
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0055da88;
  puStack_18 = (undefined1 *)0x55da80;
  FUN_004048d4(&local_8,uStack_1c,puVar2);
  return;
}

