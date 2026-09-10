// Address: 0041cb9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0041cb9c(int param_1,char param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
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
  uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_00403a54(PTR_PTR_0041bda0,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_0041dec0(uVar1,param_3);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}

