// Address: 004430a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004430a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00443198(param_1,param_2,param_3,param_3);
  piVar2 = (int *)FUN_00443198(param_1,param_3);
  FUN_00443198(param_1,param_2);
  uVar3 = FUN_0041ea50();
  FUN_00443198(param_1,param_3);
  uVar4 = FUN_0041ea50();
  (**(code **)(*piVar1 + 0x14))(piVar1,uVar4);
  (**(code **)(*piVar2 + 0x14))(piVar2,uVar3);
  return;
}

