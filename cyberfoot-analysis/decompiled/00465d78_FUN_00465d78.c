// Address: 00465d78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465d78(int param_1,undefined4 param_2)

{
  char cVar1;
  
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x30)) {
    cVar1 = FUN_00403c10(param_1,PTR_PTR_0047cb68);
    if (cVar1 != '\0') {
      FUN_00482690(param_1,param_2);
    }
  }
  return;
}

