// Address: 0044b1e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044b1e8(undefined4 param_1,byte param_2,int param_3)

{
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  ushort local_8e;
  int aiStack_8c [32];
  
  FUN_0044af40(param_1,auStack_a8);
  aiStack_8c[param_2] = param_3 * 0x14;
  local_a4 = 0x10;
  if ((short)local_8e < (short)(ushort)param_2) {
    local_8e = (ushort)param_2;
  }
  FUN_0044af74(param_1,auStack_a8);
  return;
}

