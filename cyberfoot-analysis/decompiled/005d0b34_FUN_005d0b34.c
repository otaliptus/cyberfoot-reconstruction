// Address: 005d0b34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d0b34(void)

{
  int iVar1;
  
  do {
    if (*(int *)(PTR_DAT_0066ac78 + 0x5fc) <= DAT_006d2d34) {
      FUN_00466414(DAT_006d2d30,
                   CONCAT22((short)((uint)*(int *)(PTR_DAT_0066ac78 + 0x5fc) >> 0x10),0xfff5));
      FUN_004e1a98();
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066afdc);
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
      FUN_00483bc4(DAT_006d2d30);
      return;
    }
    DAT_006d2d34 = DAT_006d2d34 + 1;
    iVar1 = *(int *)(PTR_DAT_0066ac78 + DAT_006d2d34 * 4 + 0x600);
    *(int *)(PTR_DAT_0066ac78 + 0x600) = iVar1;
  } while (*(char *)(*(int *)PTR_DAT_0066af70 + 0x215 + iVar1 * 0x2f8) == '\0');
  FUN_005cf0b8();
  FUN_00483bc4(*(undefined4 *)PTR_DAT_0066afdc);
  return;
}

