// Address: 00469824
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00469824(undefined4 param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = FUN_0046685c(param_1);
  if (cVar1 != '\0') {
    *param_2 = *param_2 | 0x2000;
  }
  cVar1 = FUN_0046688c(param_1);
  if (cVar1 != '\0') {
    *param_2 = *param_2 | 0x4000;
  }
  cVar1 = FUN_00403c80(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00403c80(param_1);
    if (cVar1 == '\0') {
      *param_2 = *param_2 | 0x1000;
    }
    else {
      cVar1 = FUN_00403c80(param_1);
      if (cVar1 == '\x01') {
        *param_2 = *param_2;
      }
    }
  }
  return;
}

