// Address: 00520e78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00520e78(int param_1,char param_2,uint param_3)

{
  undefined4 uVar1;
  uint extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  *(char *)(param_1 + 4) = (char)param_3;
  uVar1 = FUN_004027fc(param_3 & 0xff);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_004032a8(uVar1,*(undefined1 *)(param_1 + 4),0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}

