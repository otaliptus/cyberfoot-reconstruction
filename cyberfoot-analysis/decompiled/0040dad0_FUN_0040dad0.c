// Address: 0040dad0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040dad0(undefined4 param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24 [2];
  double local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uVar3 = 1;
  local_24[0] = 1;
  local_14 = 0;
  uStack_10 = 0;
  cVar1 = FUN_0040d434(param_1,local_24,&local_1c);
  if (cVar1 == '\0') {
LAB_0040db1b:
    uVar3 = FUN_0040da38(param_1,param_2);
  }
  else {
    iVar2 = FUN_00404ba4(param_1);
    if (local_24[0] <= iVar2) {
      cVar1 = FUN_0040d778(param_1,local_24,&local_14);
      if (cVar1 == '\0') goto LAB_0040db1b;
    }
    if (local_1c < (double)_DAT_0040db58) {
      *param_2 = local_1c - (double)CONCAT44(uStack_10,local_14);
    }
    else {
      *param_2 = local_1c + (double)CONCAT44(uStack_10,local_14);
    }
  }
  return uVar3;
}

