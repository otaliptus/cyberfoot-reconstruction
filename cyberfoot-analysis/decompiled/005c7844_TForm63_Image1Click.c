// Address: 005c7844
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm63_Image1Click(int param_1)

{
  int iVar1;
  
  FUN_00465978(*(undefined4 *)(param_1 + 0x360),*(undefined4 *)(*(int *)(param_1 + 0x344) + 0x40));
  iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if (iVar1 < 2) {
    DAT_006d2c20 = 0;
    FUN_00466128(*(undefined4 *)(param_1 + 0x380),0);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x380),1);
    DAT_006d2c20 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x380));
  }
  FUN_005c6efc(param_1);
  return;
}

