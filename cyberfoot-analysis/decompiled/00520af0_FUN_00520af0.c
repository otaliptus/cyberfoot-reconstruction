// Address: 00520af0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00520af0(undefined4 param_1,char param_2)

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
  FUN_00403a54(param_1,0);
  FUN_00520ba4(param_1,&DAT_00669da8,PTR_PTR_005163ac);
  FUN_00520ba4(param_1,&DAT_00669db3,PTR_PTR_005163ac);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

