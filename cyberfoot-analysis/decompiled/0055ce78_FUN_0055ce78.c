// Address: 0055ce78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0055ce78(int param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_0041eba8(param_1,0,PTR_LAB_00552390);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

