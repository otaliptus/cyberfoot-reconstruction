// Address: 004ff2d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff2d0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_1c [16];
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = *(int *)(param_1 + 8);
  FUN_0042ab6c(*(undefined4 *)(iVar5 + 0x14),0xff00000f);
  FUN_0041c990(1,iVar2 + 1,iVar3 + -1,local_1c,iVar4);
  FUN_0042af8c(iVar5,local_1c);
  FUN_0042a88c(*(undefined4 *)(iVar5 + 0x10),0xff000014);
  FUN_0042b064(iVar5,0,iVar2);
  FUN_0042b004(iVar5,0,iVar4);
  FUN_0042b53c(iVar5,1,iVar2 + 1,0xff00000f);
  FUN_0042b53c(iVar5,iVar3 + -2,iVar2 + 1,0xff00000f);
  FUN_0042b064(iVar5,2,iVar2 + 1);
  FUN_0042b004(iVar5,iVar3 + -2,iVar2 + 1);
  FUN_0042a88c(*(undefined4 *)(iVar5 + 0x10),0xff000010);
  FUN_0042b53c(iVar5,1,iVar2,0xff00000f);
  FUN_0042b53c(iVar5,iVar3 + -2,iVar2,0xff00000f);
  FUN_0042b064(iVar5,iVar3 + -1,iVar2);
  FUN_0042b004(iVar5,iVar3 + -1,iVar4 + -1);
  FUN_0042b004(iVar5,iVar1 + -1,iVar4 + -1);
  FUN_0042b064(iVar5,2,iVar2);
  FUN_0042b004(iVar5,iVar3 + -2,iVar2);
  return;
}

