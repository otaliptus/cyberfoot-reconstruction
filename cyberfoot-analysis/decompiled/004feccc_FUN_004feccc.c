// Address: 004feccc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004feccc(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined1 local_28 [16];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  local_c = param_2[3];
  iVar1 = *(int *)(param_1 + 8);
  local_8 = param_3;
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
  FUN_0041c990(1,local_14 + 1,local_10 + -1,local_28,local_c);
  FUN_0042af8c(iVar1,local_28);
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000014);
  FUN_0042b064(iVar1,0,local_14);
  FUN_0042b004(iVar1,0,local_c + 1);
  if (local_8 < 1) {
    FUN_0042b064(iVar1,1,local_14);
    FUN_0042b004(iVar1,local_10 + -1,local_14);
  }
  else {
    FUN_0042b53c(iVar1,1,local_14,0xff00000f);
    FUN_0042b53c(iVar1,local_10 + -2,local_14,0xff00000f);
    FUN_0042b064(iVar1,2,local_14);
    FUN_0042b004(iVar1,local_10 + -2,local_14);
  }
  FUN_0042a88c(*(undefined4 *)(iVar1 + 0x10),0xff000010);
  FUN_0042b53c(iVar1,1,local_c + -1,0xff00000f);
  FUN_0042b53c(iVar1,local_10 + -2,local_c + -1,0xff00000f);
  FUN_0042b064(iVar1,local_10 + -1,local_14);
  FUN_0042b004(iVar1,local_10 + -1,local_c);
  FUN_0042b064(iVar1,2,local_c + -1);
  FUN_0042b004(iVar1,local_10 + -2,local_c + -1);
  return;
}

