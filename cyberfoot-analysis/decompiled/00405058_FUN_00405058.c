// Address: 00405058
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00405058(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *local_1010 [1024];
  
  local_1010[0] = param_1;
  if (param_3 < 1) {
    FUN_00404ff0(param_1);
  }
  else {
    iVar2 = param_3 + 1;
    if ((iVar2 < 0x7ff) && (iVar1 = FUN_00404a14(local_1010,0x7ff,param_2,param_3), 0 < iVar1)) {
      FUN_004050e4(param_1,local_1010,iVar1);
      return;
    }
    FUN_004055c4(param_1,iVar2);
    iVar2 = FUN_00404a14(*param_1,iVar2,param_2,param_3);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    FUN_004055c4(param_1,iVar2);
  }
  return;
}

