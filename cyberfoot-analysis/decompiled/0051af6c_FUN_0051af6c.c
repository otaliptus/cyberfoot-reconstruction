// Address: 0051af6c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051af6c(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0051a8f0(param_1,0);
  uVar1 = FUN_0051ac8c(PTR_PTR_0051abdc,1,param_1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_0051aff4(param_1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

