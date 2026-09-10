// Address: 004695a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004695a4(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  FUN_00403c80(param_2,param_1);
  FUN_004673cc(param_1,0xb02c,param_2,1);
  FUN_00469510(param_1,param_2);
  if ((*(byte *)(param_2 + 7) & 2) == 0) {
    FUN_004673cc(param_2,0xb009,0,0);
    FUN_004673cc(param_2,0xb008,0,0);
    FUN_004673cc(param_2,0xb023,0,0);
    FUN_004673cc(param_2,0xb03d,0,0);
    cVar1 = FUN_00403c10(param_2,PTR_PTR_00461f94);
    if (cVar1 == '\0') {
      cVar1 = FUN_0046cde4(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0x7c))();
      }
    }
    else {
      FUN_004673cc(param_2,0xb011,0,0);
      FUN_0046a0f4(param_1);
    }
    FUN_00469204(param_1,param_2);
  }
  FUN_004673cc(param_1,0xb036,param_2,1);
  return;
}

