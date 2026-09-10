// Address: 00421afc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00421afc(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_004239d4(param_1);
  if (param_2 != cVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00423ae4(param_1);
    FUN_00421a70();
  }
  return;
}

