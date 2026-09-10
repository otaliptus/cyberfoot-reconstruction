// Address: 004e7f18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e7f18(int param_1,undefined4 *param_2)

{
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_c;
  
  FUN_004e7e18(param_1,0,auStack_18);
  param_2[1] = local_c;
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  param_2[2] = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 100);
  FUN_004e7f58(param_1,auStack_18);
  param_2[3] = local_14;
  return;
}

