// Address: 004ea1d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ea1d0(int param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004e907c(param_1,0,param_3);
  *(undefined4 *)(param_1 + 0x250) = param_3;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | _DAT_004ea240;
  FUN_0046cc00(param_1,0);
  *(undefined1 *)(param_1 + 0x254) = 1;
  *(undefined1 *)(param_1 + 0x255) = 0;
  FUN_00466128(param_1,0);
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

