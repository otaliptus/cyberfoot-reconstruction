// Address: 004264a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004264a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 in_ZF;
  int local_10;
  
  local_10 = param_3;
  FUN_00404cf0(param_2,param_3);
  if ((bool)in_ZF) {
    local_10 = FUN_00404ba4(param_2);
    if (local_10 < 0x100) {
      FUN_00426644(param_1,6);
      FUN_004243ec(param_1,&local_10,1);
    }
    else {
      FUN_00426644(param_1,0xc);
      FUN_004243ec(param_1,&local_10,4);
    }
    FUN_004243ec(param_1,param_2,local_10);
  }
  else {
    local_10 = FUN_00404ba4(param_3);
    FUN_00426644(param_1,0x14);
    FUN_004243ec(param_1,&local_10,4);
    FUN_004243ec(param_1,param_3,local_10);
  }
  return;
}

