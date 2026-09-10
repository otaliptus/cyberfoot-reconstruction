// Address: 004673cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004673cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_4;
  local_8 = 0;
  if (param_1 != 0) {
    local_14 = param_2;
    local_10 = param_3;
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),&local_14);
  }
  return local_8;
}

