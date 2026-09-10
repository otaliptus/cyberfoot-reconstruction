// Address: 00467238
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00467238(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    FUN_004672f8(param_1,param_2,param_3);
  }
  return uVar1;
}

