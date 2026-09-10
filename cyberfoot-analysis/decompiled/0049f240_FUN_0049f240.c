// Address: 0049f240
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0049f240(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  if (param_3 < (uint)param_1[1]) {
    uVar1 = param_3;
  }
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    param_1[1] = param_1[1] - uVar1;
    if (*(int *)(param_1[7] + 0x18) == 1) {
      iVar2 = FUN_0049de50(param_1[0xc],*param_1,uVar1);
      param_1[0xc] = iVar2;
    }
    else if (*(int *)(param_1[7] + 0x18) == 2) {
      iVar2 = FUN_004a428c(param_1[0xc],*param_1,uVar1);
      param_1[0xc] = iVar2;
    }
    FUN_0049de20();
    *param_1 = *param_1 + uVar1;
    param_1[2] = param_1[2] + uVar1;
  }
  return uVar1;
}

