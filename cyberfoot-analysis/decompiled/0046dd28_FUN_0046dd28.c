// Address: 0046dd28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046dd28(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00465308(param_1,0);
  uVar1 = FUN_0042acbc(PTR_PTR_00460cd4,1);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  FUN_00464de4(uVar1,param_1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

