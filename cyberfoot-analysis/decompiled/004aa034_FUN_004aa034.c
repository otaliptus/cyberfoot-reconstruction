// Address: 004aa034
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004aa034(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0042cb20(param_1,0);
  uVar1 = FUN_0042acbc(PTR_PTR_00428c7c,1);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined1 *)(param_1 + 300) = DAT_004aa0b8;
  *(undefined1 *)(param_1 + 0x12d) = 7;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xffff;
  uVar1 = FUN_004a620c(PTR_PTR_004a53c4,1,param_1);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

