// Address: 004657c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004657c4(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = FUN_0046795c(param_1,&param_5,&param_4);
  if ((cVar1 != '\0') &&
     ((((param_2 != param_1[0x10] || (param_3 != param_1[0x11])) || (param_5 != param_1[0x12])) ||
      (param_4 != param_1[0x13])))) {
    FUN_00466660(param_1,*(undefined1 *)((int)param_1 + 0x57),0);
    param_1[0x10] = param_2;
    param_1[0x11] = param_3;
    param_1[0x12] = param_5;
    param_1[0x13] = param_4;
    FUN_0046585c(param_1);
    (**(code **)(*param_1 + 0x7c))();
    FUN_004673cc(param_1,0x47,0,0);
    FUN_00403c80(param_1);
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      FUN_00403c80(param_1);
    }
  }
  return;
}

