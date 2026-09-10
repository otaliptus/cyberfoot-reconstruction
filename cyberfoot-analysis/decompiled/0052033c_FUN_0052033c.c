// Address: 0052033c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0052033c(undefined4 param_1,char param_2)

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
  FUN_00520408(param_1,1,PTR_PTR_00516020);
  FUN_00520408(param_1,0xf9,PTR_PTR_00515f4c);
  FUN_00520408(param_1,0xfe,PTR_PTR_005160e0);
  FUN_00520408(param_1,0xff,PTR_PTR_005161a8);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

