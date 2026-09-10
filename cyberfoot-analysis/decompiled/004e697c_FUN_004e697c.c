// Address: 004e697c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e697c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_10;
  
  uVar1 = *param_2;
  iVar2 = param_2[1];
  uVar3 = param_2[2];
  iVar4 = param_2[3];
  if ((iVar4 != iVar2) && (iVar2 <= iVar4 + -1)) {
    local_10 = ((iVar4 + -1) - iVar2) + 1;
    iVar6 = iVar2;
    do {
      uVar5 = FUN_004e6628(param_3,param_4);
      FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),uVar5);
      FUN_0042b064(param_1,uVar1,iVar6);
      FUN_0042b004(param_1,uVar3,iVar6);
      if (iVar4 - iVar2 <= iVar6 - iVar2) {
        return;
      }
      iVar6 = iVar6 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

