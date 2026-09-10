// Address: 00455434
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00455434(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0041efb0(param_1,param_2);
  iVar2 = FUN_0041edb0(param_1);
  if (param_2 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - param_2) + 1;
    do {
      (**(code **)(*param_1 + 0x2c))(param_1,param_2);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

