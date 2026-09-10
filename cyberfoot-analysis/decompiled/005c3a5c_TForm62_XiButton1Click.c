// Address: 005c3a5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm62_XiButton1Click(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)PTR_DAT_0066b770 + 0x10 + DAT_006d2b8c * 0x30);
  *(undefined1 *)(*(int *)PTR_DAT_0066b770 + 0x29 + DAT_006d2b8c * 0x30) = 0;
  FUN_00466128(*(undefined4 *)(param_1 + 0x31c),0);
  if ((((iVar1 == 4) || (iVar1 == 6)) || (iVar1 == 9)) || (iVar1 == 0xf)) {
    DAT_006d2b90 = 1;
    _DAT_006d2b88 = *(undefined4 *)(*(int *)PTR_DAT_0066b770 + 0x1c + DAT_006d2b8c * 0x30);
  }
  return;
}

