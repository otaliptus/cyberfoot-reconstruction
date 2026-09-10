// Address: 0042290c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042290c(int param_1)

{
  char cVar1;
  undefined1 local_10 [12];
  
  cVar1 = FUN_004239d4(param_1);
  if (cVar1 == '\x0f') {
    FUN_00421f98(param_1,local_10,4);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00422b50(param_1);
  }
  return;
}

