// Address: 004b16c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004b16c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = GdipSetPathGradientCenterColor();
  FUN_004aed9c(param_1,uVar1,extraout_ECX,uVar2,param_2);
  return *(undefined4 *)(param_1 + 8);
}

