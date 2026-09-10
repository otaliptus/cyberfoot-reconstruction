// Address: 0040a0b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0040a0b0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int local_c;
  
  local_c = param_3;
  uVar1 = FUN_00405cbc(param_1,&local_c);
  *param_2 = uVar1;
  param_2[1] = extraout_EDX;
  return local_c == 0;
}

