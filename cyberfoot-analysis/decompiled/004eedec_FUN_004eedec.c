// Address: 004eedec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eedec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x238) + 0x20))();
  uVar1 = *(undefined4 *)(param_1 + 0x238);
  uVar3 = FUN_00430280(uVar1);
  uVar3 = FUN_0042b510(uVar3,0,iVar2 + -1);
  FUN_004313f8(uVar1,uVar3);
  (**(code **)(**(int **)(param_1 + 0x238) + 0x3c))(*(int **)(param_1 + 0x238),1);
  FUN_004ef3b4(param_1);
  FUN_00469fa0(param_1);
  return;
}

