// Address: 005e9970
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005e9970(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_0066b754;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b754);
  iVar4 = -1;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar3 = 0;
    do {
      iVar4 = iVar3;
      if (param_2 == *(int *)(*(int *)puVar1 + iVar3 * 0x78)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      iVar4 = -1;
    } while (iVar2 != 0);
  }
  if (iVar4 == -1) {
    iVar4 = FUN_00405eec(*(undefined4 *)puVar1);
    FUN_004060a8(puVar1,PTR_DAT_00488f80,1,iVar4 + 1);
    iVar4 = FUN_00405ef4(*(undefined4 *)puVar1);
    *(int *)(*(int *)puVar1 + iVar4 * 0x78) = param_2;
  }
  if (-1 < iVar4) {
    iVar2 = 1;
    puVar5 = &DAT_006d3684;
    do {
      *(undefined4 *)(*(int *)puVar1 + iVar4 * 0x78 + 0x2c + iVar2 * 4) = *puVar5;
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 4;
    } while (iVar2 != 0x13);
    iVar2 = 1;
    puVar5 = &DAT_006d3678;
    do {
      *(undefined4 *)(*(int *)puVar1 + iVar4 * 0x78 + iVar2 * 4) = *puVar5;
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 4;
    } while (iVar2 != 0xc);
  }
  return;
}

