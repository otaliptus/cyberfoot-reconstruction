// Address: 004e5708
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e5708(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_10;
  
  uVar1 = *param_3;
  iVar2 = param_3[1];
  uVar3 = param_3[2];
  iVar6 = param_3[3] - iVar2;
  if ((iVar6 != 0) && (iVar4 = param_3[3] + -1, iVar2 <= iVar4)) {
    local_10 = (iVar4 - iVar2) + 1;
    iVar4 = iVar2;
    do {
      uVar5 = FUN_004e54c4(param_1,param_5,param_4,(double)(iVar4 - iVar2) / (double)iVar6);
      FUN_0042a88c(*(undefined4 *)(param_2 + 0x10),uVar5);
      FUN_0042b064(param_2,uVar1,iVar4);
      FUN_0042b004(param_2,uVar3,iVar4);
      if (iVar6 <= iVar4 - iVar2) {
        return;
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

