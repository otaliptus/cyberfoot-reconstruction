// Address: 004a6cd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a6cd0(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  bVar8 = 0;
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004a6da6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00403c10(param_2,PTR_PTR_004a55e0);
  if (cVar2 == '\0') {
    FUN_00406d44(PTR_PTR_0066b258,&local_8);
    FUN_004aa278(*(undefined4 *)(param_1 + 0xc),PTR_DAT_004a4cfc,local_8);
  }
  else {
    puVar5 = (undefined4 *)(param_1 + 0x45c + (uint)bVar8 * -8);
    puVar4 = (undefined4 *)(param_2 + 0x45c + (uint)bVar8 * -8);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
    puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar4 + (uint)bVar8 * -2 + 1;
    *puVar5 = *puVar4;
    *puVar6 = *puVar7;
    *(undefined1 *)(puVar6 + (uint)bVar8 * -2 + 1) = *(undefined1 *)(puVar7 + (uint)bVar8 * -2 + 1);
    FUN_004a716c(param_1);
    FUN_00408034(*(undefined4 *)(param_1 + 0x450),*(undefined4 *)(param_2 + 0x450),
                 *(int *)(param_1 + 0x468) * *(int *)(param_1 + 0x45c));
    FUN_00408034(*(undefined4 *)(param_1 + 0x454),*(undefined4 *)(param_2 + 0x454),
                 *(int *)(param_1 + 0x458) * *(int *)(param_1 + 0x45c));
    puVar4 = (undefined4 *)(param_2 + 0x49);
    puVar7 = (undefined4 *)(param_1 + 0x49);
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    FUN_004a6c70(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 0x1c));
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004a6dad;
  puStack_1c = (undefined1 *)0x4a6da5;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

