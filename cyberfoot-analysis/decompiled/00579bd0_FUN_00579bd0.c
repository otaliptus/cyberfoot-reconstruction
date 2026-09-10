// Address: 00579bd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00579bd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = &DAT_00669e68;
  do {
    if ((int)puVar2[*(int *)(*(int *)PTR_DAT_0066af70 + 0x58 + param_1 * 0x2f8) * 5 + 5] <
        *(int *)(*(int *)PTR_DAT_0066af70 + param_1 * 0x2f8 + 0x68 + iVar1 * 4)) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 5);
  return -1;
}

