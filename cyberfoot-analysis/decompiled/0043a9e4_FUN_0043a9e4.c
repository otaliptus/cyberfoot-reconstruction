// Address: 0043a9e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043a9e4(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  
  if ((*(byte *)((int)param_1 + 0x17a) & (byte)param_6) != 0) {
    cVar1 = FUN_0043a94c(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x8c))();
    }
    else {
      (**(code **)(*param_1 + 0x88))();
    }
  }
  if (*(short *)((int)param_1 + 0x172) != 0) {
    (*(code *)param_1[0x5c])(param_1[0x5d],param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

