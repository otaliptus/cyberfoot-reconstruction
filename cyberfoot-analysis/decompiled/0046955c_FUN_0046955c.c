// Address: 0046955c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046955c(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00461f94);
  if (cVar1 == '\0') {
    FUN_00464b24(param_1 + 0x198,param_2);
  }
  else {
    FUN_00464b24(param_1 + 0x194,param_2);
    FUN_00464b24(param_1 + 0x19c,param_2);
  }
  *(undefined4 *)(param_2 + 0x30) = 0;
  return;
}

