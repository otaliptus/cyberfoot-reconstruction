// Address: 004d77b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d77b0(int param_1,char param_2)

{
  undefined4 uVar1;
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
  uVar1 = FUN_004d747c(PTR_PTR_004d65b4,1,param_1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

