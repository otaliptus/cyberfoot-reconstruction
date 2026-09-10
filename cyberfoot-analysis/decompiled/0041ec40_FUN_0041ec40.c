// Address: 0041ec40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041ec40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  uStack_8 = (**(code **)(param_1[1] + 0x1c))(param_1[1],1,param_1);
  (**(code **)(*param_1 + 0xc))(param_1,&uStack_8);
  return uStack_8;
}

