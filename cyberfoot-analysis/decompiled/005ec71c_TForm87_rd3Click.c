// Address: 005ec71c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm87_rd3Click(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005ec7c0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_006466dc(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_8);
  if (local_8 != 0) {
    FUN_006466dc(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_c);
    (**(code **)(*DAT_006d35d4 + 0x4c))(DAT_006d35d4,local_c);
    iVar3 = 10;
    piVar2 = &DAT_006d35ec;
    do {
      (**(code **)(**(int **)(*piVar2 + 0x168) + 8))(*(int **)(*piVar2 + 0x168),DAT_006d35d4);
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x2e8 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = 3;
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005ec7c7;
  puStack_1c = (undefined1 *)0x5ec7bf;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

