// Address: 0062bea8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm11_l1Click(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0062bf4c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_006d4a0c = 1;
  FUN_00466208(*(undefined4 *)(param_1 + 800),&local_8);
  if (local_8 != 0) {
    (**(code **)(**(int **)(param_1 + 0x340) + 100))(*(int **)(param_1 + 0x340),1);
  }
  iVar3 = 0x28;
  puVar4 = &DAT_006d4a24;
  do {
    FUN_004663a8(*puVar4,0x2d5b24);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x28;
  puVar4 = &DAT_006d495c;
  puVar5 = &DAT_006d4a24;
  do {
    cVar2 = (**(code **)(*(int *)*puVar4 + 200))();
    if (cVar2 != '\0') {
      FUN_004663a8(*puVar5,0x182f13);
    }
    puVar1 = puStack_18;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0062bf53;
  puStack_1c = (undefined1 *)0x62bf4b;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

