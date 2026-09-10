// Address: 0044e4c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044e4c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_18;
  
  bVar2 = false;
  if (param_2 == 0) {
    if (param_3 != *(int *)(param_1 + 0x10)) {
      bVar2 = true;
      *(int *)(param_1 + 0x10) = param_3;
      if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x244) == '\0') {
        local_34 = 2;
        local_18 = 0xffffffff;
        local_30 = FUN_0044e73c(param_1);
        local_2c = 0;
        uVar3 = FUN_0044e248(param_1);
        FUN_00432c40(uVar3,&local_34);
      }
    }
  }
  else if (param_2 == 1) {
    if (param_3 != *(int *)(param_1 + 0x1c)) {
      bVar2 = true;
      *(int *)(param_1 + 0x1c) = param_3;
      if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x244) == '\0') {
        uVar7 = 0xf00;
        uVar3 = FUN_00432b5c(*(int *)(param_1 + 0x1c) + 1,0,param_3,0xf00);
        uVar4 = FUN_0044e73c(param_1);
        uVar5 = FUN_0044e248(param_1);
        FUN_00432e78(uVar5,uVar4,uVar3,uVar7);
      }
    }
  }
  else if ((param_2 == 2) && (param_3 != *(int *)(param_1 + 0x20))) {
    bVar2 = true;
    *(int *)(param_1 + 0x20) = param_3;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar6 = param_3;
    if ((*(char *)(iVar1 + 0x274) != '\0') && (param_3 == -1)) {
      iVar6 = 0;
    }
    if (*(char *)(iVar1 + 0x244) == '\0') {
      uVar7 = 0xf000;
      uVar3 = FUN_00432c24(iVar6 + 1,0,param_3,0xf000);
      uVar4 = FUN_0044e73c(param_1);
      uVar5 = FUN_0044e248(param_1);
      FUN_00432e78(uVar5,uVar4,uVar3,uVar7);
    }
  }
  if ((bVar2) && (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x244) == '\0')) {
    uVar3 = FUN_0044e73c(param_1);
    uVar4 = FUN_0044e73c(param_1);
    uVar5 = FUN_0044e21c(param_1);
    FUN_0044fe88(uVar5,uVar4,uVar3);
  }
  return;
}

