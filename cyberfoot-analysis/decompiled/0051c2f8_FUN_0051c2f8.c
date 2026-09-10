// Address: 0051c2f8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0051c2f8(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_0051c118(param_1,0);
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(undefined1 *)(param_1 + 0x128) = 0;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

