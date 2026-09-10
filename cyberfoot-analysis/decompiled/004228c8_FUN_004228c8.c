// Address: 004228c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004228c8(int param_1)

{
  char cVar1;
  undefined1 local_18 [20];
  
  cVar1 = FUN_004239d4(param_1);
  if (cVar1 == '\x05') {
    FUN_00421f98(param_1,local_18,10);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00422b50(param_1);
  }
  return;
}

