// Address: 00403a54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00403a54(undefined4 param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    FUN_00403de8();
    cVar1 = extraout_DL;
  }
  if (cVar1 != '\0') {
    FUN_00403e40();
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}

