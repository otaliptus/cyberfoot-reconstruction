// Address: 0044ab5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044ab5c(undefined4 param_1,byte param_2)

{
  undefined1 local_40 [4];
  undefined4 local_3c;
  uint local_38;
  
  FUN_0044a934(param_1,local_40);
  local_3c = 0xf;
  if ((param_2 & 1) != 0) {
    local_38 = local_38 | 1;
  }
  if ((param_2 & 2) != 0) {
    local_38 = local_38 | 2;
  }
  if ((param_2 & 4) != 0) {
    local_38 = local_38 | 4;
  }
  if ((param_2 & 8) != 0) {
    local_38 = local_38 | 8;
  }
  FUN_0044a990(param_1,local_40);
  return;
}

