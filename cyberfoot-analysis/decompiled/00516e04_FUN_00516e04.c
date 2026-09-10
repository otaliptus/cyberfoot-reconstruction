// Address: 00516e04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00516e04(int param_1,char param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = 0;
  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_34 = (undefined1 *)0x516e21;
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_38 = &LAB_00516ebc;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_c = param_3;
  FUN_00516d34(param_1,0,param_3,param_7);
  if (((char)param_7 != '\x03') && ((char)param_7 != '\x06')) {
    FUN_00406d44(&PTR_DAT_00516714,&local_10);
    FUN_00516934(local_10);
  }
  if ((param_6 == 0) || (param_5 == 0)) {
    FUN_00406d44(&PTR_DAT_0051671c,&local_14);
    FUN_00516934(local_14);
  }
  puVar1 = puStack_34;
  *(int *)(param_1 + 0x20) = param_5;
  *(int *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00516ec3;
  puStack_38 = (undefined1 *)0x516ebb;
  FUN_004048f8(&local_14,2,puVar1);
  return;
}

