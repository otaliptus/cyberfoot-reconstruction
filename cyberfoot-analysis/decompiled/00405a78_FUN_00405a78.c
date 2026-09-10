// Address: 00405a78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405a78(int param_1,undefined4 *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = *param_3;
  if (cVar2 == '\n') {
    do {
      FUN_00404928(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\v') {
    do {
      FUN_0040502c(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\f') {
    do {
      FUN_00405944(param_1,param_2);
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\r') {
    piVar1 = (int *)(param_3 + (byte)param_3[1] + 2);
    do {
      FUN_00405a78(param_1,param_2,piVar1[2],piVar1[1]);
      param_1 = param_1 + *piVar1;
      param_2 = (undefined4 *)((int)param_2 + *piVar1);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0e') {
    do {
      FUN_0040595c(param_1,param_2,param_3);
      param_1 = param_1 + *(int *)(param_3 + (byte)param_3[1] + 2);
      param_2 = (undefined4 *)((int)param_2 + *(int *)(param_3 + (byte)param_3[1] + 2));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else if (cVar2 == '\x0f') {
    do {
      FUN_00406898(param_1,*param_2);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  else {
    if (cVar2 != '\x11') {
      FUN_00402958(2);
      return;
    }
    do {
      FUN_00406204(param_1,*param_2,param_3);
      param_1 = param_1 + 4;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

