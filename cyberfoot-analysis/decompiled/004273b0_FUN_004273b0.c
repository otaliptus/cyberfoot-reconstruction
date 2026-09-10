// Address: 004273b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004273b0(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int local_14;
  undefined1 local_10;
  
  bVar3 = &stack0x00000000 == (undefined1 *)0x14;
  FUN_00404cf0(param_1[2],param_2);
  if (!bVar3) {
    if (param_2 != 0) {
      cVar2 = FUN_00409cc8(param_2);
      if (cVar2 == '\0') {
        local_10 = 0xb;
        local_14 = param_2;
        FUN_0040e468(PTR_DAT_0041b624,1,PTR_PTR_0066b1d8,0,&local_14);
        FUN_00404250();
      }
    }
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,0,param_1[2],param_2);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,param_1,param_1[2],param_2);
    }
    FUN_00427530(param_1,0);
    FUN_0042743c(param_1,param_2);
    FUN_00427530(param_1,1);
  }
  return;
}

