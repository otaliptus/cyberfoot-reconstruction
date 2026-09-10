// Address: 00421234
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4
FUN_00421234(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  uVar1 = FUN_00404da4(param_5);
  FUN_004212fc(param_1,param_3,uVar1,param_4);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

