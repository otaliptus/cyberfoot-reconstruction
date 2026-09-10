// Address: 0046f9d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046f9d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  
  local_14 = 0;
  *param_3 = 0;
  iVar1 = FUN_0046f93c(param_2);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x14) != *(int *)(iVar1 + 0xa0))) {
    iVar2 = FUN_0046ef90(*(undefined4 *)(param_1 + 100));
    if ((iVar2 != 0) && (iVar1 == 0)) {
      FUN_0046ef90(*(undefined4 *)(param_1 + 100));
      FUN_0046f710();
    }
  }
  else {
    local_14 = FUN_0046f1dc(param_1,iVar1);
    if (local_14 != 0) {
      *param_3 = 1;
    }
  }
  return local_14;
}

