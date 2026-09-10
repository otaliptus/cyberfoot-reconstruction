// Address: 004729e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004729e4(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_00427174(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == param_1[0xe]) {
      (**(code **)(*param_1 + 0x34))(param_1,0);
    }
    else {
      cVar1 = FUN_00403c10(param_2,PTR_PTR_00471bdc);
      if (cVar1 != '\0') {
        FUN_00472a4c(param_1,param_2);
      }
    }
  }
  return;
}

