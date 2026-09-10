// Address: 004ff694
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ff694(int param_1,int *param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = param_2[3];
  iVar1 = *(int *)(param_1 + 8);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
  FUN_0042af8c(iVar1,&local_14);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000011);
  FUN_0042b064(iVar1,local_c + -1,local_10);
  FUN_0042b004(iVar1,local_c + -1,local_8 + -1);
  FUN_0042b004(iVar1,local_14 + -1,local_8 + -1);
  return;
}

