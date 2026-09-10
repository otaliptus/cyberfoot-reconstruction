// Address: 0044d5cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0044d5cc(int param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_d;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  uVar2 = FUN_0041edb0(param_3);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_0041e9c4(param_1,0,param_3);
  *(undefined4 *)(param_1 + 0x24) = 0x32;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  local_25 = 3;
  local_21 = 0;
  local_1d = *(undefined4 *)(param_1 + 0x24);
  local_d = 0xffffffff;
  FUN_0044dba8(param_3);
  cVar1 = FUN_0046cde4();
  if (cVar1 != '\0') {
    uVar2 = FUN_0041ea50(param_1);
    FUN_0044dba8(param_3);
    uVar3 = FUN_0046cae0();
    FUN_00432d80(uVar3,uVar2,&local_25);
  }
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_44;
  }
  return param_1;
}

