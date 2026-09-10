// Address: 00463828
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00463828(int param_1,int param_2)

{
  char cVar1;
  
  FUN_004635d4(param_1,param_2);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00460994);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  }
  return;
}

