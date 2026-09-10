// Address: 00469d40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469d40(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  FUN_00467704(param_1,param_2);
  puVar3 = &LAB_00469bc8;
  puVar2 = &LAB_00469c00;
  uVar4 = param_1;
  uVar1 = FUN_00469c68();
  (**(code **)(*param_2 + 4))(param_2,"DesignSize",uVar1,puVar2,param_1,puVar3,uVar4);
  return;
}

