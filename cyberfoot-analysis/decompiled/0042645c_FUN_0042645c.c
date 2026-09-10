// Address: 0042645c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042645c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int local_c;
  
  local_c = param_3;
  local_c = FUN_00404ba4(param_2);
  if (0xff < local_c) {
    local_c = 0xff;
  }
  FUN_004243ec(param_1,&local_c,1);
  uVar1 = FUN_00404da4(param_2);
  FUN_004243ec(param_1,uVar1,local_c);
  return;
}

