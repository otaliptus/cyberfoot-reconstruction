// Address: 00498d58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498d58(int param_1)

{
  FUN_004988fc(param_1,0xee);
  FUN_0049891c(param_1,0xe);
  FUN_004988cc(param_1,0x41);
  FUN_004988cc(param_1,100);
  FUN_004988cc(param_1,0x6f);
  FUN_004988cc(param_1,0x62);
  FUN_004988cc(param_1,0x65);
  FUN_0049891c(param_1,100);
  FUN_0049891c(param_1,0);
  FUN_0049891c(param_1,0);
  if (*(int *)(param_1 + 0x3c) == 3) {
    FUN_004988cc(param_1,1);
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 5) {
    FUN_004988cc(param_1,0);
    return;
  }
  FUN_004988cc(param_1,2);
  return;
}

