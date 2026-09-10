// Address: 0044b048
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044b048(undefined4 param_1,byte param_2)

{
  int iVar1;
  undefined1 auStack_a4 [4];
  undefined4 local_a0;
  ushort local_9c;
  
  if (param_2 == 0) {
    FUN_0044b128(param_1,0);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_0044b108(param_1);
    if (iVar1 < 10) {
      FUN_0044b128(param_1,10);
    }
  }
  FUN_0044af24(param_1,auStack_a4);
  local_a0 = 0x20;
  local_9c = (ushort)param_2;
  FUN_0044af74(param_1,auStack_a4);
  return;
}

