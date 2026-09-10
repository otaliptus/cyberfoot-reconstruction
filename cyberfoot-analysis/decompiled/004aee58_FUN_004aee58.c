// Address: 004aee58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004aee58(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  
  cVar4 = '\0';
  iVar3 = param_3;
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    iVar3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  uVar1 = *(undefined4 *)(iVar3 + 4);
  uVar2 = GdipCreateTexture();
  *(undefined4 *)(param_1 + 8) = uVar2;
  FUN_004aed98(param_1,param_3);
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uVar1;
  }
  return param_1;
}

