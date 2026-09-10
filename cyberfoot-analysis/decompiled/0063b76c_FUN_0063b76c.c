// Address: 0063b76c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0063b76c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0066b5b8;
  FUN_004060a8(&DAT_006d52f4,PTR_DAT_00635c8c,1,0);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b6b4);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      iVar3 = *(int *)(*(int *)puVar1 + 0x20 +
                      *(int *)(*(int *)PTR_DAT_0066b6b4 + iVar4 * 0x10) * 0x130);
      if ((-1 < iVar3) && (iVar3 == *(int *)(PTR_DAT_0066ac78 + 8))) {
        iVar3 = FUN_00405eec(DAT_006d52f4);
        FUN_004060a8(&DAT_006d52f4,PTR_DAT_00635c8c,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(DAT_006d52f4);
        *(undefined4 *)(DAT_006d52f4 + iVar3 * 8) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b6b4 + iVar4 * 0x10);
        iVar3 = FUN_00405ef4(DAT_006d52f4);
        *(undefined4 *)(DAT_006d52f4 + 4 + iVar3 * 8) =
             *(undefined4 *)(*(int *)PTR_DAT_0066b6b4 + 4 + iVar4 * 0x10);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004060a8(&DAT_006d52f8,PTR_DAT_00635cac,1,0);
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066ae58);
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    iVar4 = 0;
    do {
      iVar3 = *(int *)(*(int *)puVar1 + 0x20 +
                      *(int *)(*(int *)PTR_DAT_0066ae58 + iVar4 * 0x10) * 0x130);
      if ((-1 < iVar3) && (iVar3 == *(int *)(PTR_DAT_0066ac78 + 8))) {
        iVar3 = FUN_00405eec(DAT_006d52f8);
        FUN_004060a8(&DAT_006d52f8,PTR_DAT_00635cac,1,iVar3 + 1);
        iVar3 = FUN_00405ef4(DAT_006d52f8);
        *(undefined4 *)(DAT_006d52f8 + iVar3 * 8) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ae58 + iVar4 * 0x10);
        iVar3 = FUN_00405ef4(DAT_006d52f8);
        *(undefined4 *)(DAT_006d52f8 + 4 + iVar3 * 8) =
             *(undefined4 *)(*(int *)PTR_DAT_0066ae58 + 4 + iVar4 * 0x10);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

