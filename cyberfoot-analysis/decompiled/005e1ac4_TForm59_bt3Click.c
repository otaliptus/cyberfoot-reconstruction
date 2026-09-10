// Address: 005e1ac4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm59_bt3Click(void)

{
  int iVar1;
  
  iVar1 = *(int *)(PTR_DAT_0066ac78 + 0x16c);
  FUN_004bc5a0(0xb4,iVar1 * 3,PTR_DAT_0066b574,
               *(undefined4 *)(PTR_DAT_0066b574 + iVar1 * 0x18 + -0x10),
               *(undefined4 *)(PTR_DAT_0066b574 + iVar1 * 0x18 + -0xc));
  FUN_0064fd84(*(undefined4 *)PTR_DAT_0066acf4,*(undefined4 *)(PTR_DAT_0066ac78 + 8));
  FUN_00650218(*(undefined4 *)PTR_DAT_0066acf4,*(undefined4 *)PTR_DAT_0066b5ac);
  FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
  *(undefined4 *)PTR_DAT_0066acf4 = 0xffffffff;
  *(undefined4 *)PTR_DAT_0066b5ac = 0xffffffff;
  FUN_00483bc4(DAT_006d34c0);
  return;
}

