// Address: 004ff584
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff584(int param_1,int *param_2)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = *param_2;
  local_18 = param_2[1];
  local_14 = param_2[2];
  local_10 = param_2[3];
  iVar1 = *(int *)(param_1 + 8);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
  FUN_0042af8c(iVar1,&local_1c);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000011);
  FUN_0042b064(iVar1,local_14 + -1,local_18);
  FUN_0042b004(iVar1,local_14 + -1,local_10 + -1);
  FUN_0042b004(iVar1,local_1c + -1,local_10 + -1);
  return;
}

