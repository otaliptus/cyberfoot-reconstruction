// Address: 0040ef24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040ef24(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  undefined1 local_c [4];
  
  local_10 = 0;
  iVar1 = local_10;
  if (0 < param_2) {
    iVar1 = FUN_00404ba4(param_1);
    if (iVar1 < param_2) {
      param_2 = FUN_00404ba4(param_1);
    }
    iVar1 = param_2;
    if (DAT_0066c750 != '\0') {
      FUN_0040ee30(param_1,param_2,local_c,&local_10);
      iVar2 = FUN_00404ba4(param_1);
      iVar1 = local_10;
      if (iVar2 < local_10) {
        iVar1 = FUN_00404ba4(param_1);
      }
    }
  }
  local_10 = iVar1;
  return local_10;
}

