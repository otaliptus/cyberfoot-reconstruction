// Address: 00414654
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00414654(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  _union_2683 *p_Var2;
  _union_2683 *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _union_2683 local_1c;
  
  VariantInit((VARIANTARG *)&local_1c.n2);
  local_1c.n2.vt = 5;
  local_1c._8_4_ = param_4;
  local_1c._12_4_ = param_5;
  uVar6 = 7;
  uVar5 = 0;
  uVar4 = 0x400;
  p_Var3 = &local_1c;
  p_Var2 = &local_1c;
  uVar1 = (**(code **)PTR_DAT_0066b54c)();
  FUN_00411994(uVar1,*param_1,7,p_Var2,p_Var3,uVar4,uVar5,uVar6);
  return;
}

