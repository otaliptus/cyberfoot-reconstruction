// Address: 0041263c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041263c(undefined4 param_1,short *param_2,int *param_3)

{
  char cVar1;
  int *local_14;
  
  local_14 = param_3;
  if (*param_2 == 0x101) {
    FUN_00412420(param_1,param_2,param_3);
  }
  else {
    cVar1 = FUN_00418f24(*param_2,&local_14);
    if (cVar1 == '\0') {
      cVar1 = FUN_00418f24(param_3,&local_14);
      if (cVar1 == '\0') {
        FUN_004125bc(param_1,param_2,param_3);
      }
      else {
        (**(code **)(*local_14 + 0x18))(local_14,param_1,param_2);
      }
    }
    else {
      (**(code **)(*local_14 + 0x1c))(local_14,param_1,param_2,param_3);
    }
  }
  return;
}

