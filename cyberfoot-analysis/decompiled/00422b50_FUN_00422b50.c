// Address: 00422b50
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00422b50(undefined4 param_1)

{
  char cVar1;
  undefined4 local_c [2];
  
  cVar1 = FUN_00421f74(param_1);
  if (cVar1 == '\x13') {
    FUN_004239d4(param_1);
    FUN_00421f98(param_1,local_c,8);
  }
  else {
    local_c[0] = FUN_00422ae4(param_1);
  }
  return local_c[0];
}

