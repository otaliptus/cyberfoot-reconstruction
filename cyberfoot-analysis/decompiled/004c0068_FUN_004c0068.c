// Address: 004c0068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004c0068(int param_1,char param_2)

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
  uVar1 = FUN_00403a54(PTR_PTR_0041c090,1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

