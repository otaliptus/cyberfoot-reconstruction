// Address: 005cdd30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm71_bt4Click(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  
  if (DAT_006d2d1c != 3) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x370),0);
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,CONCAT22(extraout_var,0xfff5));
    iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (1 < iVar1) {
      iVar1 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
      iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
      if (iVar1 == iVar2) {
        DAT_006d2d14 = 0;
        FUN_005cbc18(param_1,2);
      }
      else {
        DAT_006d2d14 = FUN_0054c0f0(*(undefined4 *)(param_1 + 0x36c));
        FUN_005cbc18(param_1,1);
      }
    }
    DAT_006d2d1c = 3;
    iVar1 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (1 < iVar1) {
      FUN_00466128(*(undefined4 *)(param_1 + 0x36c),1);
    }
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x2fc),1);
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  }
  return;
}

