// Address: 0041e9c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_0041e9c4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

