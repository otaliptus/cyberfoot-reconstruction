// Address: 00420dec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00420dec(undefined4 param_1,char param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
    param_3 = extraout_ECX;
  }
  uVar2 = 0;
  FUN_00420e30(param_1,0,param_3,0,param_4);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uVar2;
  }
  return param_1;
}

