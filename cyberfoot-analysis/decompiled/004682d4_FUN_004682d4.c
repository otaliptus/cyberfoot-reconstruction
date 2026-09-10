// Address: 004682d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004682d4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004272a8(param_1);
  iVar1 = (**(code **)(*param_1 + 0x3c))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x3c))();
    FUN_00403c80(param_1,uVar2,1);
  }
  FUN_0046585c(param_1);
  return;
}

