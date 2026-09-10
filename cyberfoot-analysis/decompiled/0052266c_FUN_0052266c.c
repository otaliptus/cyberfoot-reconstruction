// Address: 0052266c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0052266c(int param_1,char param_2)

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
  uVar1 = FUN_0051aa38(PTR_PTR_00516474,1,param_1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_0051af6c(PTR_PTR_00515bc8,1,param_1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0041e2c4(PTR_DAT_0041b7a0,1);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x3c) = DAT_00669ce4;
  *(undefined1 *)(param_1 + 0x3e) = DAT_00669ce8;
  *(undefined4 *)(param_1 + 0x40) = DAT_00669cec;
  *(undefined1 *)(param_1 + 0x44) = DAT_00669cf0;
  *(undefined1 *)(param_1 + 0x45) = DAT_00669cf4;
  *(undefined1 *)(param_1 + 0x58) = DAT_00669cf8;
  *(undefined4 *)(param_1 + 0x5c) = DAT_00669cfc;
  *(undefined4 *)(param_1 + 100) = 0x1fffffff;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  FUN_0052283c(param_1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

