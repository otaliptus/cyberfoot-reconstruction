// Address: 004f9750
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f9750(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00511cc4(param_1,param_2,param_3,param_3);
  iVar2 = FUN_004f5b28(param_1[0x166],param_2);
  if (0 < *(int *)(iVar2 + 4)) {
    FUN_004f96f4(param_1,param_2);
  }
  iVar2 = FUN_004f5b28(param_1[0x166],param_2);
  if (*(int *)(iVar2 + 0x18) != 0) {
    iVar2 = FUN_004f5b28(param_1[0x166],param_2);
    FUN_004f595c(*(undefined4 *)(iVar2 + 0x18));
  }
  if ((char)param_1[0xaf] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,param_2);
  }
  else {
    iVar2 = param_1[300];
  }
  cVar1 = (**(code **)(*param_1 + 300))(param_1,param_2);
  FUN_004f66a4(param_1[0x166],param_2);
  if (cVar1 != '\0') {
    if (param_2 < param_1[0x137]) {
      iVar3 = FUN_005145d4(param_1,0);
      param_1[0x137] = iVar3;
    }
    if (param_2 < param_1[0x13c]) {
      param_1[0x13c] = param_1[0x13c] + -1;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x11c))();
      iVar3 = FUN_00514610(param_1,iVar3 + -1);
      param_1[0x13c] = iVar3;
    }
    if ((param_2 < param_1[0x136]) && (0 < param_1[0x136])) {
      param_1[0x136] = param_1[0x136] + -1;
    }
  }
  FUN_004f86b4(param_1,param_2,iVar2,0);
  iVar2 = (**(code **)(*param_1 + 0x138))();
  if (param_1[0x13c] <= iVar2) {
    uVar4 = (**(code **)(*param_1 + 0x138))();
    FUN_00403c80(param_1,param_1[0x128],uVar4);
    FUN_0050eda4(param_1,param_1[0x128],param_1[0x13c]);
  }
  FUN_00513cd0(param_1);
  (**(code **)(*param_1 + 0x1bc))();
  FUN_00403c80(param_1,6,param_2);
  iVar2 = (**(code **)(*param_1 + 0x11c))();
  if (iVar2 + -1 < param_1[0x167]) {
    iVar2 = (**(code **)(*param_1 + 0x11c))();
    param_1[0x167] = iVar2 + -1;
  }
  return;
}

