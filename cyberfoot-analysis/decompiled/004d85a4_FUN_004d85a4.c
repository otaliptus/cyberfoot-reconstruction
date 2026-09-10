// Address: 004d85a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d85a4(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 local_10;
  undefined4 local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  local_c = param_3;
  FUN_00426e58(param_1,0,0);
  *(undefined4 *)(param_1 + 0x30) = local_c;
  FUN_00426f28(local_c,param_1);
  FUN_004d8504(param_4,*(undefined4 *)(param_1 + 0x30),&local_10);
  FUN_00432908(param_4,local_10,param_1);
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_28;
  }
  return param_1;
}

