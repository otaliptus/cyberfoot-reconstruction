// Address: 00421504
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00421504(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  FUN_00404928(param_1 + 0x10,param_5);
  FUN_00404928(param_1 + 0x14,param_4);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

