// Address: 0041d0b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041d0b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = FUN_0041cf9c(param_1,param_3);
  if (iVar2 == 0) {
    FUN_0041d024();
  }
  FUN_0041cac0(iVar2,param_2);
  local_1c = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < local_1c + -1) {
    local_18 = 0;
    do {
      iVar3 = FUN_0041e01c(*(undefined4 *)(param_1 + 4),local_18);
      if ((iVar3 != iVar2) && (iVar6 = *(int *)(*(int *)(iVar3 + 4) + 8) + -1, -1 < iVar6)) {
        do {
          uVar4 = FUN_0041e01c(*(undefined4 *)(iVar3 + 4),iVar6);
          cVar1 = thunk_FUN_00403cb4(uVar4,param_2);
          if (cVar1 != '\0') {
            iVar5 = FUN_0041cf9c(param_1,uVar4);
            if (iVar5 == iVar2) {
              FUN_0041df0c(*(undefined4 *)(iVar3 + 4),iVar6);
              FUN_0041dec0(*(undefined4 *)(iVar2 + 4),uVar4);
            }
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != -1);
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}

