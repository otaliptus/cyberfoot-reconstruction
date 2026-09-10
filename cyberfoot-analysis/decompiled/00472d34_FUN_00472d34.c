// Address: 00472d34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00472d34(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_00427760(param_1,0);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x86) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

