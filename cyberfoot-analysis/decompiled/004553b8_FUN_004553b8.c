// Address: 004553b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_004553b8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_004553ac(param_1);
  (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
  (**(code **)(*piVar1 + 0x28))(piVar1,param_3);
  (**(code **)(*piVar1 + 0x30))(piVar1,param_7);
  (**(code **)(*piVar1 + 0x2c))(piVar1,param_6);
  piVar1[9] = param_5;
  (**(code **)(*piVar1 + 0x24))(piVar1,param_4);
  uVar2 = FUN_0041ea50(piVar1);
  (**(code **)(*param_1 + 0x2c))(param_1,uVar2);
  return piVar1;
}

