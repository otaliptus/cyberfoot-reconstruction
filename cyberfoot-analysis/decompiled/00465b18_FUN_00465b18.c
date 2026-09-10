// Address: 00465b18
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465b18(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403c10(param_1,PTR_PTR_00461f94);
  if (cVar1 == '\0') {
    FUN_00466660(param_1,*(undefined1 *)((int)param_1 + 0x57),0);
  }
  if (param_2 == param_1[0xc]) {
    FUN_00465bc8(param_1,param_3);
  }
  else {
    FUN_00467470(param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    (**(code **)(*param_1 + 0x68))(param_1,0);
  }
  return;
}

