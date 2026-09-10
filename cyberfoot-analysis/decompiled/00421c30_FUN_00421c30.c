// Address: 00421c30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00421c30(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_004239d4(param_1);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return cVar1 == '\0';
}

