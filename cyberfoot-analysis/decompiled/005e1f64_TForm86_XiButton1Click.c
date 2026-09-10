// Address: 005e1f64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm86_XiButton1Click(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x16c));
  if (iVar1 == *(int *)(*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8)) {
    iVar1 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c));
    if (iVar1 == *(int *)(*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))
    goto LAB_005e202b;
  }
  uVar2 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x2f8) + 0x16c));
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = uVar2;
  uVar2 = FUN_0042ab64(*(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x16c));
  *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) = uVar2;
  FUN_006397ec(*(undefined4 *)PTR_DAT_0066b054);
  FUN_006380e8(*(undefined4 *)PTR_DAT_0066b054);
LAB_005e202b:
  FUN_00483bc4(DAT_006d34c8);
  return;
}

