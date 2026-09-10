// Address: 004f7140
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f7140(int param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000000;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined1 *)(param_1 + 0xc) = DAT_004f7178;
  *(undefined1 *)(param_1 + 0x1c) = DAT_004f717c;
  if (cVar1 != '\0') {
    FUN_00403e40();
    *in_FS_OFFSET = in_stack_00000000;
  }
  return;
}

