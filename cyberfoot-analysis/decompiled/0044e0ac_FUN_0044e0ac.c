// Address: 0044e0ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e0ac(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_004205fc(param_1,param_2);
  FUN_0041e098(param_1[0xd],param_2,0xffffffff);
  param_2 = param_2 + 1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (param_2 <= iVar1) {
    iVar1 = (iVar1 - param_2) + 1;
    do {
      FUN_0044e108(param_1,param_2);
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

