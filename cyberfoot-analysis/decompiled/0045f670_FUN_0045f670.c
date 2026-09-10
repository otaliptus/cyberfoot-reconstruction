// Address: 0045f670
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0045f670(int param_1,char param_2)

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
  FUN_0045ee7c(param_1,0);
  FUN_004659c4(param_1,0x71);
  FUN_004659e8(param_1,0x11);
  *(undefined4 *)(param_1 + 0x50) = DAT_0045f6cc;
  *(undefined1 *)(param_1 + 0x210) = 1;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

