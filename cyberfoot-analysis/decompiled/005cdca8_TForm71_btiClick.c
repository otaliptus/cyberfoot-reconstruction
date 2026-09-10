// Address: 005cdca8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm71_btiClick(int param_1)

{
  undefined2 extraout_var;
  
  FUN_00466128(*(undefined4 *)(param_1 + 0x370),1);
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,CONCAT22(extraout_var,0xfff5));
  FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
  if (DAT_006d2d18 == -1) {
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),1);
  }
  else {
    DAT_006d2d18 = -1;
    FUN_005cc7b0(param_1,2);
    FUN_00466128(*(undefined4 *)(param_1 + 0x324),1);
    FUN_00466128(*(undefined4 *)(param_1 + 0x2fc),0);
  }
  FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
  return;
}

