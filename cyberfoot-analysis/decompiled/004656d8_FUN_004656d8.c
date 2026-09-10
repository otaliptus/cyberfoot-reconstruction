// Address: 004656d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004656d8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00427174(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == param_1[0x1f]) {
      FUN_004661c0(param_1,0);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x3c))();
      if (param_2 == iVar1) {
        FUN_0046557c(param_1,0);
      }
    }
  }
  return;
}

