// Address: 005bc090
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005bc090(int param_1,char param_2)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  iVar1 = FUN_005bc1d0(PTR_DAT_005bbb24,1,param_1);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 8;
  }
  FUN_00406898(param_1 + 0x14,iVar1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

