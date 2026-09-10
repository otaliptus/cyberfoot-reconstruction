// Address: 0043dc78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043dc78(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
    param_3 = extraout_ECX;
  }
  FUN_00473884(param_1,0,param_3,param_4);
  uVar1 = FUN_00403a54(PTR_DAT_0041b7f8,1);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

