// Address: 0045bdb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0045bdb4(int param_1,char param_2)

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
  FUN_0046872c(param_1,0);
  if (*PTR_DAT_0066b148 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = DAT_0045be58;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = DAT_0045be54;
  }
  FUN_004659c4(param_1,0x79);
  FUN_004659e8(param_1,0x19);
  FUN_0046cd14(param_1,1);
  FUN_004663cc(param_1,0);
  *(undefined1 *)(param_1 + 0x20c) = 1;
  *(undefined1 *)(param_1 + 0x20f) = 1;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined1 *)(param_1 + 0x211) = 1;
  FUN_0045c4c4(param_1);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

