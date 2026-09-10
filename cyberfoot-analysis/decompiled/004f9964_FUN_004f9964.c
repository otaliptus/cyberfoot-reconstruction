// Address: 004f9964
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f9964(int *param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_005125c8(param_1,param_2,param_3,param_3);
  if (param_3 != param_2) {
    cVar1 = (**(code **)(*param_1 + 300))(param_1,param_2);
    cVar2 = (**(code **)(*param_1 + 300))(param_1,param_3);
    FUN_004f6acc(param_1[0x166],param_2,param_3);
    if (cVar1 != '\0') {
      if (param_3 < param_2) {
        if (param_3 < param_1[0x137]) {
          param_1[0x137] = param_3;
        }
        if (param_2 == param_1[0x13c]) {
          iVar3 = FUN_00514610(param_1,param_2);
          param_1[0x13c] = iVar3;
        }
      }
      else {
        if (param_2 == param_1[0x137]) {
          iVar3 = FUN_005145d4(param_1,param_2);
          param_1[0x137] = iVar3;
        }
        if (param_1[0x13c] < param_3) {
          param_1[0x13c] = param_3;
        }
      }
      if (cVar2 == '\0') {
        uVar4 = (**(code **)(*param_1 + 0x120))(param_1,param_3,*param_1,1);
        FUN_004f86b4(param_1,param_3,uVar4);
      }
    }
  }
  return;
}

