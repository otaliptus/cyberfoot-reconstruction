// Address: 0042a9c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0042a9c4(int param_1,char param_2)

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
  uVar1 = FUN_00429694(DAT_0066c8e8,&DAT_00662920);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

