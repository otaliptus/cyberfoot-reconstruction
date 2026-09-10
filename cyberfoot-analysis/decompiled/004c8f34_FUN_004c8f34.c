// Address: 004c8f34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c8f34(int param_1,int *param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (param_4 == '\0') {
    FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),param_3);
    FUN_0042b064(param_1,iVar1,iVar2);
    FUN_0042b004(param_1,iVar1,iVar2 + 5);
    FUN_0042b064(param_1,iVar1 + 1,iVar2 + 1);
    FUN_0042b004(param_1,iVar1 + 1,iVar2 + 4);
    FUN_0042b53c(param_1,iVar1 + 2,iVar2 + 2,param_3);
    FUN_0042b53c(param_1,iVar1 + 2,iVar2 + 1,param_5);
    FUN_0042b53c(param_1,iVar1 + 1,iVar2 + 4,param_5);
    FUN_0042b53c(param_1,iVar1 + 2,iVar2 + 1,param_5);
    FUN_0042b53c(param_1,iVar1 + 3,iVar2 + 2,param_5);
    FUN_0042b53c(param_1,iVar1 + 3,iVar2 + 2,param_5);
  }
  else {
    FUN_0042a88c(*(undefined4 *)(param_1 + 0x10),param_3);
    FUN_0042b064(param_1,iVar1,iVar2);
    FUN_0042b004(param_1,iVar1 + 5,iVar2);
    FUN_0042b064(param_1,iVar1 + 1,iVar2 + 1);
    FUN_0042b004(param_1,iVar1 + 4,iVar2 + 1);
    FUN_0042b53c(param_1,iVar1 + 2,iVar2 + 2,param_3);
    FUN_0042b53c(param_1,iVar1,iVar2 + 1,param_5);
    FUN_0042b53c(param_1,iVar1 + 4,iVar2 + 1,param_5);
    FUN_0042b53c(param_1,iVar1 + 1,iVar2 + 2,param_5);
    FUN_0042b53c(param_1,iVar1 + 3,iVar2 + 2,param_5);
    FUN_0042b53c(param_1,iVar1 + 2,iVar2 + 3,param_5);
  }
  return;
}

