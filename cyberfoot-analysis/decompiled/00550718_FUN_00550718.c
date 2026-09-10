// Address: 00550718
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550718(undefined4 param_1,double *param_2,double *param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)*(float *)(param_9 + 8);
  dVar2 = (double)*(float *)(param_9 + 0xc);
  switch(param_4) {
  case 0:
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    break;
  case 1:
    *param_2 = (dVar1 - (double)CONCAT44(param_8,param_7)) / (double)_DAT_00550868;
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    break;
  case 2:
    *param_2 = dVar1 - (double)CONCAT44(param_8,param_7);
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    break;
  case 3:
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *param_3 = (dVar2 - (double)CONCAT44(param_6,param_5)) / (double)_DAT_00550868;
    break;
  case 4:
    *param_2 = (dVar1 - (double)CONCAT44(param_8,param_7)) / (double)_DAT_00550868;
    *param_3 = (dVar2 - (double)CONCAT44(param_6,param_5)) / (double)_DAT_00550868;
    break;
  case 5:
    *param_2 = dVar1 - (double)CONCAT44(param_8,param_7);
    *param_3 = (dVar2 - (double)CONCAT44(param_6,param_5)) / (double)_DAT_00550868;
    break;
  case 6:
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *param_3 = dVar2 - (double)CONCAT44(param_6,param_5);
    break;
  case 7:
    *param_2 = (dVar1 - (double)CONCAT44(param_8,param_7)) / (double)_DAT_00550868;
    *param_3 = dVar2 - (double)CONCAT44(param_6,param_5);
    break;
  case 8:
    *param_2 = dVar1 - (double)CONCAT44(param_8,param_7);
    *param_3 = dVar2 - (double)CONCAT44(param_6,param_5);
  }
  return;
}

