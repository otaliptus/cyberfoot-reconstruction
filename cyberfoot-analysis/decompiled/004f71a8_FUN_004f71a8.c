// Address: 004f71a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f71a8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_004f71dc(param_1);
  uVar3 = FUN_004f71d0(param_1);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1014);
  (**(code **)(*piVar1 + 0x1c8))(piVar1,uVar3,uVar2);
  return;
}

